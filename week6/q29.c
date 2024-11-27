#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int freq1[300] = {0}, freq2[300] = {0};
    printf("Enter the first string: ");
    scanf("%[^\n]s", str1);  
    getchar(); 
    printf("Enter the second string: ");
    scanf("%[^\n]s", str2);  
    int i = 0;
    while (str1[i] != '\0') {
        freq1[str1[i]]++;  
        i++;
    }
    i = 0;
    while (str2[i] != '\0') {
        freq2[str2[i]]++;  
        i++;
    }
    int anag = 1;
    for (i = 0; i < 300; i++) {
        if (freq1[i] != freq2[i]) {
            anag = 0;  
            break;
        }
    }

    if (anag) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}

