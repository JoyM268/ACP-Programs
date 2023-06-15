//Program to delete all the occurrence of a given character in a string
#include <stdio.h>
#define SIZE 50 

void delete_character(char *, char);
main() 
{
  char str[SIZE], ch;
  printf("Enter a input string: ");
  scanf("%s", str);
  getchar();
  printf("Enter a character to be deleted: ");
  scanf("%c", &ch);
  delete_character(str, ch);
  printf("The string after deletion of %c from string is:\n%s\n", ch, str);
}

void delete_character(char *str, char ch) 
{
  char *temp;
  while(*str)
  {
    if(*str == ch)
    {
      temp = str;
      while(*temp)
      {
        *temp = *(temp + 1);
        temp++;
      }
      *temp = '\0';
      continue;
    }
    str++;
  }
}
