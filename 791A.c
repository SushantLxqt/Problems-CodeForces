// Codeforces 791A -> easy
#include <stdio.h>
int main(){
	// The question states it all
	int a,b;
	scanf("%d %d", &a, &b);
	int count = 0;
	// Accident Prevention
	if(a>b){
		printf("0\n");
		return 0;
	}else if(a == b){
		a *= 3;
		b *= 2;
		count++;
	}
	while(b>=a){
		a*=3;
		b*=2;
		count++;
	};
	printf("%d\n", count);
	return 0;
}