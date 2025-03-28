#include <stdio.h>
#include <string.h>
void inputsString(char str[])
{
  printf("Enter the string:\n");
  fgets(str, 20, stdin);

  str[strcspn(str,"\n")] = '\0';
}
int main()
{
  char str[20];
  char str2[20];
  inputsString(str);
  inputsString(str2);
  int len = strlen(str);
  int len2 = strlen(str2);

  if (len != len2)
  {
    printf("Strings are not equal!\n");
    return 0;
  }
  int flag = 0;
  for (int i = 0; i < len; i++)
  {

      if (str[i] != str2[i])
      {
        flag = 1;
        break;
      }

  }
  if (flag == 0)
  {
    printf("Strings are equal.\n");
  }
  else
  {
    printf("Strings are not equal!\n");
  }
  puts(str);
  puts(str2);
  return 0;
}