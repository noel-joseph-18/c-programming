#include <stdio.h>
int main(){

	FILE *fp1; char ch;
    fp1=fopen("data1.txt","r");
	

	while((ch=getc(fp1))!=EOF){
	
	printf("character %c,ASCII %d\n",ch,ch); }
	fclose(fp1);
	
	
	return 0;
}
