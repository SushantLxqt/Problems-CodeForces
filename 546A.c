#include <stdio.h>
int main(){
	// k-> initial price of banana, w-> number of bananas, n-> money currently has
	int k,n,w; // for each banana the price increases by the initial price
	int tc = 0;
	scanf("%d %d %d", &k, &n, &w);
	// to find total cost 
	for(int i =1;i<=w;i++){
		tc+=k*i;
	}
	if(n>tc){
		printf("0\n");
	}else{
		printf("%d\n", tc - n);
	}
	return 0;
}