// Wrong Answer 4x times just because lack of buffer memory (i forgot codeforces test cases)
// Regardless, a solid A tier question -> easy
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	int count =0;
	int count2 = 0;
	char s[10000];
	scanf("%9999s", s);
	int value = strlen(s);
	for(int i =0;i<value;i++){
		if(islower((unsigned char)s[i])){
			count++;
		};
		if(isupper((unsigned char) s[i])){
			count2++;
		}
	}
	if( count >= count2){
		for(int j=0;j<value;j++){
			s[j] =tolower((unsigned char) s[j]);
		}
		printf("%s", s);
	}else{
		for(int i=0; i<value; i++){
			s[i] = toupper((unsigned char) s[i]);
		}
		printf("%s", s);
	}
	return 0;
}