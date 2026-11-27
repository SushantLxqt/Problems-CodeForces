#include <stdio.h>
#include <string.h>
int main() {
	int count =0;
    int n;
    scanf("%d", &n);
    char arr[n + 1];
    scanf("%s",arr);
    for(int i=0;i<strlen(arr);i++){
    	// The question states if two color matches together we can just change it so yeah it worked
    	if(arr[i+1] == arr[i]){
    		count++;
    	}
    }// easy questions are just over exagerated
    printf("%d\n", count);
    return 0;
}