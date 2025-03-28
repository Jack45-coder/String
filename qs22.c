/*
Write a program to input any string from the user and remove the
first occurrence of a given word from the string.
Input : string : Learn programming at Coding AGe.
Output: string : programming at Coding AGe.
*/

#include <stdio.h>
#include <string.h>
void inputsString(char str[])
{
  printf("Enter the string:\n");
  fgets(str, 50, stdin);
  str[strcspn(str, "\n")] = '\0';
}

int main()
{
  char str[50];
  inputsString(str);
  int c = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {

    
  }
  printf("%d", c);

  return 0;
}