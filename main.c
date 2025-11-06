#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char *argv[])
{
  char stc[] = "The worst things to eat before you sleep";
  char dst[100];
  
  strcpy(dst, stc);   //앞에 반환값 받는 변수 설정 안해도 됨. 
   
  printf("copied string : %s\n", dst);
   
  system("PAUSE");	
  return 0;
}
