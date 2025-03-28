#include<stdio.h>
#include<string.h>
int main(){
char str1[] = "Coading Age";
char copyStr[sizeof(str1)];

strncpy(copyStr, str1,sizeof(str1));
copyStr[8] = '\0';
printf("%s\n",copyStr);

  return 0;
}