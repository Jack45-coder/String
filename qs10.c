// Case-Sensitive String Comparison:

#include <stdio.h>
#include<string.h>
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
  if(strcmp(str, str2) == 0){
    printf("Strings are equal (Case-Sensitive).\n");
  }
  else
    {
        printf("Strings are NOT equal (Case-Sensitive).\n");
    }

    return 0;
}