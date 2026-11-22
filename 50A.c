#include <stdio.h>
#define DOMINOS 2
int main(){
	int m,n;
	scanf("%d %d", &m, &n);
	int sqr = m*n;
	int value = (int)sqr/2;
	printf("%d\n", value);
	

	return 0;
}
