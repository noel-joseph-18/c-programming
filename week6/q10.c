#include<stdio.h>
int main()
{ int pos,i,j=0,s;
  char str[100],ch;
  printf("enter the string \n");
  scanf("%s",str);
  s=sizeof(str)/sizeof(char);
  char strk[s+1];
  fflush(stdin);
  printf("enter the character to insert\n");
  scanf("%c",&ch);
  printf("enter the position to insert the character");
  scanf("%d",&pos);
  for (i = 0;str[i]!='\0'; i++) {
        if (i == pos-1) {
            strk[j++] = ch;
        }

        strk[j++] = str[i];
    }
    strk[j] = '\0';
    printf("Modified string: %s\n", strk); 
	return 0;
}
