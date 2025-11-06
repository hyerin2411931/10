#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char *argv[])
{
  char input[100];
  FILE*fp;
  fp = fopen("sample.txt", "w");
  int i;
  
  for(i =0; i <3; i++){
  printf("input a word:");
  scanf("%s", input);   //배열에는 & 안씀
  fprintf(fp, "%s\n", input); }
  
  fclose(fp); 
   
  system("PAUSE");	
  return 0;
}
