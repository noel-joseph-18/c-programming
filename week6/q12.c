#include <stdio.h>
#include <string.h>
int main() {
    char str[100], m, l;
    int f[26] = {0};
    int i,most,least;

    printf("Enter a string: ");
    scanf("%s",str);fflush(stdin);
    int maxf=0,minf = strlen(str) + 1;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z')) {
            f[str[i] - 'a']++;
        } else if ((str[i] >= 'A' && str[i] <= 'Z')) {
            f[str[i] - 'A']++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (f[i] > 0) {
            if (f[i] > maxf) {
                maxf = f[i];
                 most = 'a' + i;
            }
            if (f[i] < minf) {
                minf = f[i];
                 least = 'a' + i;
            }
        }
    }


    printf("Most repeated characters: ");
    for (i = 0; i < 26; i++) {
        if (f[i] == maxf) {
            printf("%c ", 'a' + i);
        }
    }
    printf("(%d times)\n", maxf);


    printf("Least repeated characters: ");
    for (i = 0; i < 26; i++) {
        if (f[i] == minf) {
            printf("%c ", 'a' + i);
        }
    }
    printf("(%d times)\n", minf);


    return 0;
}

