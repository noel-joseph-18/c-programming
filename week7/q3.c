#include <stdio.h>

void reversing(char *str){
	char *last = str,t,*first;
	while(*last!='\0')
	{last++;}
	last-=1;
	for(first=str;first<last;last--,first++)
		{
			t=*first;
			*first=*last;
			*last=t;
		}
	} 

            
int main(){
    char str[100];
    printf("enter the string \n");
    scanf("%[^\n]s",str);
    reversing(str);
    printf("the reversed string is %s ",str);
    
    
	return 0 ;
}
