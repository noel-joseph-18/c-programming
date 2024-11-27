#include <stdio.h>
int main () {
	int a,b,c;
	printf("the sides of the triangle are :",a,b,c);
	scanf("%d %d %d",&a,&b,&c);
	
	if (a==b &&b==c) {
		printf("equilateral"); return 0;
	}
	else {
		if (a==b!=c || a!=b==c ) {
			printf("isosceles");
		return 0;} 
		else (a!=b && b!=c && a!=c) 
			;printf("scalene");
		
		
	} return 0;
}
