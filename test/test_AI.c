#include "unity.h"
#include "AI.h"
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>
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

void test_lower_String_expect_string(void)
{
  char *result;
  result = convertToLowerCase("String");
  TEST_ASSERT_EQUAL_STRING("string",result);
}

void test_convert_lowercase_HELLOWORLD_expect_helloworld(void)
{
  char *result;
  result = convertToLowerCase("HELLO WORLD!");

  TEST_ASSERT_EQUAL_STRING("hello world!",result);
}


void test_stringCompare_Given_Hello_and_Hello_expect_1(void)
{
  TEST_ASSERT_EQUAL(1,stringCompare("Hello","Hello"));
}

void test_stringCompare_Given_Hell_and_Hello_expect_0(void)
{
  TEST_ASSERT_EQUAL(0,stringCompare("Hell","Hello"));
}

void test_stringCompare_Given_HeLLo_and_Hello_expect_1(void)
{
  TEST_ASSERT_EQUAL(1,stringCompare("HeLLo","Hello"));
}

void test_stringCompare_Given_Helo_and_Hello_expect_0(void)
{
  TEST_ASSERT_EQUAL(0,stringCompare("Helo","Hello"));
}

void test_stringCompare_Given_Hello_World_and_Hello_World_expect_1(void)
{
  TEST_ASSERT_EQUAL(1,stringCompare("Hello World","Hello World"));
}

void test_stringCompare_Given_combowombo_and_comboWombo_expect_1(void)
{
  TEST_ASSERT_EQUAL(1,stringCompare("combowombo","comboWombo"));
}


void test_speakToAiMachine_Given_Hi_expect_Hi_there_my_name_is_themachine_What_is_yours(void)
{
  char *expectedReply = "Hi there! My name is TheMachine. What is yours?";
  char *reply = speakToAiMachine("hi");
  TEST_ASSERT_EQUAL(strlen(reply),strlen(expectedReply));
  TEST_ASSERT_EQUAL_STRING(reply,expectedReply);
//  free(reply);
}

void test_speakToAiMachine_Given_Hey_expect_Hi_there_my_name_is_themachine_What_is_yours(void)
{
  char *expectedReply = "Hi there! My name is TheMachine. What is yours?";
  char *reply = speakToAiMachine("hey");
  TEST_ASSERT_EQUAL(strlen(reply),strlen(expectedReply));
  TEST_ASSERT_EQUAL_STRING(reply,expectedReply);
//  free(reply);
}

void test_speakToAiMachine_Given_Hello_expect_Hi_there_my_name_is_themachine_What_is_yours(void)
{
  char *expectedReply = "Hi there! My name is TheMachine. What is yours?";
  char *reply = speakToAiMachine("hello");
  TEST_ASSERT_EQUAL(strlen(reply),strlen(expectedReply));
  TEST_ASSERT_EQUAL_STRING(reply,expectedReply);
//  free(reply);
}

void test_speakToAiMachine_Given_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)
{
  char *expectedReply = "Hi there! My name is TheMachine. What is yours?";
  char *reply = speakToAiMachine("greeting");
  TEST_ASSERT_EQUAL(strlen(reply),strlen(expectedReply));
  TEST_ASSERT_EQUAL_STRING(reply,expectedReply);
  //free(reply);
}

void test_speakToAiMachine_given_my_name_is_AppleQQ_expect_nice_to_meet_you_AppleQQ(void)
{
  char *expectedReply = "Nice to meet you AppleQQ";
  char *reply = speakToAiMachine("My naMe iS AppleQQ");
  TEST_ASSERT_NOT_NULL(reply);
  TEST_ASSERT_EQUAL_STRING(expectedReply,reply);
  free(reply);
}


void test_speakToAiMachine_given_my_name_is_Zen2Sen_expect_nice_to_meet_you_Zen2Sen(void)
{
  char *expectedReply = "Nice to meet you Zen2Sen";
  char *reply = speakToAiMachine("My naMe iS Zen2Sen");
  TEST_ASSERT_NOT_NULL(reply);
  TEST_ASSERT_EQUAL_STRING(expectedReply,reply);
  free(reply);
}
