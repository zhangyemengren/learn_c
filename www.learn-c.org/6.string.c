//
// Created by 张弛 on 2023/6/15.
//
#include <stdio.h>
#include <string.h>
int main() {
    /* 定义first_name */
    char *first_name = "John";
    /* 定义last_name */
    char last_name[] = "Boe";
    char name[100];

    last_name[0] = 'B';
    sprintf(name, "%s %s", first_name, last_name);
    if (strncmp(name, "John Boe", 100) == 0) {
        printf("Done!\n");
    }
    // \0 代表字符串结束 0位既是字符串结束 说明清空了
    name[0]='\0';
    strncat(name,first_name,4);
    strncat(name,last_name,20);
    printf("%s\n",name);
    return 0;
}