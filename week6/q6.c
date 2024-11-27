#include<stdio.h>
int main()
{
  char t,str[100];
  printf("\nEnter the String:");
  scanf("%[^\n]s",str);
  fflush(stdin);
  printf("\nEnter the character to be searched for first occuance:");
  scanf("%c",&t);
   int i,j=0;
  for(i=0;str[i]!='0';i++){
  	if(str[i]==t){
  		printf("the first occurance of the %c character is at position  %d",t,i+1);
  		j=1;
  		break;
	  }
  }
  if(j==0){
  	printf("the given character is not found in the array");
  }
	return 0;
}
