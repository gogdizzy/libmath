#ifndef  __MATH_BIT_OP_H__
#define  __MATH_BIT_OP_H__

namespace Math {

template  < typename T >
T  abs( T x ) {
	T  y = ( x >> ( ( sizeof(T) << 3 ) - 1 ) );
	return  ( x ^ y ) - y;
}

float  fabs( float x ) {
	uint32_t*  xi = (uint32_t*)&x;
	*xi &= 0x7fffffff;
	return  x;
}

double  fabs( double x ) {
	uint64_t*  xi = (uint64_t*)&x;
	*xi &= 0x7fffffffffffffff;
	return  x;
}

};

#endif