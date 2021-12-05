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
	struct student studArr[4] = {
					{"Anna Smith", 3034, {56,63,65,54}},
					{"John Clark", 3035, {78,86,45,76}},
					{"Nigel Mansel", 3042, {34,45,34,45}},
					{"Katherine Dow", 3076, {91,90,89,92}}
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


