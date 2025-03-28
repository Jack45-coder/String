#include <stdio.h>
void inputsStrings(char str[])
{
  printf("Enter the collection of character: ");
  fgets(str, 100 , stdin);
  printf("You entered: %s",str);
}
int countString(char str[])
{
  int c = 0;
  while (str[c] != '\0')
  {
    c++;
  }
  return c-1;
}
int main()
{
  char str[100];
  inputsStrings(str);
  int count = countString(str);
  printf("%d", count);
  return 0;
}