#include <stdio.h>
#include <calculator.h>
#include <unity.h>

void setUp(void){

}

void tearDown(void){

}

void test_addition(void){
    TEST_ASSERT_EQUAL(10, addition(5,5));
}

void test_subtraction(void){
    TEST_ASSERT_EQUAL(3, subtraction(8, 5));
}

void test_multiplication(void){
    TEST_ASSERT_EQUAL(25, multiplication(5,5));
}

void test_division(void){
    TEST_ASSERT_EQUAL(32, division(100,3));
}

void app_main()
{
    printf("test");
    UNITY_BEGIN();
    RUN_TEST(test_addition);
    RUN_TEST(test_subtraction);
    RUN_TEST(test_multiplication);
    RUN_TEST(test_division);
    UNITY_END();
}