#include<stdio.h>
int main(){
char str[40];

printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
printf("Character with space:\n");
for(int i = 0; str[i] != '\0';i++ ){
  printf("%c ", str[i]);
}

  return 0;
}