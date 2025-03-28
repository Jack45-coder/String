/*
Q9. Write a program to read a sentence and replace lowercase characters
with uppercase and uppercase with lowercase characters .
Input : string : This Is A String.
Output : tHIS iS a sTRING.
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
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 32;
    }
    else if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = str[i] + 32;
    }
    else
    {
      str[i] = ' ';
    }
  }
  puts(str);

  return 0;
}