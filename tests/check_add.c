#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include "../src/add.h"

int test_sum;

void setup()
{
    test_sum = 0;
}

void teardown()
{
    test_sum = 0;
}

START_TEST(test__add_zero)
{
    int num = 10;
    test_sum = add(num, 0);
    ck_assert_msg(test_sum == num, "The number itself should be returned when added with zero");
}
END_TEST

Suite *add_test_suite()
{
    Suite *s;

    TCase *tc_zero;

    s = suite_create("Add");
    tc_zero = tcase_create("Zero");
    tcase_add_checked_fixture(tc_zero, setup, teardown);
    tcase_add_test(tc_zero, test__add_zero);
    suite_add_tcase(s, tc_zero);

    return s;
}

int main(void)
{
    int number_failed_tests;
    Suite *test_suite;

    SRunner *test_runner;

    test_suite = add_test_suite();
    test_runner = srunner_create(test_suite);

    srunner_run_all(test_runner, CK_NORMAL);
    number_failed_tests = srunner_ntests_failed(test_runner);
    srunner_free(test_runner);

    return (number_failed_tests == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}