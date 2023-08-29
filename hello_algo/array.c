#include <stdio.h>
#include <stdlib.h>
int randomAccess(int *nums, int size);
void insert(int *nums, int size, int num, int index);

int main(){
    // 初始化
    int arr[5] = {0};
    int nums[5] = {1, 2, 3, 4, 5};
    printf("sizeof(arr) = %zu\n", sizeof(arr));
    printf("sizeof(nums) = %zu\n", sizeof(nums));
    // 访问
    int x = randomAccess(nums, 5);
    insert(nums, 5, 6, 3);
    printf("x = %d\n", x);
    printf("nums[3] = %d nums[4] =%d\n", nums[3], nums[4]);
}

int randomAccess(int *nums, int size) {
    // 在区间 [0, size) 中随机抽取一个数字
    // 取余不可能大于等于除数 所以是0 ~ size - 1
    int randomIndex = rand() % size;
    return nums[randomIndex];
}
/* 在数组的索引 index 处插入元素 num */
void insert(int *nums, int size, int num, int index){
    for(int i = size - 1; i > index; i--){
        nums[i] = nums[i - 1];
    }
    nums[index] = num;
}