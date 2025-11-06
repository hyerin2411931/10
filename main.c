#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i = 0;
  char str[4];
  str[0] ='a';
  str[1] ='b';
  str[2] ='c';
  str[4] ='\0';
  
  while(str[i] != 0){      //while¹® Áß°ıÈ£ ÀØÁö ¸»±â...  
    printf("str[%i] = %c\n", i, str[i]);
    i++;
    }
   
  system("PAUSE");	
  return 0;
}
