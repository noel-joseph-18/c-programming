#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200], r[200];
    int i, j, k = 0, f, l1, l2;
    int cut = 0;

    printf("Enter the first string: ");
    scanf(" %[^\n]s", str1);
    printf("Enter the second string: ");
    scanf(" %[^\n]s", str2);
    l1 = strlen(str1); l2 = strlen(str2);
    for (i = 0; i < l1; i++) {
        if (str1[i] == str2[0] && !cut) {
            f = 1;
			 for (j = 0; j < l2; j++) {
                if (str1[i + j] != str2[j]) {
                    f = 0;
                    break;
                }
            }

            if (f!=0) {
                i += l2 - 1;
                cut = 1;
            } else {
                r[k++] = str1[i];
            }
        } else {
            r[k++] = str1[i];
        }
    }
    r[k] = '\0';
    printf("Modified string: %s\n", r);
    return 0;
}

