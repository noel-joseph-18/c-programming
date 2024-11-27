#include <stdio.h>
int main (){
	char str1[100],str2[100];
	printf("enter the actual string : ");
	scanf("%[^\n]s",str1);
	int i;
	for(i=0;str1[i]!='\0';i++)
	str2[i]=str1[i];
	str2[i]='\0';
	
	printf("\nthe string 2 after string is copied from string 1 is %s",str2);
	return 0;
}
