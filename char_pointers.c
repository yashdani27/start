#include <stdio.h>

int main(void){
	
	char string_array[] = "Thisisastring";
	
	char *str = &string_array;
	
	printf("Address of string array: %x\n", string_array);
	printf("Address of str: %x\n", str);
	
	/*for(int i = 0; i < 10; i++){
		printf("%c\n", *string_array);
		string_array++;
	}*/
	
	while(*str != '\0'){
		printf("%c", *str);
		str++;
	}
	
	printf("\n");
	
	char *name = "Yash Dani";
	
	printf("%s\n", name);
	
}