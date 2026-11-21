// CodeForces = 282
#include <stdio.h>
int main()
{	/* The trick here is if we do ++X or X++
	 the value that matter is the middle one-> text[1]
	 using that trick it is solved
	*/
	int n;
	scanf("%d", &n);
	int x = 0;
	char text[4];
	for(int i = 0; i<n;i++){
		scanf("%3s", text);
		// here, used that trick
		if(text[1]=='+'){
			++x;
		}else if(text[1] == '-'){
			--x;
		}else{
			puts("Invalid!");
		}
		
	}
	printf("%d\n",x);
	return 0;
}