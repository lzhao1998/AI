#include "unity.h"
#include "AI.h"
#include <stdlib.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_AI_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement AI");
}

void stringCompare_Given_Hello_and_Hello_expect_1(void)
{
  TEST_ASSERT_EQUAL(stringCompare("Hello","Hello"),1);
}

void stringCompare_Given_Hell_and_Hello_expect_0(void)
{
  TEST_ASSERT_EQUAL(stringCompare("Hell","Hello"),0);
}

void stringCompare_Given_HeLLo_and_Hello_expect_1(void)
{
  TEST_ASSERT_EQUAL(stringCompare("HeLLo","Hello"),1);
}

void stringCompare_Given_Helo_and_Hello_expect_1(void)
{
  TEST_ASSERT_EQUAL(stringCompare("Helo","Hello"),0);
}

void test_speakToAiMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)
{
  char *expectedReply = "Hi there! My name is TheMachine. What is yours?";
  char *reply = speakToAiMachine("hi");
  TEST_ASSERT_EQUAL(strlen(reply),strlen(expectedReply));
  TEST_ASSERT_EQUAL(reply,expectedReply);
//  free(reply);
}
