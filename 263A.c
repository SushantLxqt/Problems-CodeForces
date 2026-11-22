#include <stdio.h>
int main(){
	int m1,m2;
	int row[5];
	scanf("%d", &m1);
	for(int i =0;i<m1;i++){
		scanf("%d ", &row[i]);
		printf("%d\n", row[i]);	
	}
	return 0;
}
