#include <stdio.h>
#include <string.h>
void inputsStr(char str[])
{
  printf("Enter the string:\n");
  fgets(str, 20, stdin);
  str[strcspn(str, "\n")] = '\0';
}

int main()
{
  char str[20];
  char str2[20];
  inputsStr(str);
  inputsStr(str2);
  for (int i = 0; str[i] != 0; i++)
  {
    int check = 0;
    for (int j = 0; str[j] != 0; j++)
    {
      if (str[i] == str[j])
      {
        check = 1;
        break;
      }
      if(check == 0);
      break;
    }
    if(check == 1){
    printf("Anagram");
    }
    if(check == 0){
      printf("Not anagram");
    }
  }

  return 0;
}