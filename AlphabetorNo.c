
#include <stdio.h>
int main()
{
  char input;
  scanf("%c",&input);
  if(input>=65 && input<=90 ||  input>=97 && input<=122)
  {
    printf("Alphabet");
  }
  else
  {
    printf("No");
  }
}
