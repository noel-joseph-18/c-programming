#include <stdio.h>


int main() {
    char str[100], nstr[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    
    
    
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (!((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || 
              (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))) {
            nstr[j++] = ch;
        }
    }
    nstr[j] = '\0'; 
    printf("String after removing vowels: ");
    for (i = 0; nstr[i] != '\0'; i++) {
        printf("%c", nstr[i]); 
    }
    printf("\n");

    return 0;
}

