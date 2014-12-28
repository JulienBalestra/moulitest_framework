#include "project.h"

UT_TEST(err_20_opt_combined_decimal)
{
	UT_PRINTF_ASSERT("%hlld\n", 9223372036854775807);
	UT_PRINTF_ASSERT("%llhd\n", 9223372036854775807);
	UT_PRINTF_ASSERT("%lhld\n", 9223372036854775807);
	UT_PRINTF_ASSERT("%lhlhd\n", 9223372036854775807);
	UT_PRINTF_ASSERT("%zld\n", 2147483647);
	UT_PRINTF_ASSERT("%lzd\n", 2147483647);
	UT_PRINTF_ASSERT("%hhjd\n", 9223372036854775807);
	UT_PRINTF_ASSERT("%jhhd\n", 9223372036854775807);
}