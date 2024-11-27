#include<stdio.h>
int main()
{
  char str[100];
  printf("Enter the String:");
  scanf("%s",str);

  int i,t=0,len=0;
	for(i=0;str[i]!='\0';i++){
		len++;
	}
    for(i=0;i<len/2;i++){
    	if(str[i]!=str[len-i-1])
		{t=1;break;}
	}
	if(t==0)
	printf("the string is a palindrome");
	else printf("the string is not a palindrome");
	return 0;
}
