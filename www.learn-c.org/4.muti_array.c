//
// Created by 张弛 on 2023/6/15.
//
#include <stdio.h>

int main() {
    /* TODO：在此声明成绩二维数组 */
    int grades[2][5];
    float average;
    int i;
    int j;

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    /* TODO：通过指定终止条件来完成for循环 */
    for (i = 0; i < 2; i++) {
        average = 0;
        for (j = 0; j < 5; j++) {
            average += grades[i][j];
        }

        /* TODO：计算学科i的平均分 */
        printf("The average marks obtained in subject %d is: %.2f\n", i, average / 5);
    }

    return 0;
}