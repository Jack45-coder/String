// Find Length of a string, using loop

#include<stdio.h>
#include<string.h>

void inputsString(char string[]){
  printf("Enter the strings:\n");
  fgets(string, 20, stdin);
  string[strcspn (string, "\n")] = '\0';
}
int main(){
char str[20];
inputsString(str);
puts(str);
int count = 0;
for(int i = 0; str[i] != '\0'; i++){
  count++;
}
printf("Length of string is %d",count);


  return 0;
}