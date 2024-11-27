#include <stdio.h>
int main(){

	FILE *fp,*fpodd,*fpeven;
	int n;
	fp=fopen("DATA.txt","r");
    fpodd=fopen("ODD.txt","w");
	fpeven=fopen("EVEN.txt","w");
  

	while(fscanf(fp, "%d ",&n)!=EOF)
	{
	if(n%2==0) 
	fprintf(fpeven,"%d\n",n);
	else fprintf(fpodd,"%d\n",n);
	}
	printf("integers seperated into odd and even in 2 different files");
	fclose(fp);
	fclose(fpodd);
	fclose(fpeven);
	return 0;
	

	
}
