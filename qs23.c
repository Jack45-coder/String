/*
Write a program to split strings by spaces into words.
  Input : string : this is a string
  Output:
  1.this
  2.is
  3.a
  4.string .
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
  int len = strlen(str);
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ' ')
    {
      printf("\n");
    }
    else
    {
      printf("%c", str[i]);
    }
  }
  return 0;
}