#include<stdio.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
void setUp(){}
void tearDown(){}
int confirm;
void check(void)
{
    TEST_ASSERT_EQUAL(263678,confirm);
}

void main(){
	confirm=263678;
	UNITY_BEGIN();
    RUN_TEST(check);
    UNITY_END();
}