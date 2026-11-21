// Codeforces - 71A
#include <stdio.h>
#include <string.h>

int main(void) {
	// To perform abbreviation of n words
    int t;
    scanf("%d", &t);

    while (t--) {
    	// 101 because 1 is for '\0'
        char name[101];
        scanf("%100s", name);
        // Used <string.h>
        int len = strlen(name);
        // The simple Conidition
        if (len > 10) {
            printf("%c%d%c\n", name[0], len - 2 /*-2 because 1bit is for '\0'*/, name[len - 1]);
        } else {
            printf("%s\n", name);
        }
    }
    
    return 0;
}
