#include <stdio.h>
int main() {
    char str[100];
    int track[256] = {0}; 
    int i = 0, j = 0;

    printf("Enter a string: ");
   scanf("%s",str);
   fflush(stdin);
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
  i = 0;
    while (str[i] != '\0') {
        if (track[(char)str[i]] == 0) {
            track[(char)str[i]] = 1; 
            str[j++] = str[i];             
        }
        i++;
    }
    str[j] = '\0';

    printf("String after removing repeated characters: %s\n", str);
    return 0;
}

