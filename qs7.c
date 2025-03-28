// Concatenate two string: Using loop

#include <stdio.h>
#include <string.h>
int main()
{
  char str[20] = "Coding";
  char str2[10] = "Age";

  int i = 0, j = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  while (str2[j] != '\0')
  {
    str[i] = str2[j];
    i++;
    j++;
  }
  str[i] = '\0';
  printf("%s\n", str);

  return 0;
}