/*
Write a program to print individual characters of a string in reverse order:
*/
#include<stdio.h>
#include<string.h>
void inputsArr(char str[]){
  printf("Enter the string:\n");
  fgets(str, 20, stdin);
  str[strcspn(str, "\n")] = '\0';
}
int main(){
char str[20];
inputsArr(str);
int len = strlen(str);
for(int i = len; i >= 0; i--){
  if(str[i] == ' '){
    continue;
  }
  printf("%c ",str[i]);
}

printf("\n%s",str);


  return 0;

}