// DO NOT EDIT! This file generated by scripts/gen-s-parser.py

#ifdef INSTRUCTION_PARSER
#undef INSTRUCTION_PARSER
char op[27] = {'\0'};
strncpy(op, s[0]->c_str(), 26);
switch (op[0]) {
  case 'b': {
    switch (op[1]) {
      case 'l': return makeBlock(s); // block
      case 'r': {
        switch (op[2]) {
          case '\0': return makeBreak(s); // br
          case '_': {
            switch (op[3]) {
              case 'i': return makeBreak(s); // br_if
              case 't': return makeBreakTable(s); // br_table
              default: goto parse_error;
            }
          }
          default: goto parse_error;
        }
      }
      default: goto parse_error;
    }
  }
  case 'c': {
    switch (op[1]) {
      case 'a': {
        switch (op[4]) {
          case '\0': return makeCall(s); // call
          case '_': return makeCallIndirect(s); // call_indirect
          default: goto parse_error;
        }
      }
      case 'u': return makeHost(s, HostOp::CurrentMemory); // current_memory
      default: goto parse_error;
    }
  }
  case 'd': return makeDrop(s); // drop
  case 'e': return makeThenOrElse(s); // else
  case 'f': {
    switch (op[1]) {
      case '3': {
        switch (op[4]) {
          case 'a': {
            switch (op[5]) {
              case 'b': return makeUnary(s, UnaryOp::AbsFloat32); // f32.abs
              case 'd': return makeBinary(s, BinaryOp::AddFloat32); // f32.add
              default: goto parse_error;
            }
          }
          case 'c': {
            switch (op[5]) {
              case 'e': return makeUnary(s, UnaryOp::CeilFloat32); // f32.ceil
              case 'o': {
                switch (op[6]) {
                  case 'n': {
                    switch (op[7]) {
                      case 's': return makeConst(s, f32); // f32.const
                      case 'v': {
                        switch (op[12]) {
                          case 's': {
                            switch (op[15]) {
                              case '3': return makeUnary(s, UnaryOp::ConvertSInt32ToFloat32); // f32.convert_s/i32
                              case '6': return makeUnary(s, UnaryOp::ConvertSInt64ToFloat32); // f32.convert_s/i64
                              default: goto parse_error;
                            }
                          }
                          case 'u': {
                            switch (op[15]) {
                              case '3': return makeUnary(s, UnaryOp::ConvertUInt32ToFloat32); // f32.convert_u/i32
                              case '6': return makeUnary(s, UnaryOp::ConvertUInt64ToFloat32); // f32.convert_u/i64
                              default: goto parse_error;
                            }
                          }
                          default: goto parse_error;
                        }
                      }
                      default: goto parse_error;
                    }
                  }
                  case 'p': return makeBinary(s, BinaryOp::CopySignFloat32); // f32.copysign
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 'd': {
            switch (op[5]) {
              case 'e': return makeUnary(s, UnaryOp::DemoteFloat64); // f32.demote/f64
              case 'i': return makeBinary(s, BinaryOp::DivFloat32); // f32.div
              default: goto parse_error;
            }
          }
          case 'e': return makeBinary(s, BinaryOp::EqFloat32); // f32.eq
          case 'f': return makeUnary(s, UnaryOp::FloorFloat32); // f32.floor
          case 'g': {
            switch (op[5]) {
              case 'e': return makeBinary(s, BinaryOp::GeFloat32); // f32.ge
              case 't': return makeBinary(s, BinaryOp::GtFloat32); // f32.gt
              default: goto parse_error;
            }
          }
          case 'l': {
            switch (op[5]) {
              case 'e': return makeBinary(s, BinaryOp::LeFloat32); // f32.le
              case 'o': return makeLoad(s, f32, /*isAtomic=*/false); // f32.load
              case 't': return makeBinary(s, BinaryOp::LtFloat32); // f32.lt
              default: goto parse_error;
            }
          }
          case 'm': {
            switch (op[5]) {
              case 'a': return makeBinary(s, BinaryOp::MaxFloat32); // f32.max
              case 'i': return makeBinary(s, BinaryOp::MinFloat32); // f32.min
              case 'u': return makeBinary(s, BinaryOp::MulFloat32); // f32.mul
              default: goto parse_error;
            }
          }
          case 'n': {
            switch (op[6]) {
              case '\0': return makeBinary(s, BinaryOp::NeFloat32); // f32.ne
              case 'a': return makeUnary(s, UnaryOp::NearestFloat32); // f32.nearest
              case 'g': return makeUnary(s, UnaryOp::NegFloat32); // f32.neg
              default: goto parse_error;
            }
          }
          case 'r': return makeUnary(s, UnaryOp::ReinterpretInt32); // f32.reinterpret/i32
          case 's': {
            switch (op[5]) {
              case 'q': return makeUnary(s, UnaryOp::SqrtFloat32); // f32.sqrt
              case 't': return makeStore(s, f32, /*isAtomic=*/false); // f32.store
              case 'u': return makeBinary(s, BinaryOp::SubFloat32); // f32.sub
              default: goto parse_error;
            }
          }
          case 't': return makeUnary(s, UnaryOp::TruncFloat32); // f32.trunc
          default: goto parse_error;
        }
      }
      case '6': {
        switch (op[4]) {
          case 'a': {
            switch (op[5]) {
              case 'b': return makeUnary(s, UnaryOp::AbsFloat64); // f64.abs
              case 'd': return makeBinary(s, BinaryOp::AddFloat64); // f64.add
              default: goto parse_error;
            }
          }
          case 'c': {
            switch (op[5]) {
              case 'e': return makeUnary(s, UnaryOp::CeilFloat64); // f64.ceil
              case 'o': {
                switch (op[6]) {
                  case 'n': {
                    switch (op[7]) {
                      case 's': return makeConst(s, f64); // f64.const
                      case 'v': {
                        switch (op[12]) {
                          case 's': {
                            switch (op[15]) {
                              case '3': return makeUnary(s, UnaryOp::ConvertSInt32ToFloat64); // f64.convert_s/i32
                              case '6': return makeUnary(s, UnaryOp::ConvertSInt64ToFloat64); // f64.convert_s/i64
                              default: goto parse_error;
                            }
                          }
                          case 'u': {
                            switch (op[15]) {
                              case '3': return makeUnary(s, UnaryOp::ConvertUInt32ToFloat64); // f64.convert_u/i32
                              case '6': return makeUnary(s, UnaryOp::ConvertUInt64ToFloat64); // f64.convert_u/i64
                              default: goto parse_error;
                            }
                          }
                          default: goto parse_error;
                        }
                      }
                      default: goto parse_error;
                    }
                  }
                  case 'p': return makeBinary(s, BinaryOp::CopySignFloat64); // f64.copysign
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 'd': return makeBinary(s, BinaryOp::DivFloat64); // f64.div
          case 'e': return makeBinary(s, BinaryOp::EqFloat64); // f64.eq
          case 'f': return makeUnary(s, UnaryOp::FloorFloat64); // f64.floor
          case 'g': {
            switch (op[5]) {
              case 'e': return makeBinary(s, BinaryOp::GeFloat64); // f64.ge
              case 't': return makeBinary(s, BinaryOp::GtFloat64); // f64.gt
              default: goto parse_error;
            }
          }
          case 'l': {
            switch (op[5]) {
              case 'e': return makeBinary(s, BinaryOp::LeFloat64); // f64.le
              case 'o': return makeLoad(s, f64, /*isAtomic=*/false); // f64.load
              case 't': return makeBinary(s, BinaryOp::LtFloat64); // f64.lt
              default: goto parse_error;
            }
          }
          case 'm': {
            switch (op[5]) {
              case 'a': return makeBinary(s, BinaryOp::MaxFloat64); // f64.max
              case 'i': return makeBinary(s, BinaryOp::MinFloat64); // f64.min
              case 'u': return makeBinary(s, BinaryOp::MulFloat64); // f64.mul
              default: goto parse_error;
            }
          }
          case 'n': {
            switch (op[6]) {
              case '\0': return makeBinary(s, BinaryOp::NeFloat64); // f64.ne
              case 'a': return makeUnary(s, UnaryOp::NearestFloat64); // f64.nearest
              case 'g': return makeUnary(s, UnaryOp::NegFloat64); // f64.neg
              default: goto parse_error;
            }
          }
          case 'p': return makeUnary(s, UnaryOp::PromoteFloat32); // f64.promote/f32
          case 'r': return makeUnary(s, UnaryOp::ReinterpretInt64); // f64.reinterpret/i64
          case 's': {
            switch (op[5]) {
              case 'q': return makeUnary(s, UnaryOp::SqrtFloat64); // f64.sqrt
              case 't': return makeStore(s, f64, /*isAtomic=*/false); // f64.store
              case 'u': return makeBinary(s, BinaryOp::SubFloat64); // f64.sub
              default: goto parse_error;
            }
          }
          case 't': return makeUnary(s, UnaryOp::TruncFloat64); // f64.trunc
          default: goto parse_error;
        }
      }
      default: goto parse_error;
    }
  }
  case 'g': {
    switch (op[1]) {
      case 'e': {
        switch (op[4]) {
          case 'g': return makeGetGlobal(s); // get_global
          case 'l': return makeGetLocal(s); // get_local
          default: goto parse_error;
        }
      }
      case 'r': return makeHost(s, HostOp::GrowMemory); // grow_memory
      default: goto parse_error;
    }
  }
  case 'i': {
    switch (op[1]) {
      case '3': {
        switch (op[4]) {
          case 'a': {
            switch (op[5]) {
              case 'd': return makeBinary(s, BinaryOp::AddInt32); // i32.add
              case 'n': return makeBinary(s, BinaryOp::AndInt32); // i32.and
              case 't': {
                switch (op[11]) {
                  case 'l': {
                    switch (op[15]) {
                      case '\0': return makeLoad(s, i32, /*isAtomic=*/true); // i32.atomic.load
                      case '1': return makeLoad(s, i32, /*isAtomic=*/true); // i32.atomic.load16_u
                      case '8': return makeLoad(s, i32, /*isAtomic=*/true); // i32.atomic.load8_u
                      default: goto parse_error;
                    }
                  }
                  case 'r': return makeAtomicRMWOrCmpxchg(s, i32); // i32.atomic.rmw.add | i32.atomic.rmw.and | i32.atomic.rmw.cmpxchg | i32.atomic.rmw.or | i32.atomic.rmw.sub | i32.atomic.rmw.xchg | i32.atomic.rmw.xor | i32.atomic.rmw16_u.add | i32.atomic.rmw16_u.and | i32.atomic.rmw16_u.cmpxchg | i32.atomic.rmw16_u.or | i32.atomic.rmw16_u.sub | i32.atomic.rmw16_u.xchg | i32.atomic.rmw16_u.xor | i32.atomic.rmw8_u.add | i32.atomic.rmw8_u.and | i32.atomic.rmw8_u.cmpxchg | i32.atomic.rmw8_u.or | i32.atomic.rmw8_u.sub | i32.atomic.rmw8_u.xchg | i32.atomic.rmw8_u.xor
                  case 's': {
                    switch (op[16]) {
                      case '\0': return makeStore(s, i32, /*isAtomic=*/true); // i32.atomic.store
                      case '1': return makeStore(s, i32, /*isAtomic=*/true); // i32.atomic.store16
                      case '8': return makeStore(s, i32, /*isAtomic=*/true); // i32.atomic.store8
                      default: goto parse_error;
                    }
                  }
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 'c': {
            switch (op[5]) {
              case 'l': return makeUnary(s, UnaryOp::ClzInt32); // i32.clz
              case 'o': return makeConst(s, i32); // i32.const
              case 't': return makeUnary(s, UnaryOp::CtzInt32); // i32.ctz
              default: goto parse_error;
            }
          }
          case 'd': {
            switch (op[8]) {
              case 's': return makeBinary(s, BinaryOp::DivSInt32); // i32.div_s
              case 'u': return makeBinary(s, BinaryOp::DivUInt32); // i32.div_u
              default: goto parse_error;
            }
          }
          case 'e': {
            switch (op[5]) {
              case 'q': {
                switch (op[6]) {
                  case '\0': return makeBinary(s, BinaryOp::EqInt32); // i32.eq
                  case 'z': return makeUnary(s, UnaryOp::EqZInt32); // i32.eqz
                  default: goto parse_error;
                }
              }
              case 'x': {
                switch (op[10]) {
                  case '1': return makeUnary(s, UnaryOp::ExtendS16Int32); // i32.extend16_s
                  case '8': return makeUnary(s, UnaryOp::ExtendS8Int32); // i32.extend8_s
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 'g': {
            switch (op[5]) {
              case 'e': {
                switch (op[7]) {
                  case 's': return makeBinary(s, BinaryOp::GeSInt32); // i32.ge_s
                  case 'u': return makeBinary(s, BinaryOp::GeUInt32); // i32.ge_u
                  default: goto parse_error;
                }
              }
              case 't': {
                switch (op[7]) {
                  case 's': return makeBinary(s, BinaryOp::GtSInt32); // i32.gt_s
                  case 'u': return makeBinary(s, BinaryOp::GtUInt32); // i32.gt_u
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 'l': {
            switch (op[5]) {
              case 'e': {
                switch (op[7]) {
                  case 's': return makeBinary(s, BinaryOp::LeSInt32); // i32.le_s
                  case 'u': return makeBinary(s, BinaryOp::LeUInt32); // i32.le_u
                  default: goto parse_error;
                }
              }
              case 'o': {
                switch (op[8]) {
                  case '\0': return makeLoad(s, i32, /*isAtomic=*/false); // i32.load
                  case '1': return makeLoad(s, i32, /*isAtomic=*/false); // i32.load16_s | i32.load16_u
                  case '8': return makeLoad(s, i32, /*isAtomic=*/false); // i32.load8_s | i32.load8_u
                  default: goto parse_error;
                }
              }
              case 't': {
                switch (op[7]) {
                  case 's': return makeBinary(s, BinaryOp::LtSInt32); // i32.lt_s
                  case 'u': return makeBinary(s, BinaryOp::LtUInt32); // i32.lt_u
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 'm': return makeBinary(s, BinaryOp::MulInt32); // i32.mul
          case 'n': return makeBinary(s, BinaryOp::NeInt32); // i32.ne
          case 'o': return makeBinary(s, BinaryOp::OrInt32); // i32.or
          case 'p': return makeUnary(s, UnaryOp::PopcntInt32); // i32.popcnt
          case 'r': {
            switch (op[5]) {
              case 'e': {
                switch (op[6]) {
                  case 'i': return makeUnary(s, UnaryOp::ReinterpretFloat32); // i32.reinterpret/f32
                  case 'm': {
                    switch (op[8]) {
                      case 's': return makeBinary(s, BinaryOp::RemSInt32); // i32.rem_s
                      case 'u': return makeBinary(s, BinaryOp::RemUInt32); // i32.rem_u
                      default: goto parse_error;
                    }
                  }
                  default: goto parse_error;
                }
              }
              case 'o': {
                switch (op[7]) {
                  case 'l': return makeBinary(s, BinaryOp::RotLInt32); // i32.rotl
                  case 'r': return makeBinary(s, BinaryOp::RotRInt32); // i32.rotr
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 's': {
            switch (op[5]) {
              case 'h': {
                switch (op[6]) {
                  case 'l': return makeBinary(s, BinaryOp::ShlInt32); // i32.shl
                  case 'r': {
                    switch (op[8]) {
                      case 's': return makeBinary(s, BinaryOp::ShrSInt32); // i32.shr_s
                      case 'u': return makeBinary(s, BinaryOp::ShrUInt32); // i32.shr_u
                      default: goto parse_error;
                    }
                  }
                  default: goto parse_error;
                }
              }
              case 't': {
                switch (op[9]) {
                  case '\0': return makeStore(s, i32, /*isAtomic=*/false); // i32.store
                  case '1': return makeStore(s, i32, /*isAtomic=*/false); // i32.store16
                  case '8': return makeStore(s, i32, /*isAtomic=*/false); // i32.store8
                  default: goto parse_error;
                }
              }
              case 'u': return makeBinary(s, BinaryOp::SubInt32); // i32.sub
              default: goto parse_error;
            }
          }
          case 't': {
            switch (op[10]) {
              case 's': {
                switch (op[13]) {
                  case '3': return makeUnary(s, UnaryOp::TruncSFloat32ToInt32); // i32.trunc_s/f32
                  case '6': return makeUnary(s, UnaryOp::TruncSFloat64ToInt32); // i32.trunc_s/f64
                  default: goto parse_error;
                }
              }
              case 'u': {
                switch (op[13]) {
                  case '3': return makeUnary(s, UnaryOp::TruncUFloat32ToInt32); // i32.trunc_u/f32
                  case '6': return makeUnary(s, UnaryOp::TruncUFloat64ToInt32); // i32.trunc_u/f64
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 'w': {
            switch (op[5]) {
              case 'a': return makeAtomicWait(s, i32); // i32.wait
              case 'r': return makeUnary(s, UnaryOp::WrapInt64); // i32.wrap/i64
              default: goto parse_error;
            }
          }
          case 'x': return makeBinary(s, BinaryOp::XorInt32); // i32.xor
          default: goto parse_error;
        }
      }
      case '6': {
        switch (op[4]) {
          case 'a': {
            switch (op[5]) {
              case 'd': return makeBinary(s, BinaryOp::AddInt64); // i64.add
              case 'n': return makeBinary(s, BinaryOp::AndInt64); // i64.and
              case 't': {
                switch (op[11]) {
                  case 'l': {
                    switch (op[15]) {
                      case '\0': return makeLoad(s, i64, /*isAtomic=*/true); // i64.atomic.load
                      case '1': return makeLoad(s, i64, /*isAtomic=*/true); // i64.atomic.load16_u
                      case '3': return makeLoad(s, i64, /*isAtomic=*/true); // i64.atomic.load32_u
                      case '8': return makeLoad(s, i64, /*isAtomic=*/true); // i64.atomic.load8_u
                      default: goto parse_error;
                    }
                  }
                  case 'r': return makeAtomicRMWOrCmpxchg(s, i64); // i64.atomic.rmw.add | i64.atomic.rmw.and | i64.atomic.rmw.cmpxchg | i64.atomic.rmw.or | i64.atomic.rmw.sub | i64.atomic.rmw.xchg | i64.atomic.rmw.xor | i64.atomic.rmw16_u.add | i64.atomic.rmw16_u.and | i64.atomic.rmw16_u.cmpxchg | i64.atomic.rmw16_u.or | i64.atomic.rmw16_u.sub | i64.atomic.rmw16_u.xchg | i64.atomic.rmw16_u.xor | i64.atomic.rmw32_u.add | i64.atomic.rmw32_u.and | i64.atomic.rmw32_u.cmpxchg | i64.atomic.rmw32_u.or | i64.atomic.rmw32_u.sub | i64.atomic.rmw32_u.xchg | i64.atomic.rmw32_u.xor | i64.atomic.rmw8_u.add | i64.atomic.rmw8_u.and | i64.atomic.rmw8_u.cmpxchg | i64.atomic.rmw8_u.or | i64.atomic.rmw8_u.sub | i64.atomic.rmw8_u.xchg | i64.atomic.rmw8_u.xor
                  case 's': {
                    switch (op[16]) {
                      case '\0': return makeStore(s, i64, /*isAtomic=*/true); // i64.atomic.store
                      case '1': return makeStore(s, i64, /*isAtomic=*/true); // i64.atomic.store16
                      case '3': return makeStore(s, i64, /*isAtomic=*/true); // i64.atomic.store32
                      case '8': return makeStore(s, i64, /*isAtomic=*/true); // i64.atomic.store8
                      default: goto parse_error;
                    }
                  }
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 'c': {
            switch (op[5]) {
              case 'l': return makeUnary(s, UnaryOp::ClzInt64); // i64.clz
              case 'o': return makeConst(s, i64); // i64.const
              case 't': return makeUnary(s, UnaryOp::CtzInt64); // i64.ctz
              default: goto parse_error;
            }
          }
          case 'd': {
            switch (op[8]) {
              case 's': return makeBinary(s, BinaryOp::DivSInt64); // i64.div_s
              case 'u': return makeBinary(s, BinaryOp::DivUInt64); // i64.div_u
              default: goto parse_error;
            }
          }
          case 'e': {
            switch (op[5]) {
              case 'q': {
                switch (op[6]) {
                  case '\0': return makeBinary(s, BinaryOp::EqInt64); // i64.eq
                  case 'z': return makeUnary(s, UnaryOp::EqZInt64); // i64.eqz
                  default: goto parse_error;
                }
              }
              case 'x': {
                switch (op[10]) {
                  case '1': return makeUnary(s, UnaryOp::ExtendS16Int64); // i64.extend16_s
                  case '3': return makeUnary(s, UnaryOp::ExtendS32Int64); // i64.extend32_s
                  case '8': return makeUnary(s, UnaryOp::ExtendS8Int64); // i64.extend8_s
                  case '_': {
                    switch (op[11]) {
                      case 's': return makeUnary(s, UnaryOp::ExtendSInt32); // i64.extend_s/i32
                      case 'u': return makeUnary(s, UnaryOp::ExtendUInt32); // i64.extend_u/i32
                      default: goto parse_error;
                    }
                  }
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 'g': {
            switch (op[5]) {
              case 'e': {
                switch (op[7]) {
                  case 's': return makeBinary(s, BinaryOp::GeSInt64); // i64.ge_s
                  case 'u': return makeBinary(s, BinaryOp::GeUInt64); // i64.ge_u
                  default: goto parse_error;
                }
              }
              case 't': {
                switch (op[7]) {
                  case 's': return makeBinary(s, BinaryOp::GtSInt64); // i64.gt_s
                  case 'u': return makeBinary(s, BinaryOp::GtUInt64); // i64.gt_u
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 'l': {
            switch (op[5]) {
              case 'e': {
                switch (op[7]) {
                  case 's': return makeBinary(s, BinaryOp::LeSInt64); // i64.le_s
                  case 'u': return makeBinary(s, BinaryOp::LeUInt64); // i64.le_u
                  default: goto parse_error;
                }
              }
              case 'o': {
                switch (op[8]) {
                  case '\0': return makeLoad(s, i64, /*isAtomic=*/false); // i64.load
                  case '1': return makeLoad(s, i64, /*isAtomic=*/false); // i64.load16_s | i64.load16_u
                  case '3': return makeLoad(s, i64, /*isAtomic=*/false); // i64.load32_s | i64.load32_u
                  case '8': return makeLoad(s, i64, /*isAtomic=*/false); // i64.load8_s | i64.load8_u
                  default: goto parse_error;
                }
              }
              case 't': {
                switch (op[7]) {
                  case 's': return makeBinary(s, BinaryOp::LtSInt64); // i64.lt_s
                  case 'u': return makeBinary(s, BinaryOp::LtUInt64); // i64.lt_u
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 'm': return makeBinary(s, BinaryOp::MulInt64); // i64.mul
          case 'n': return makeBinary(s, BinaryOp::NeInt64); // i64.ne
          case 'o': return makeBinary(s, BinaryOp::OrInt64); // i64.or
          case 'p': return makeUnary(s, UnaryOp::PopcntInt64); // i64.popcnt
          case 'r': {
            switch (op[5]) {
              case 'e': {
                switch (op[6]) {
                  case 'i': return makeUnary(s, UnaryOp::ReinterpretFloat64); // i64.reinterpret/f64
                  case 'm': {
                    switch (op[8]) {
                      case 's': return makeBinary(s, BinaryOp::RemSInt64); // i64.rem_s
                      case 'u': return makeBinary(s, BinaryOp::RemUInt64); // i64.rem_u
                      default: goto parse_error;
                    }
                  }
                  default: goto parse_error;
                }
              }
              case 'o': {
                switch (op[7]) {
                  case 'l': return makeBinary(s, BinaryOp::RotLInt64); // i64.rotl
                  case 'r': return makeBinary(s, BinaryOp::RotRInt64); // i64.rotr
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 's': {
            switch (op[5]) {
              case 'h': {
                switch (op[6]) {
                  case 'l': return makeBinary(s, BinaryOp::ShlInt64); // i64.shl
                  case 'r': {
                    switch (op[8]) {
                      case 's': return makeBinary(s, BinaryOp::ShrSInt64); // i64.shr_s
                      case 'u': return makeBinary(s, BinaryOp::ShrUInt64); // i64.shr_u
                      default: goto parse_error;
                    }
                  }
                  default: goto parse_error;
                }
              }
              case 't': {
                switch (op[9]) {
                  case '\0': return makeStore(s, i64, /*isAtomic=*/false); // i64.store
                  case '1': return makeStore(s, i64, /*isAtomic=*/false); // i64.store16
                  case '3': return makeStore(s, i64, /*isAtomic=*/false); // i64.store32
                  case '8': return makeStore(s, i64, /*isAtomic=*/false); // i64.store8
                  default: goto parse_error;
                }
              }
              case 'u': return makeBinary(s, BinaryOp::SubInt64); // i64.sub
              default: goto parse_error;
            }
          }
          case 't': {
            switch (op[10]) {
              case 's': {
                switch (op[13]) {
                  case '3': return makeUnary(s, UnaryOp::TruncSFloat32ToInt64); // i64.trunc_s/f32
                  case '6': return makeUnary(s, UnaryOp::TruncSFloat64ToInt64); // i64.trunc_s/f64
                  default: goto parse_error;
                }
              }
              case 'u': {
                switch (op[13]) {
                  case '3': return makeUnary(s, UnaryOp::TruncUFloat32ToInt64); // i64.trunc_u/f32
                  case '6': return makeUnary(s, UnaryOp::TruncUFloat64ToInt64); // i64.trunc_u/f64
                  default: goto parse_error;
                }
              }
              default: goto parse_error;
            }
          }
          case 'w': return makeAtomicWait(s, i64); // i64.wait
          case 'x': return makeBinary(s, BinaryOp::XorInt64); // i64.xor
          default: goto parse_error;
        }
      }
      case 'f': return makeIf(s); // if
      default: goto parse_error;
    }
  }
  case 'l': return makeLoop(s); // loop
  case 'n': return makeNop(); // nop
  case 'r': return makeReturn(s); // return
  case 's': {
    switch (op[2]) {
      case 'l': return makeSelect(s); // select
      case 't': {
        switch (op[4]) {
          case 'g': return makeSetGlobal(s); // set_global
          case 'l': return makeSetLocal(s); // set_local
          default: goto parse_error;
        }
      }
      default: goto parse_error;
    }
  }
  case 't': {
    switch (op[1]) {
      case 'e': return makeTeeLocal(s); // tee_local
      case 'h': return makeThenOrElse(s); // then
      default: goto parse_error;
    }
  }
  case 'u': return makeUnreachable(); // unreachable
  case 'w': return makeAtomicWake(s); // wake
  default: goto parse_error;
}
parse_error:
  throw ParseException(std::string(op));
#endif // INSTRUCTION_PARSER