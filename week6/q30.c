#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int length = 0;
    printf("Enter a sentence: ");
    if (scanf("%[^\n]s", s) != 1) {
        
        printf("-1\n");  
        return 0;
    }
    
	 
    int i = strlen(s) - 1;
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
 
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }
       printf("Length of the last word: %d\n", length);
    return 0; 
}

