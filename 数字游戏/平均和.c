/*N 个正数的算数平均是这些数的和除以 N，它们的调和平均是它们倒数的算数平均的倒数。本题就请你计算给定的一系列正数的调和平均值。
输入格式：
每个输入包含 1 个测试用例。每个测试用例第 1 行给出正整数 N (≤1000)；第 2 行给出 N 个正数，都在区间 [0.1,100] 内。
输出格式：
在一行中输出给定数列的调和平均值，输出小数点后2位。
输入样例：
8
10 15 12.7 0.3 4 13 1 15.6
输出样例：
1.61
*/
#include <stdio.h>

int main(){
    int n;
    double k[1000];              // 存放 N 个数

    scanf("%d", &n);

    double sum = 0;              // 累加倒数和，必须在循环外声明
    for(int i = 0; i < n; i++){  // 从 0 开始，遍历 n 个数
        scanf("%lf", &k[i]);     // double 输入用 %lf
        sum += 1.0 / k[i];       // 累加每个数的倒数
    }

    double H = 1.0 / (sum / n);  // 倒数和 ÷ n，再取倒数 = 调和平均

    printf("%.2f\n", H);         // 保留两位小数

    return 0;
}
/*无数组版本
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    double sum = 0, x;
    for(int i = 0; i < n; i++){
        scanf("%lf", &x);
        sum += 1.0 / x;                // 边读边累加
    }

    printf("%.2f\n", 1.0 / (sum / n));

    return 0;
}
*/