// can use enums as well to store the value of each letters
#include <stdio.h>
#include <string.h>
#include <ctype.h>
// needed lexicographically 
int main() {
    char sigma[101];
    char antony[101];

    scanf("%100s %100s", sigma, antony);

    for (int i = 0; sigma[i] != '\0'; i++) {
        sigma[i] = (char)tolower((unsigned char)sigma[i]);
    }

    for (int i = 0; antony[i] != '\0'; i++) {
        antony[i] = (char)tolower((unsigned char)antony[i]);
    }
    // strcmp gives either 0 or 1
    int result = strcmp(sigma, antony);

    if (result > 0) {
        printf("1\n");
    }
    else if (result < 0) {
        printf("-1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}
