// Convert all letters in a string to uppercase:

#include <stdio.h>
#include <string.h>
void inputString(char str[])
{
  printf("Enter the string:\n");
  fgets(str, 20, stdin);
  str[strcspn(str, "\n")] = '\0';
}
int main()
{
  char str[20];
  inputString(str);

  int i;
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 32;
    }
  }
  printf("%s", str);

  return 0;
}