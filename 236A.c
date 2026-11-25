#include <stdio.h>
#include <string.h>
// ASCII approach
int main() {
    char input[101];
    int freq[26] = {0};
    int count = 0;

    scanf("%100s", input);

    int len = strlen(input);

    for (int i = 0; i < len; i++) {
        int index = input[i] - 'a';
        // Ascii approach
        if 	(freq[index] == 0) {
            freq[index] = 1;
            count++;
        }
    }

    if (count % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}