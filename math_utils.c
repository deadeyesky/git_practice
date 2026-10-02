#include "math_utils.h"
#include <stdio.h>

double calculate_average(int score1, int score2, int score3) {
    return (double)(score1 + score2 + score3) / 3.0;
}

char determine_grade(double average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

void display_result(double average, char grade) {
    printf("Average: %.2f\tGrade: %c", average, grade);
}
