#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    fflush(stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') { 
            printf("The first capital letter is: %c\n", str[i]);
            return 0;
        }
    }

    printf("No capital letter found in the string.\n");
    return 0;
}

