/*今天是周六，又到了可以休息的日子了，7天后又会是一个周六。请你帮忙计算下，n（n为整数，可以是正也可以为负）天后会是星期几呢？

输入格式:
输入天数

输出格式:
输出星期几

输入样例1:
8
输出样例1:
星期日
输入样例2:
-2
输出样例2:
星期四
*/
#include <stdio.h>   // 引入标准输入输出库，这样才能用 scanf 和 printf

int main() {           // 主函数，程序从这里开始运行

    int n;             // 定义一个整数变量 n，用来存放用户输入的数
    scanf("%d", &n);   // 读取用户输入的整数，存到 n 里（&n 表示 n 的地址）

    int i = 6 + n;     // 先算出 i：从"星期日"（6）往后数 n 天

    // 把 i 调整到 1~7 之间：
    // i 大于 7 就一直减 7，相当于"转一圈回到前面"
    while (i > 7) {
        i = i - 7;
    }

    // i 小于 1 就一直加 7，相当于"往前补足一圈"
    while (i < 1) {
        i = i + 7;
    }

    // switch 根据 i 的值，选择执行对应的分支
    switch (i) {
        case 1:                       // i 等于 1 时
            printf("星期一");
            break;                    // break：跳出 switch，不再往下执行
        case 2:                       // i 等于 2 时
            printf("星期二");
            break;
        case 3:
            printf("星期三");
            break;
        case 4:
            printf("星期四");
            break;
        case 5:
            printf("星期五");
            break;
        case 6:
            printf("星期六");
            break;
        case 7:
            printf("星期日");
            break;
    }

    return 0;          // 程序正常结束，返回 0
}
