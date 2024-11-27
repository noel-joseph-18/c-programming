#include <stdio.h>
int main(){

	FILE *fp1; int n,sum=0;
    fp1=fopen("numbers.txt","r+");
	

	while(fscanf(fp1,"%d ",&n)!=EOF)
	sum+=n;
	fprintf(fp1,"\nsum is %d",sum);
	fclose(fp1);
	
	printf("sum appended successfully\n");
	
	return 0;
}
