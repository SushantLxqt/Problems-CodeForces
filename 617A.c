// CodeForces -> 617A
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    // Store the divisible ( x == 10, steps ==2 and that will be the answer)
    int steps = x/5;
    if(x%5!=0){
    	steps++;
    }
    printf("%d\n", steps);

    return 0;
}