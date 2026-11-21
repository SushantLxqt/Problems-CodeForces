// Codeforces - 4A
#include <stdio.h>
#include <string.h>

int main(void) {
	// variable declaration
	int n;
	scanf("%d", &n);
	// Basic Solution
	if(n>2){
		if(n%2==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}else{
		printf("NO\n");
	}
    return 0;
}
