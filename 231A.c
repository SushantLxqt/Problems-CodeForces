//CodeFroces = 231A
#include <stdio.h>

int main(void) {
    int ra = 0;
    int n;
    scanf("%d", &n);

    int p, v, t;

    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &p, &v, &t);
	// Each can have either 0 or 1
	// The problem states either 2 of them have 1 -> true
	// so, 2 is something that would satisfy the question.
        if (p + v + t >= 2) {
            ra++;
        }
    }

    printf("%d\n", ra);

    return 0;
}
