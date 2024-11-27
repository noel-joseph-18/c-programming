#include <stdio.h>
int main(){
	char store[500],ch;
	FILE *fp;
	printf("enter the data to store it in INPUT txt file \n");
	scanf("%[^\n]s",store);
	fflush(stdin);
	fp=fopen("INPUT.txt","w");
	fprintf(fp,"%s\n",store);
	fclose(fp);
	printf("reading the data from the text document \n");
	fp=fopen("INPUT.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
	

	
}
