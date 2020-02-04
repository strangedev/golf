const S = {
	_: {
		s:'E',
		_: {
			s: 'I',
			_: {
				s: 'S',
				_: {
					s: 'H',
					_: {
						s: '5'
					},
					__: {
						s: '4'
					}
				},
				__: {
					s: 'V',
					__: {
						s: '3'
					}
				}
			},
			__: {
				s: 'U',
				_: {
					s: 'F'
				},
				__: {
					s: '-',
					__: {
						s: '2'
					}
				}
			}
		},
		__: {
			s: 'A',
			_: {
				s: 'R',
				_: {
					s: 'L'
				}
			},
			__: {
				s: 'W',
				_: {
					s: 'P'
				},
				__: {
					s: 'J',
					__: {
						s: '1'
					}
				}
			}
		}
	},
	__: {
		s: 'T',
		_: {
			s: 'N',
			_: {
				s: 'D',
				_: {
					s: 'B',
					_: {
						s: '6'
					}
				},
				__: {
					s: 'X'
				}
			},
			__: {
				s: 'K',
				_: {
					s: 'C'
				},
				__: {
					s: 'Y'
				}
			}
		},
		__: {
			s: 'M',
			_: {
				s: 'G',
				_: {
					s: 'Z',
					_: {
						s: '7'
					}
				},
				__: {
					s: 'Q'
				}
			},
			__: {
				s: 'O',
				_: {
					s: '.',
					_: {
						s: '8'
					}
				},
				__: {
					s: '~',
					_: {
						s: '9',
					},
					__: {
						s: '0'
					}
				}
			}
		}
	}
};
const decode = chars => chars.reduce((s, c) => c === '.'?s._:s.__, S).s;
const decode_str = str => decode(str.split(''));
const decode_strs = strs => strs.split(' ').map(decode_str).join('');
const demorse = decode_strs;