#include "unity.h"
#include "my_math.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_function_iadd(void) {
    //test stuff
    TEST_ASSERT_EQUAL_INT(25, iadd(10, 15));
    TEST_ASSERT_EQUAL_INT(100, iadd(0, 100));
    TEST_ASSERT_EQUAL_INT(-250, iadd(-1000, 750));
}

void test_function_fadd(void) {
    //more test stuff
    TEST_ASSERT_EQUAL_FLOAT(25.00, fadd(10.0, 15.0));
    TEST_ASSERT_EQUAL_FLOAT(100.00, iadd(0.0, 100.0));
    TEST_ASSERT_EQUAL_FLOAT(-250.00, iadd(-1000.0, 750.0));
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_function_iadd);
    RUN_TEST(test_function_fadd);
    return UNITY_END();
}

