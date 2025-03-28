/*
.Write a program to compare two strings.
Input : str1 : Coding Age , str2 : Cagers
Output : Strings are not equal
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
  int len1 = strlen(str);
  int len2 = strlen(str2);
  if(len1 != len2){
    printf("Strings are not equal.");
    return 0;
  }
  int flag = 0;
  for(int i = 0; i < len1; i++){
      if(str[i] != str2[i]){
        flag = 1;
        break;
    }
  }
  if(flag == 0){
    printf("Strings are equals.");
  }
  else{
    printf("Strings are not equals");
  }

  return 0;
}