#include<stdio.h>
#include<stdlib.h>
int main(void){
	
	int pointer_increment = 0;
	
	int *ptr = malloc(10*sizeof(int));
	
	int **ptr1 = &ptr;
	
	*ptr = 2147483647;
	printf("%i\n", *ptr);
	
	*ptr = 2147483648;
	printf("%i\n", *ptr);
	
	*ptr = 2147483648*2 - 1;
	printf("%i\n", *ptr);
	
	*ptr = 2147483648*2 - 1;
	printf("%i\n", *ptr);
	
	int x = 6;
	printf("%d\n", x<<1);
	
	for(int i = 0; i < 10; i++){
		ptr[i] = i+i+i;
		//*ptr = i+i;
		printf("ptr[%d]: %i\n", i, ptr[i]);
	}
	
	printf("Address Location: %x\tData: %i\n", ptr, *ptr);
	
	for(int i = 10; i < 15; i++){
		*ptr = i+i;
		//printf("ptr[%d]: %i\n", i, *ptr);
		printf("Address Location: %x\tData: %i\n", ptr, *ptr);
		ptr++;
		pointer_increment++;
	}
	
	printf("Address Location: %x\tData: %i\n", ptr, *ptr);
	
	for(int i = 15; i < 20; i++){
		*ptr = i+i;
		//printf("ptr[%d]: %i\n", i, *ptr);
		printf("Address Location: %x\tData: %i\n", ptr, *ptr);
		ptr++;
		pointer_increment++;
	}
	
	printf("Address Location: %x\tData: %i\n", ptr, *ptr);
	
	printf("\nPointer incremented by %i\n", pointer_increment);
	
	ptr -= pointer_increment;
	
	printf("\nAddress Location: %x\tData: %i\n", ptr, *ptr);
	
	free(ptr);
	
}