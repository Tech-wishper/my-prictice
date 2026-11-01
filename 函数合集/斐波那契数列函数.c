/*7-10 输出Fibonacci数列的前n项
分数 20
作者 陈晓梅
单位 广东外语外贸大学
已知Fibonacci数列的规律是1，1，2，3，5，8，…，即数列的前两项是1，
其后的每一项都是其前两项的和。输出Fibonacci数列的前n（1<=n<=40）项。
要求定义并调用含静态变量的函数Fibonacci(n)计算Fibonacci数列的第n项。
输入格式:
输入n值

输出格式:
以每行4个的格式输出Fibonacci数列的前n项。每项占10位列宽并左对齐。

输入样例:
在这里给出一组输入。例如：

10
输出样例:
在这里给出相应的输出。例如：

1         1         2         3         
5         8         13        21        
34        55        
*/
#include <stdio.h>

int Fibonacci(int n)
{
    /* static：只初始化一次，函数返回后值仍保留
       —— 用来"记住"已算过的项，避免重复计算 */
    static int f[41] = {0, 1, 1};   // f[1]=1, f[2]=1（f[0] 占位不用）
    static int max = 2;             // 目前已经算到第几项
    int i;

    if (n <= max)                   // 已经算过，直接查表
        return f[n];

    for (i = max + 1; i <= n; i++)  // 从没算过的地方接着往后推
        f[i] = f[i - 1] + f[i - 2]; // 每项 = 前两项之和

    max = n;                        // 更新"算到哪了"
    return f[n];
}

int main(void)
{
    int n, i;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%-10d", Fibonacci(i));  // 宽度 10，左对齐
        if (i % 4 == 0)                 // 每 4 个换行
            printf("\n");
    }

    if (n % 4 != 0)                     // 最后不满 4 个，补一个换行
        printf("\n");

    return 0;
}
