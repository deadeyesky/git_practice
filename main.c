/**
 * @author      : sky (sky@$HOSTNAME)
 * @file        : main
 * @created     : Tuesday Sep 29, 2026 17:48:11 MDT
 */

#include <stdio.h>

#include "math_utils.h"

int main() {
    int score1;
    int score2;
    int score3;

    printf("First score: \n");
    scanf("%d", &score1);

    printf("Second score: \n");
    scanf("%d", &score2);

    printf("Third score: \n");
    scanf("%d", &score3);

    double average = calculate_average(score1, score2, score3);
    char grade = determine_grade(average);

    display_result(average, grade);
}
