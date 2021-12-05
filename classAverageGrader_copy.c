#include <stdio.h>
struct student {
	char name[40];
	int student_number;
	int marks[4];
};

int main() {
	//forloop counters
	int i;
	int j;

	//creates array of new instances of student
	struct student studArr[3] = {
					{"James", 101, 40, 50, 60},
					{"Kathy", 202, 50},
					{"Anna", 303, 60, 75}
					};

	//calc length of arrays
	int studArrLen = sizeof(studArr) / sizeof(struct student);
	int studArrMarksLen = sizeof(studArr[0].marks) / sizeof(studArr[0].marks[0]);

	//loop through each student
	for(i = 0; i < studArrLen; i++){
        int average = 0;
		printf("Student: %s has average mark: ", studArr[i].name);

		//loop through each mark, and calc average
		for(j = 0; j < studArrMarksLen; j++){
            		average += studArr[i].marks[j];
		}
		average = average/studArrMarksLen;
		printf("%d\n",average);
	}

	return 0;
}


