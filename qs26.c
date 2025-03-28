/*
Q15. Count how many times each character appears in a string.
Input : "hello"
Output : h:1. , e:1. , l:2. , o:1
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
  int c[256] = {0};
  for (int i = 0; i < len; i++)
  {
    c[(int)str[i]]++;
  }
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (c[(int)str[i]] > 0)
    {
      printf("%c:%d\n", str[i], c[(int)str[i]]);
      c[(int)str[i]] = 0;
    }
  }
  return 0;
}