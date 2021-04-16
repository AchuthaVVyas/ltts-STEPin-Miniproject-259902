#include"calendar_operations.h"
#include"unity_internals.h"
#include"unity.h"

void setUp(){}

void tearDown(){}


void test_getName(void){
    TEST_ASSERT_EQUAL("Monday",*getName(1));
}

void test_check_leapYear(void){
    TEST_ASSERT_EQUAL(1,check_leapYear(2016));
}

void test_getNumberOfDays(void){
    TEST_ASSERT_EQUAL(30,getNumberOfDays(4,2021));
}

void test_getDayNumber(void){
    TEST_ASSERT_EQUAL(21,getDayNumber(21,04,2021));
}


int test_main(void){
    UNITY_BEGIN();

    RUN_TEST(test_getName);
    RUN_TEST(test_check_leapYear);
    RUN_TEST(test_getNumberOfDays);
    RUN_TEST(test_getDayNumber);

    return UNITY_END();
}
