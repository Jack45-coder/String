/*
Q3. Write a program to find the first repeated character in a string.
Input : string = Repeated
Output: The Repeated character in a string = e
*/
#include <stdio.h>
#include <string.h>
void inputString(char str[])
{
  printf("Enter the string:\n");
  fgets(str, 20, stdin);
  str[strcspn(str, "\n")] = '\0';
}

void repeatedString(char str[])
{
  int len = strlen(str);
  int c = 0;
  for(int i = 0; i < len; i++){
    for(int j = i+1; j < len; j++){
      if(str[i] == str[j]){
        printf("%c ",str[i]);
        c = 1;
        break;
      }
    }
  }



}
int main()
{
  char str[20];
  inputString(str);
  repeatedString(str);

  return 0;
}