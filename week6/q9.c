#include<stdio.h>
int main()
{
  char str[100];
  printf("Enter the String:");
  scanf("%s",str);
   char ch[12]="AaEeIiOoUu";
  int i,j;
  printf("the vowels in the string are :");
  for(i=0;str[i]!='\0';i++)
  for(j=0;ch[j]!='\0';j++){
  	if(str[i]==ch[j]){
  		printf("%c ",str[i]);
	  } 
  }
  
	return 0;
}
