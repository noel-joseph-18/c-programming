#include <stdio.h>
int main(){

	FILE *fp1,*fp2; char ch;
	int n;
	fp1=fopen("original.txt","r");
    fp2=fopen("copy.txt","w");  

	while((ch=getc(fp1))!=EOF)
	{
	putc(ch,fp2);
	}
	printf("content of original.txt copied successfully to copy.txt\n ");
	fclose(fp1);
	fclose(fp2);
	return 0;
	

	
}
