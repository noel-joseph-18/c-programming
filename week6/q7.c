#include<stdio.h>
int main()
{
  char str1[50],str2[50];
  printf("\nEnter the String 1:");
  scanf("%s",str1);
  printf("\nEnter the String 2:");
  scanf("%s",str2);
  int i=0,t=0;
  while(str1[i]!='\0'&&str2[i]!='\0'){
  	if(str1[i]!=str2[i]){
  		t=1;break;
	  }i++;
  }
  if(t==0 && str1[i]=='\0'&&str2[i]=='\0') printf("the strings are equal");
  else printf("the strings are not equal");
  
  
	return 0;
}
