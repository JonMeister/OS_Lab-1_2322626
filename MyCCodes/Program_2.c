//
// Created by jonat on 25/08/2024.
//
#include <stdio.h>
struct Grades {
    float midTermExam;
    float finalExam;
    float labsAndQuizzes;
    float project;
};
struct Student {
    char name[20];
    struct Grades grades;
};

void printCourseGrades(struct Student students[3]) {
    for (int i = 0; i < 3; i++) {
        float finalGrade=students[i].grades.midTermExam*.35+students[i].grades.finalExam*.25+students[i].grades.labsAndQuizzes*.3+students[i].grades.project*.1;
        printf("%s's final grade is: %.2f \n",students[i].name,finalGrade);
    }
};
int main() {
    struct Student students[3]={{"Jonathan"},{"Andrea"},{"Camilo"} };
    for (int i = 0; i < 3; i++) {
        printf("Please enter the grades for %s\n",students[i].name);

        printf("Enter the mid term exam grade:\n");
        int isValidGrade=scanf("%f",&students[i].grades.midTermExam);
        if (isValidGrade!=1 || students[i].grades.midTermExam>5 || students[i].grades.midTermExam<0) {
            printf("Please enter a valid mid term exam grade");
            return 1;
        }
        isValidGrade=0;
        printf("Please enter the final exam grade:\n");
        isValidGrade=scanf("%f",&students[i].grades.finalExam);
        if (isValidGrade!=1 || students[i].grades.finalExam>5 || students[i].grades.finalExam<0) {
            printf("Please enter a valid final exam grade");
            return 1;
        }
        isValidGrade=0;
        printf("Please enter the labs and quizzes grade:\n");
        isValidGrade=scanf("%f",&students[i].grades.labsAndQuizzes);
        if (isValidGrade!=1 || students[i].grades.labsAndQuizzes>5 || students[i].grades.labsAndQuizzes<0) {
            printf("Please enter a valid labs and quizzes grade");
            return 1;
        }
        isValidGrade=0;
        printf("Please enter the project grade:\n");
        isValidGrade=scanf("%f",&students[i].grades.project);
        if (isValidGrade!=1 || students[i].grades.project>5 || students[i].grades.project<0) {
            printf("Please enter a valid project grade");
            return 1;
        }

    }
    printCourseGrades(students);

return 0;

}