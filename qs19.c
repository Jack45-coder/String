/*
Q7. Write a program to concatenate two strings in a single string.
Input : str1 : Coding Age , str2 : Cagers
Output : Concatenated string = Coding Age Cagers
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
  int i = 0, j = 0;
  while(str[i] != '\0'){
    i++;
  }
  str[i++] = ' ';
  while(str2[j] != '\0'){
    str[i++] = str2[j++];
  }
 str[i] = '\0';
 printf("Concatenated string = %s\n", str);




  return 0;
}