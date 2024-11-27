#include <stdio.h>

int main() {
    char str[100];
    int t[26] = {0}; 
    int i = 0, isp = 1;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 'a' - 'A'; }
        if (ch >= 'a' && ch <= 'z') {
            t[ch - 'a'] = 1;  }     
        i++;
    }
    for (i = 0; i < 26; i++) {
        if (t[i] == 0) {
            isp = 0; 
            break;
        }
    }
    if (isp!=0) {
        printf("The string is a pangram.\n");
    } else {
        printf("The string is not a pangram.\n");
    } return 0;
}

