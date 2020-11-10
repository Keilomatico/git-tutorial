#include<stdio.h>
#include "espl_lib.h"

int main() 
{
	unsigned int num;
	char *output;
	char cont, temp;

	while(1)
	 {

		printf("Please input a number: ");
		scanf("%d%c", &num, &temp);
	
		output = num_to_words(num);

		unsigned int i = 0;
		while (output[i] != '\0') 
		{
			printf("%c", output[i]);
			i++;
   		}

		printf("\n");	

		cont = ' ';
		while(cont != 'Y' && cont != 'y' && cont != 'N' && cont != 'n')
		{
			printf("\nDo you want to run another number [Y/N]? ");
			scanf("%c%c", &cont, &temp);
		}

		if(cont != 'Y' && cont != 'y')
		{
			break;
		}

	}

	return 0;
}
