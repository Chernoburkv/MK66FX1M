#ifndef Processing_h
#define Processing_h

#include <stdbool.h>
#include "binary.h"

#define min(a, b) ({ \
  typeof(a) _a = (a); \
  typeof(b) _b = (b); \
  (_a < _b) ? _a : _b; \
})
#define max(a, b) ({ \
  typeof(a) _a = (a); \
  typeof(b) _b = (b); \
  (_a > _b) ? _a : _b; \
})


#ifdef PI
#undef PI
#endif
#define PI 3.1415926535897932384626433832795
#define HALF_PI 1.5707963267948966192313216916398
#define TWO_PI 6.283185307179586476925286766559
#define DEG_TO_RAD 0.017453292519943295769236907684886
#define RAD_TO_DEG 57.295779513082320876798154814105



#define SQRT2 1.4142135623730950488016887
#define SQRT3 1.7320508075688772935274463
#define SERIAL  0
#define DISPLAY 1

// undefine stdlib's abs if encountered
#ifdef abs
#undef abs
#endif

#if __cplusplus >= 201103L && defined(__STRICT_ANSI__)
#define typeof(a) decltype(a)
#endif

#define abs(x) ({ \
  typeof(x) _x = (x); \
  (_x > 0) ? _x : -_x; \
})
#define constrain(amt, low, high) ({ \
  typeof(amt) _amt = (amt); \
  typeof(low) _low = (low); \
  typeof(high) _high = (high); \
  (_amt < _low) ? _low : ((_amt > _high) ? _high : _amt); \
})
#define round(x) ({ \
  typeof(x) _x = (x); \
  (_x>=0) ? (long)(_x+0.5) : (long)(_x-0.5); \
})
#define radians(deg) ((deg)*DEG_TO_RAD)
#define degrees(rad) ((rad)*RAD_TO_DEG)
#define sq(x) ({ \
  typeof(x) _x = (x); \
  _x * _x; \
})


#define stricmp(a, b) strcasecmp(a, b)

#define lowByte(w) ((uint8_t)((w) & 0xFF))
#define highByte(w) ((uint8_t)((w) >> 8))

#define bitRead(value, bit) (((value) >> (bit)) & 0x01)
#define bitSet(value, bit) ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#define bitWrite(value, bit, bitvalue) ((bitvalue) ? bitSet((value), (bit)) : bitClear((value), (bit)))

#define bit(b) (1UL << (b))

typedef bool uint8_t ;


