#include <stdio.h>
int findnthterm(int n, int a,int b,int c){
	if(n==1)
	return a;
	else if(n==2)
	return b;
	else if(n==3)
	return c;
	else
	 return findnthterm(n-1,a,b,c)+findnthterm(n-2,a,b,c)+findnthterm(n-3,a,b,c);
	 
}
int main(){
	int t1,t2,t3,tn,n;
	printf("enter 1st 3 terms \n");
	scanf("%d %d %d",&t1,&t2,&t3);
	printf("to find nth term , n=");
	scanf("%d",&n);
	tn=findnthterm(n,t1,t2,t3);
	printf("nth term is %d",tn);
	return 0;
}
