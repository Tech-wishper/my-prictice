/*请编写程序，将十进制数转换成 n 进制数。
输入格式
x  n
说明：x(0≤x≤2^−63−1) 为十进制数，n(2≤n≤36) 为数制。
输出格式
y
说明：y 为 n 进制整数 (超过 9 的数字，用大写字母表示：A 表示 10, B 表示 11, ..., Z 表示 35)。
输入样例1
37 2

输出样例1
100101

输入样例2
4786 20

输出样例2
BJ6

*/
#include <stdio.h>

int main(void)
{
    unsigned long long x;   // 十进制数，最大 2^63-1，必须用 unsigned long long
    int n;                  // 目标进制 2~36
    scanf("%llu %d", &x, &n);   // %llu 对应 unsigned long long

    /* 对照表：下标 0~35 对应的字符，用查表代替一堆 if-else */
    const char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char ans[100];          // 暂存每一位字符（低位在前）
    int len = 0;            // 已经存了几位

    /* 特判：x 为 0 时循环进不去，必须单独输出 */
    if (x == 0) {
        printf("0\n");
        return 0;
    }

    /* 反复除以 n，余数是当前最低位 */
    while (x > 0) {
        int r = x % n;              // 取余数
        ans[len++] = digits[r];     // 查表转成字符，存入并计数
        x = x / n;                  // 商赋回 x，继续下一位
    }

    /* 存的时候低位在前，所以倒着打印才是正确顺序 */
    for (int i = len - 1; i >= 0; i--)
        printf("%c", ans[i]);

    printf("\n");
    return 0;
}
