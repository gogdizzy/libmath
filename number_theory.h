#ifndef  __NUMBER_THEORY_H__
#define  __NUMBER_THEORY_H__

namespace  Math {

// 求最大公约数
// 使用时一定要注意数据范围
template< typename T >
T  gcd( T a, T b ) {
	T  x;
	while( b ) {
		x = a % b;
		a = b;
		b = x;
	}
	return  a;
}

// 求最小公倍数
// 使用时一定要注意数据范围
template< typename T >
T  lcm( T a, T b ) {
	return  a / gcd( a, b ) * b;
}

};

#endif