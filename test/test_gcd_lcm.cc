#include <iostream>
#include "number_theory.h"

int main() {

	std::ios::sync_with_stdio( false );

	std::cout << "2 positive int :"<< std::endl;
	int  a = 100, b = 6;
	std::cout << Math::gcd( a, b ) << std::endl;
	std::cout << Math::lcm( a, b ) << std::endl;

	std::cout << "1 positive 1 negative long :"<< std::endl;
	long  c = 10, d = -1000;
	std::cout << Math::gcd( c, d ) << std::endl;
	std::cout << Math::lcm( c, d ) << std::endl;

	std::cout << "2 negative long long :"<< std::endl;
	long long e = -25, f = -1000;
	std::cout << Math::gcd( e, f ) << std::endl;
	std::cout << Math::lcm( e, f ) << std::endl;

	std::cout << "extreme test :"<< std::endl;
	std::cout << Math::gcd( INT_MAX, INT_MIN ) << std::endl;
	std::cout << Math::gcd( INT_MIN, INT_MAX ) << std::endl;
	std::cout << Math::gcd( INT_MAX, INT_MAX ) << std::endl;
	std::cout << Math::gcd( INT_MIN, INT_MIN ) << std::endl;

	std::cout << Math::lcm( INT_MAX, INT_MIN ) << std::endl;
	std::cout << Math::lcm( INT_MIN, INT_MAX ) << std::endl;  // exception
	std::cout << Math::lcm( INT_MAX, INT_MAX ) << std::endl;
	std::cout << Math::lcm( INT_MIN, INT_MIN ) << std::endl;

	return 0;
}