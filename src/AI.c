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
        //FALSE
        return 0;
      }
    }
    //TRUE
    return 1;
  }
  else
  {
    //FALSE
    return 0;
  }

}

char *speakToAiMachine(char *msg)
{
  if(stringCompare("hi",msg) || stringCompare("hey",msg)  || stringCompare("greeting",msg) || stringCompare("hello",msg))
  {
    return "Hi there! My name is TheMachine. What is yours?";
  }
  else if(stringCompare("bye",msg) || stringCompare("Goodbye",msg))
  {
    return "Goodbye. Have a nice day!";
  }
  else
  {
    //total = 11; need to shift 11 time
    char *temp,*output,*reply;
    temp = (char*)malloc(11);
    int i = 0 ;
    while(i < 11)
    {
      temp[i] = msg[i];
      i++;
    }
    if(stringCompare(temp,"my name is "))
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
      reply = combineMsg(output);
      return reply;
    }
    else
    {
      return "wtf r u talking about?";
    }
  }
}

char *combineMsg(char *msg)
{
  char *replyMsg = "Nice to meet you ";
  char *tempMsg;
  tempMsg = (char*)malloc(strlen(replyMsg)+strlen(msg)+1);
  strcpy(tempMsg,replyMsg);
  strcat(tempMsg, msg);
  return tempMsg;
}
