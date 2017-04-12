#include <stdio.h>

int main(int argc, char *argv[]){
	
	printf("Number of CmdLine Arguments: %i\n\n", argc);
	
	if(argc > 1){
		printf("CmdLine Arguments: ");
		for(int i = 1; i < argc; i++){
			while(*argv[i] != '\0'){
				printf("%c", *argv[i]);
				argv[i]++;
			}
			printf(" ");
		}
	}
	
}