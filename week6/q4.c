#include<stdio.h>

int main()
{
  char str[100];
  int i;
  printf("\nEnter the String(in uppercase):");
  scanf("%s",str);
  
  while(str[i]!='\0'){
  	if(str[i]>='A' && str[i]<='Z'){
	  
  	str[i]+=32;
  } i++;}
   printf("Lowercase string: %s\n", str);
    return 0;
}
