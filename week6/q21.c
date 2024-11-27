#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    char s[100], l[100];
    char t[100];
    int index = 0;
    int minLen = 1000, maxLen = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s",str);

    int len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    s[0] = '\0';
    l[0] = '\0';
int i;
    for ( i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            
            t[index++] = str[i];
        } else {
            if (index > 0) {
                t[index] = '\0'; 
                int wordLen = index;
                if (wordLen < minLen) {
                    minLen = wordLen;
                    strcpy(s, t);
                }
                if (wordLen > maxLen) {
                    maxLen = wordLen;
                    strcpy(l,t);
                }
                index = 0; }
        }
    }

    printf("s word: %s\n", s);
    printf("l word: %s\n", l);
    return 0;
}

