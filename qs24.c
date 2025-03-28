/*
Q14. Remove all spaces from a string and return the new string
Input: "He llo Wo rld" Output: "HelloWorld"
*/

#include <stdio.h>
#include <string.h>
void inputString(char str[])
{
  printf("Enter the string:\n");
  fgets(str, 30, stdin);
  str[strcspn(str, "\n")] = '\0';
}

int main()
{
  char str[30];
  inputString(str);
  int len = strlen(str);
  for (int i = 0; i < len; i++)
  {
    if (str[i] != ' ')
    {
      printf("%c", str[i]);
    }
  }

  return 0;
}