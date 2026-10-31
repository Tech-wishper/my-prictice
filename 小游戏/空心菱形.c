/*使用*打印空心菱形

提示：

Ø  空心菱形的图案打印难度较大，除了需要拆解为上下两个部分的等腰三角形之外，还需要在菱形的内部填补空格。

Ø  菱形内部将原有的*，替换为空格，就可以形成空心菱形。需要判断控制*输出的内层循环，是否处于循环的边界处，如果在边界处直接打印*，否则就打印空格。

输入格式:
输入菱形高度
*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int mid = n / 2;   // 最宽那行

    // ===== 上半部分（头 → 腰），i 从 0 到 mid =====
    for(int i = 0; i <= mid; i++){

        // ① 左缩进空格
        for(int j = 0; j < mid - i; j++){
            printf(" ");
        }

        // ② 打印星
        if(i == 0){
            printf("*");                 // 头，只有一颗星
        } else {
            printf("*");                 // 左星
            for(int j = 0; j < 2 * i - 1; j++){
                printf(" ");             // 中间空格
            }
            printf("*");                 // 右星
        }

        printf("\n");
    }

    // ===== 下半部分（腰下一行 → 脚），i 从 mid-1 到 0 =====
    for(int i = mid - 1; i >= 0; i--){

        for(int j = 0; j < mid - i; j++){
            printf(" ");
        }

        if(i == 0){
            printf("*");
        } else {
            printf("*");
            for(int j = 0; j < 2 * i - 1; j++){
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
