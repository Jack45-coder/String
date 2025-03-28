/*
Q8. Write a program to copy one string to another string .
Input : String = Coding Age
Output: Original string:Coding Age
Copied string: Coding Age
*/

#include <stdio.h>
#include <string.h>
void inputsString(char str[])
{
  printf("Enter the string:\n");
  fgets(str, 20, stdin);
  str[strcspn(str, "\n")] = '\0';
}

int main()
{
  char str[20];
  char str2[20];

  inputsString(str);
  inputsString(str2);
  for (int i = 0; str[i] != '\0'; i++)
  {
    str[i] = str2[i];
  }
  printf("%s", str);
  return 0;
}