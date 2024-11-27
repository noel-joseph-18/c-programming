
#include<stdio.h>
int main()
{
  char str[100];
  printf("\nEnter the String:");
  scanf("%s",str);

  int i,len=0;
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	for(i=0;i<len/2;i++)
	{

char 	t=str[i];
	str[i]=str[len-i-1];
	str[len-i-1]=t;}
	printf("the reversed string is %s",str);
	return 0;
}
