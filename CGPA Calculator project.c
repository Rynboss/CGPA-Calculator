
#include <stdio.h>
#include <string.h>

void overallCGPA() {
    int N;
    float sum = 0, cgpa, avg;
    printf("How many semesters have you completed? ");
    scanf("%d", &N);

    for (int i=1; i<= N; i++) {
        printf("Enter CGPA for semester %d: ", i);
        scanf("%f", &cgpa);
        sum += cgpa;
        }
    avg= sum/N;
    printf("\nYour overall CGPA = %.2f\n", avg);

    if (avg>3.8) {
        printf("Are you even human?\n");
    }
    else if (avg>3.5) {
        printf("That's incredible!\n");
    }
    else if (avg > 3.0) {
        printf("Awesome!\n");
    }
    else {
        printf("That's pretty harsh bro.\n");
    }
}

void semesterCGPA() {
    int T, S, totalCourses;
    printf("How many theory courses do you have? ");
    scanf("%d", &T);
    printf("How many sessional courses do you have? ");
    scanf("%d", &S);
totalCourses = T + S;
char courseNames[50][50];
    float credits[50], grades[50];
    float totalCredit = 0, weightedSum = 0, gpa;


    for (int i = 0; i < T; i++) {
        printf("Enter name of theory course %d: ", i + 1);
        scanf(" %[^\n]", courseNames[i]); // read full line
        printf("How many credits is %s? ", courseNames[i]);
        scanf("%f", &credits[i]);
        printf("Enter achieved GPA for %s: ", courseNames[i]);
        scanf("%f", &grades[i]);
    }


    for (int i = 0; i < S; i++) {
        int idx = T + i;
        printf("Enter name of sessional course %d: ", i + 1);
        scanf(" %[^\n]", courseNames[idx]);
        printf("How many credits is %s? ", courseNames[idx]);
        scanf("%f", &credits[idx]);
        printf("Enter achieved GPA for %s: ", courseNames[idx]);
        scanf("%f", &grades[idx]);
    }


    for (int i = 0; i < totalCourses; i++) {
        weightedSum += grades[i] * credits[i];
        totalCredit += credits[i];
    }

    gpa = weightedSum / totalCredit;

    printf("\nYour Semester CGPA = %.2f\n", gpa);

    if (gpa > 3.8) {
        printf("Are you even human?\n");
    } else if (gpa > 3.5) {
        printf("You're incredible!\n");
    } else if (gpa > 3.0) {
        printf("Awesome!\n");
    } else {
        printf("That's pretty harsh bro.\n");
    }
}

int main(){
    int choice;
printf("What do you want to calculate?\n");
    printf("Overall CGPA: enter 1\n");
    printf("CGPA for this semester: enter 2\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
if (choice == 1) {
    overallCGPA();
}
else if (choice == 2) {
        semesterCGPA();
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
