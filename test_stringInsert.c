#include <stdio.h>

void stringInsert(char *str, char c, int position) {
	
	int i;
	

	for(i = sizeof(str) / sizeof(str[0]) -1; i >= position-1; i--){
    
        str[i+1] = str[i];
	}
    str[position - 1] = c; 

    printf("Modified word = %s\n", str);	
}

int main(){
    char str[40];
	int position;
    char c;

	printf("Type in the word and press Enter: ");
    fgets(str, sizeof(str), stdin);

    printf("\nType in the char,position: ");
	scanf("%c,%d",&c, &position);
	
    printf("Original word = %s\n", str);

	stringInsert(str, c, position);
}

