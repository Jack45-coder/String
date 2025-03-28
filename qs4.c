#include <stdio.h>
int countVowels(char str[])
{
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    char ch = str[i];

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' ||
        ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
      count++;
    }
  }
  return count;
}
int main()
{
  char str[30];
  fgets(str,sizeof(str),stdin);

  int vowelCount = countVowels(str);
  printf("Number of vowels in the string: %d\n", vowelCount);


  return 0;
}