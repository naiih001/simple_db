#include "minunit.h"

// Define the global tests_run variable
int tests_run = 0;

// Include the header for the functions we are testing
#include "../include/math.h"

// Test cases for the add function
char *test_add_positive_numbers(void) {
    mu_assert("test_add_positive_numbers failed", add(5, 3) == 8);
    return 0;
}

char *test_add_negative_numbers(void) {
    mu_assert("test_add_negative_numbers failed", add(-5, -3) == -8);
    return 0;
}

char *test_add_mixed_numbers(void) {
    mu_assert("test_add_mixed_numbers_1 failed", add(-5, 7) == 2);
    mu_assert("test_add_mixed_numbers_2 failed", add(5, -7) == -2);
    return 0;
}

char *test_add_zero(void) {
    mu_assert("test_add_zero_1 failed", add(5, 0) == 5);
    mu_assert("test_add_zero_2 failed", add(0, 0) == 0);
    return 0;
}

// Test cases for the subtract function
char *test_subtract_positive_numbers(void) {
    mu_assert("test_subtract_positive_numbers failed", subtract(5, 3) == 2);
    return 0;
}

char *test_subtract_negative_numbers(void) {
    mu_assert("test_subtract_negative_numbers_1 failed", subtract(-5, -3) == -2);
    mu_assert("test_subtract_negative_numbers_2 failed", subtract(-3, -5) == 2);
    return 0;
}

char *test_subtract_mixed_numbers(void) {
    mu_assert("test_subtract_mixed_numbers_1 failed", subtract(5, 7) == -2);
    mu_assert("test_subtract_mixed_numbers_2 failed", subtract(5, -7) == 12);
    return 0;
}

char *test_subtract_zero(void) {
    mu_assert("test_subtract_zero_1 failed", subtract(5, 0) == 5);
    mu_assert("test_subtract_zero_2 failed", subtract(0, 5) == -5);
    mu_assert("test_subtract_zero_3 failed", subtract(0, 0) == 0);
    return 0;
}

// List all tests here
char *all_tests(void) {
    mu_run_test(test_add_positive_numbers);
    mu_run_test(test_add_negative_numbers);
    mu_run_test(test_add_mixed_numbers);
    mu_run_test(test_add_zero);
    mu_run_test(test_subtract_positive_numbers);
    mu_run_test(test_subtract_negative_numbers);
    mu_run_test(test_subtract_mixed_numbers);
    mu_run_test(test_subtract_zero);

    return 0;
}

// Main function to run all tests
int main(int argc, char *argv[]) {
    (void)argc;
    (void)argv;
    printf("-----\nAll Math Tests\n");
    char *result = all_tests();
    if (result != 0) {
        printf("%s\n", result);
    } else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);
    return result != 0;
}


