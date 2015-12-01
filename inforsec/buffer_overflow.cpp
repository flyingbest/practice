#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
	bool valid = false;
	char str1[8];
	char str2[8];

	strcpy(str1, "START");
	//str1 = "STRAT";
	gets(str2);
	if( strncmp(str1, str2, 8) == 0 ){
		valid = true;
	}
	printf("buffer1 : str1(%s), str2(%s), valid(%d)\n", str1, str2, valid);
	
	return 0;
}
