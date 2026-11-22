// CodeForces = 263A ( Nested Loops -> Lack of Nested loops, took me some time)
#include <stdio.h>
#include <stdlib.h> // Could have used if else but abs is better
int main() {
    int row[5][5];

    // Taking input
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &row[i][j]);
        }
    }
    // Printing the entire array
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (row[i][j] == 1) {
		unsigned int vali = abs(2-i); // no need to explain abs absolute value of the number into positive ( used unsigned int before but that's not how unsigned int works so yeah)
		unsigned int val2 = abs(2-j);
   		printf("%d", vali + val2);
		}
	}
    }
        printf("\n");

    return 0;
}
