#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char *argv[])
{
  char input[100];
  FILE*fp;
  char c;
  
  fp = fopen("sample.txt", "r");
  if(fp == NULL){
    printf("failed to open file.\n");
    return  -1;}

#if 0   
  while((c = fgetc(fp)) != EOF){    //한글자씩 가져오는 경우 
   putchar(c);
   }
#endif

#if 1
  while( fgets(input,100, fp) > 0)  //한 단어씩 가져오는 경우, 글자수가 0이 아닐때, or 0 이상일떄 
  printf("%s",input); 

#endif
  system("PAUSE");	
  return 0;
}
