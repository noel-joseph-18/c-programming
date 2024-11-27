#include <stdio.h>
int main(){

	FILE *fp1,*fp2;
	char ch1,ch2;
	fp1=fopen("dataset1.txt","r");
    fp2=fopen("dataset2.txt","r");

	while((ch1=getc(fp1))!=EOF && (ch2=getc(fp2))!=EOF)
	{
		if(ch1 != ch2) {
		
		fclose(fp1);
		fclose(fp2);
		printf("files not equal");
		return 1;
	}
	}
	if((ch1=getc(fp1))!=EOF || (ch2=getc(fp2)!=EOF)){
		printf("files not equal");
		return 1;
	}
	
	
   fclose(fp1);
   fclose(fp2);
   printf("files equal");
	
	return 0;
}
