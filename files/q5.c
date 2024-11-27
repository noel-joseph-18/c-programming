#include <stdio.h>
int main(){

	FILE *fp1,*fp2;
	char ch;
	
	fp1=fopen("dataset1.txt","a");
	fp2=fopen("dataset2.txt","r");
	while((ch=getc(fp2))!=EOF)
	putc(ch,fp1);
	fclose(fp1);
	fclose(fp2);
	printf("file appended successfully\n");
	
	return 0;
}
