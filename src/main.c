#include<stdio.h>
#include "espl_lib.h"

int main() {
	unsigned int num;
	char *output;

	printf("Please input a number: ");
	scanf("%d", &num);
	
	output = num_to_words(num);

	unsigned int i = 0;
	while (output[i] != '\0') 
	{
		printf("%c", output[i]);
		i++;
   	}

	printf("\n");

	return 0;
}
