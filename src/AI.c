#include "AI.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *convertToLowerCase(char *name)
{
  //if there is no word/NULL
  if(name == NULL)
  {
    return NULL;
  }
  int i = 0;
  char *buffer;
  buffer = (char*)malloc(strlen(name)+1);
  strcpy(buffer,name);
  //convert the word to lowercase 1 by 1 when the last character is not NULL
  while(buffer[i] != '\0')
  {
   buffer[i] = tolower(buffer[i]);
    ++i;
  }
    return buffer;
}

int stringCompare(char *str1, char *str2)
{
  int i = 0;
  char *temp1,*temp2;
  temp1 = convertToLowerCase(str1);
  temp2 = convertToLowerCase(str2);
  printf("temp1 is %s  temp2 is %s\n",temp1, temp2 );
  if(strlen(temp1) == strlen(temp2))
  {
    while(temp1[i] != '\0' || temp2[i] != '\0')
    {
      if(temp1[i] == temp2[i])
      {
        i++;
      }
      else
      {
        printf("FALSE\n");
        return 0;
      }
    }
    printf("TRUE\n");
    return 1;
  }
  else
  {
    printf("FALSE\n");
    return 0;
  }

}

char *speakToAiMachine(char *msg)
{
  if(stringCompare("hi",msg) == 1 || stringCompare("hey",msg) == 1  || stringCompare("greeting",msg) == 1 || stringCompare("hello",msg) == 1)
  {
    //printf("PASS~~ :)\n");
    return "Hi there! My name is TheMachine. What is yours?";
  }
  else
  {
    //total = 11; need to shift 11 time
    char *temp,*output;
    temp = (char*)malloc(11);
    int i = 0 ;
    while(i < 11)
    {
      temp[i] = msg[i];
      i++;
    }
    printf("msg is %s\n", msg);
    printf("temp is %s\n", temp);
    if(stringCompare(temp,"my name is ") == 1)
    {
      int j = 11; // "My name is "
      int k = strlen(msg) - 11;
      output = (char*)malloc(k);    // gv the space not include "My name is "
      char out[] = "Nice to meet you ";
      for(int y = 0; y < k; y++)
      {
        output[y] = msg[j];
        j++;
      }
      //printf("output name is %s\n", output);
      strcat(out, output);

      char *output1;
      output1 = (char*)malloc(strlen(out)+1);
      strcpy(output1,out);
      int z = strlen(output);
      output1[k+j-1] = '\0';
      return output1;
    }
    else
    {
      return "wtf r u talking about?";
    }
  }
}
