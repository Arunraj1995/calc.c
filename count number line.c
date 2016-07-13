#include <stdio.h>
#include <string.h>
void main()
{
 char s[200];
 int count = 0, i;
 printf("enter the string\n");
 gets(s);
 for (i = 0;i<strlen(s);i++)
 {
  if (s[i] == ' ')
  count++;    
 }
 printf("number of words in given string are: %d\n", count);
}
