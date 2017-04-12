#include <stdio.h>

int main(int argc, char *argv[]){
	printf("Number of CmdLine Arguments: %i\n", argc);
	
	while(*argv[1] != '\0'){
		printf("%c", *argv[1]);
		argv[1]++;
	}
	
	printf(" ");
	
	while(*argv[2] != '\0'){
		printf("%c", *argv[2]);
		argv[2]++;
	}
	
}