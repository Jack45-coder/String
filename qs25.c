/*
Q13. Convert all letters in the string to lowercase.
Input: "HELLO" Output: "hello"
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
  for(int i = 0; i < len; i++){
    if(str[i] >= 'A' && str[i] <= 'Z'){
      str[i]+=32;
    }
    printf("%c",str[i]);
  }

  return 0;
}