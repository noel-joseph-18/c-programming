#include <stdio.h>
int main(){
	char str[100];
	printf("enter the string ");
	scanf ("%[^\n]s",str);
	
	int c=0,t=0,i;
	for(i=0;str[i]!='\0';i++){
	
	if(str[i]==' '||str[i]=='\t'||str[i]=='\n')
	t=0;
	if(str[i]!=' ' && str[i]!='\t' && str[i]!='\n'&& t==0){
		t=1;c++;
	}}
	printf("the number of words in string is %d\n",c);
	return 0;
}
