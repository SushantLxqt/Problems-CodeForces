// It is quite easy, i am the dumb one here, still i got it.
#include <stdio.h>
int main(){
	long int n;
	int t;
	scanf("%d %d", &n, &t);
	while(t){
		if((n%10)== 0){
			n = n/10;
		 }else if((n%10) != 0){
			n = n-1;
		}
	  t--;	
	}
	printf("%d\n", n);
	return 0;
}
