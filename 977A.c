#include <stdio.h>
int main(){
	int n, t;
	scanf("%d %d", &n, &t);
	while(t){
		if((n%10)== 0){
			printf("%d\n", t);
		}
		t--;
	}
	return 0;
}