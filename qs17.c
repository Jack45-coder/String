/*
write a program to count the total number of alphabets, digits and
special characters in a string.
Input : string = Codingage123@gmail.com
Output: Number of Alphabets in the string is : 17.
Number of Digits in the string is : 3.
Number of Special characters in the string is : 3
*/

#include <stdio.h>
#include <string.h>
void inputsString(char str[])
{
  printf("Enter the string:\n");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
}

int main()
{
  char str[100];
  inputsString(str);
  int len = strlen(str);
  int alphCount = 0, numCount = 0, schrCount = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
    {
      alphCount++;
    }
    else if (str[i] >= '0' && str[i] <= '9')
    {
      numCount++;
    }
    else
    {
      schrCount++;
    }
  }
  printf("%d\n", alphCount);
  printf("%d\n", numCount);
  printf("%d", schrCount);

  return 0;
}
