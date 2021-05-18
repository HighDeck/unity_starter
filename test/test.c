#include <stdio.h>


#include "unity/unity.h"
#include "../src/solution_c_bas_niveau.c"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_function_should_doBlahAndBlah(void) {
    char c[] = "hello";
    TEST_ASSERT_EQUAL(8,strlen(c));
    TEST_FAIL();
    TEST_FAIL_MESSAGE("message");

}

void test_function_should_doAlsoDoBlah(void) {
    //more test stuff
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_function_should_doBlahAndBlah);
    RUN_TEST(test_function_should_doAlsoDoBlah);
    return UNITY_END();
}
