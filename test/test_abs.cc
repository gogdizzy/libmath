#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include "bit_op.h"

int main() {

	int8_t   i8p = 120, i8z = 0, i8n = -11;
	int16_t  i16p = 123, i16z = 0, i16n = -5233;
	int32_t  i32p = 100, i32z = 0, i32n = -100000;
	int64_t  i64p = 123456778LL, i64z = 0, i64n = -9876554312LL;

	puts( "int 8bit :" );
	printf( "%hhd\t%hhd\t%hhd\t%hhd\t%hhd\n\n",
		Math::abs( i8p ), Math::abs( i8z ), Math::abs( i8n ),
		Math::abs( (int8_t)INT8_MIN ), Math::abs( INT8_MAX ) );

	puts( "int 16bit :" );
	printf( "%hd\t%hd\t%hd\t%hd\t%hd\n\n",
		Math::abs( i16p ), Math::abs( i16z ), Math::abs( i16n ),
		Math::abs( INT16_MIN ), Math::abs( INT16_MAX ) );

	puts( "int 32bit :" );
	printf( "%d\t%d\t%d\t%d\t%d\n\n",
		Math::abs( i32p ), Math::abs( i32z ), Math::abs( i32n ),
		Math::abs( INT32_MIN ), Math::abs( INT32_MAX ) );

	puts( "int 64bit :" );
	printf( "%lld\t%lld\t%lld\t%lld\t%lld\n\n",
		Math::abs( i64p ), Math::abs( i64z ), Math::abs( i64n ),
		Math::abs( INT64_MIN ), Math::abs( INT64_MAX ) );

	float  f32p = 1.234f, f32z = 0.f, f32n = -3.4567f;
	double  f64p = 10.5, f64z = 0.0, f64n = -10000.333;

	puts( "float 32bit :" );
	printf( "%f\t%f\t%f\n\n",
		Math::fabs( f32p ), Math::fabs( f32z ), Math::fabs( f32n ) );

	puts( "float 64bit :" );
	printf( "%lf\t%lf\t%lf\n\n",
		Math::fabs( f64p ), Math::fabs( f64z ), Math::fabs( f64n ) );

	return 0;
}