/*
Q2. .Write a program to count the total number of vowels or consonants
in a string.
Input : string = vowels
Output: the total number of vowels in a string = 2
the total number of consonants in a string = 4
*/
#include <stdio.h>
#include <string.h>
void inputsArr(char str[])
{
  printf("Enter the strings:\n");
  fgets(str, 20, stdin);
  str[strcspn(str, "\n")] = '\0';
}

int findVolConst(char str[])
{
  int c1 = 0, c2 = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
    {
      c1++;
    }
    else{
      c2++;
    }
  }
  printf("The total number of vowels in a string = %d\n",c1);
  printf("The total number of consonants in a string = %d",c2);
  return c1,c2;
}
int main()
{
  char str[20];
  inputsArr(str);
  findVolConst(str);

  return 0;
}