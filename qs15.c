/*
Q4. Write a program to count the total number of words in a string.
Input : string = Coding Age
Output: the total number of words in a string = 2
*/
#include <stdio.h>
#include <string.h>
void inputString(char str[])
{
  printf("Enter the string:\n");
  fgets(str, 20, stdin);
  str[strcspn(str, "\n")] = '\0';
}

int main()
{
  char str[20];
  inputString(str);

  return 0;
}