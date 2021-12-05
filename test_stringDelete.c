#include <stdio.h>

int stringDelete() {
	char input[40];
	int position;

	printf("Type in the word and press Enter: ");
	scanf("%s",input);

	printf("Type in the position of the character to be deleted: ");
	scanf("%d",&position);

    	printf("Original word = %s\n", input);

	int i;
	int prevChar;

	for(i = 0; i < sizeof(input) / sizeof(input[0]); i++){
		if(i>position){
			input[prevChar] = input[i];
		}
		prevChar = i;
	}

    	printf("Modified word = %s\n", input);



	return 0;
}

int main(){
	stringDelete();
}

