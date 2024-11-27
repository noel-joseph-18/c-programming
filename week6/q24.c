#include <stdio.h>

int main() {
   
    int i,f[256] = {0}; 
     char str[1000];
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);
    for (i = 0; str[i] != '\0'; i++) {
        f[(int)str[i]]++; 
    }
    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (f[i] > 0) {
            printf("'%c': %d\n", i, f[i]);
        }
    }
    return 0;
}

