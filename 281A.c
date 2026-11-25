// CodeForces -> 281A.c ( easiest )
#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Problems like this would have been a pice of cake in py or js or java or c++
int main(){
	char name[10001];
	scanf("%10000s", &name);
	// For same question like this  
	// Make all the letters small
    // for(int i =0;name[i]!='\0';i++){
    // 	name[i] = (char)tolower((unsigned char) name[i]);
    // }
    // // Capitalize the first letter
    for(int i =0; name[i]!='\0'; i++){
    	name[0] = (char)toupper((unsigned char) name[0]);
    	printf("%c", name[i]);
    }
	return 0;
}

// Easy one 
//name[0] = (char)toupper((unsigned char) name[0]);
//easy