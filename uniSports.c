#include <stdio.h>
struct result {
	char home[40];
    int homeScore;
    char away[40];	
    int awayScore;
};
int main(){
    struct result resultArr[10] = dataExtract(resultArr);
    
    
    printResult(resultArr);
}


int printResult(struct result resultArr[10]){
	//forloop counters
	int i;
	int j;

	//calc length of arrays
	int resultArrLen = sizeof(resultArr) / sizeof(struct result);
	
	//loop through each result
	for(i = 0; i < resultArrLen; i++){       
	
	}

	return 0;
}

struct result dataExtract(struct result resultArr[10]) {
	char input[40];
	const char s[5] = " ,.-";
	char *token;
    int i;
	int j;
	printf("Type in the word and press Enter: ");
	fgets(input,sizeof(input),stdin);

    token = strtok(input, s);
	while(token != NULL){

        printf("%s\n",token);
        token = strtok(NULL, s);
	}



	return resultArr;
}



