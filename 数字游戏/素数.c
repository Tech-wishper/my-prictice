/*本题要求编写程序，判断一个给定的整数是否为素数。素数就是只能被1和自身整除的正整数，1不是素数，2是素数。
输入格式:
输入在一行中给出一个需要判断的整数 （）。
输出格式:
如果是素数，则在一行中输出Yes，否则输出No。如果输入了非正整数，也要输出No。
输入样例1:
[ in ]
复制内容
格式
全屏
￼
11
输出样例1:
[ out ]
复制内容
格式
全屏
￼
Yes
输入样例2:
[ in ]
复制内容
格式
全屏
￼
9
输出样例2:
[ out ]
复制内容
格式
全屏
￼
No
输入样例3:
[ in ]
复制内容
格式
全屏
￼
-2
输出样例3:
[ out ]
复制内容
格式
全屏
￼
No
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int isPrime = 1;   // 先假设是素数

    // 小于2的数（0、1、负数）都不是素数
    if (n < 2) {
        isPrime = 0;
    } else {
        // 只需试到 √n，用 k*k <= n 避免开方函数
        for (int k = 2; k * k <= n; k++) {
            if (n % k == 0) {   // 找到能整除的因子
                isPrime = 0;    // 不是素数
                break;          // 立刻退出循环
            }
        }
    }

    // 根据结果输出
    if (isPrime)
        printf("Yes");
    else
        printf("No");

    return 0;
}
/*#include <stdio.h>

int main(){
    long long M;
    scanf("%lld", &M);

    int isprime = 1;

    if(M < 2){
        isprime = 0;              // 先挡掉 0、1、负数
    }else{
        for(long long i = 2; i * i <= M; i++){
            if(M % i == 0){
                isprime = 0;
                break;
            }
        }
    }

    if(isprime)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

*/