/*
Write a program to count the total number of words in a string.
O/P - Hello Word
Input - 2
*/

#include<stdio.h>
#include<string.h>
void inputsString(char str[]){
  printf("Enter the string:\n");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
}
int main(){
char str[100];
inputsString(str);
int c = 1;
int len = strlen(str);
for(int i = 0; i < len; i++){
  if(str[i] == ' '){
    c++;
  }
}
printf("The total num of words in a string = %d",c);
  return 0;
}