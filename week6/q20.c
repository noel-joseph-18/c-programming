#include <stdio.h>
int main() {
	char str[200], w[50][50], t[50];
    int i, j, k = 0, n = 0;
    printf("Enter a string(alphabets only): ");
    scanf(" %[^\n]s", str);
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            w[n][j] = '\0'; 
            n++;              
            j = 0;              
        } else {
            w[n][j++] = str[i];
        }
    }
    w[n][j] = '\0'; 
    n++;   
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(w[j], w[j + 1]) > 0) {
                strcpy(t, w[j]);
                strcpy(w[j], w[j + 1]);
                strcpy(w[j + 1], t);
            }
        }
    }
    printf("Sorted words: ");
    for (i = 0; i < n; i++) {
        printf("%s ", w[i]);
    }printf("\n");

	return 0;
}
