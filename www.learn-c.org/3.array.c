//
// Created by 张弛 on 2023/6/15.
//
#include <stdio.h>

int main() {
    /* TODO：在这里定义成绩变量 */
    int grades[3];
    int average;

    grades[0] = 80;
    /* TODO：定义缺失的成绩，以使平均分达到85。 */
    grades[1] = 85;
    grades[2] = 90;

    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d", average);

    return 0;
}