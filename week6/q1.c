#include <stdio.h>
int main (){
	char str[100];
	printf("enter the string : ");
	scanf("%s",str);
	int i,len=0;
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	printf("the length of string is %d ",len);
	return 0;
}
