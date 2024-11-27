#include<stdio.h>
int main()
{
  char str1[100],str2[100];
  int i,j;
  printf("\nEnter First String:");
  scanf("%s",str1);
  fflush(stdin);
  printf("\nEnter Second String:");
  scanf("%s",str2);
  for(i=0;str1[i]!='\0';)
  i++;j=0;
  while(str2[j]!='\0')
  {
    str1[i]=str2[j];
    j++;
    i++;
  }
  str1[i]='\0';
  printf("\nConcatenated String is %s",str1);
}
