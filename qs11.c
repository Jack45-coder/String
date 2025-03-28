// Copy one string to another:

#include<stdio.h>
#include<string.h>
void inputsString(char str[]){
  printf("Enter the strings:\n");
  fgets(str, 20, stdin);
  str[strcspn(str, "\n")] = '\0';
}
int main(){
char str[20];
char str2[10];
inputsString(str);
inputsString(str2);
// for(int i = 0; str[i] != '\0'; i++){
//   str[i] = str2[i];
// }
// printf("%s",str);

strcpy(str, str2);
puts(str);


  return 0;
}