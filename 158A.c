//Codeforces = 158A
#include <stdio.h>

int main(void) {
    int n, pos;
    scanf("%d %d", &n, &pos);

    int arr[n];
    int count = 0;
    // The position of the player can't be more than the
    // actual number of people available.
    if(pos>n){
		printf("Invalid\n");	
		return 0;
    }	
		
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
	
    for(int i = 0; i < n; i++) {
        if(arr[i] >= arr[pos - 1] && arr[i] > 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
