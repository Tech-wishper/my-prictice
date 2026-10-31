/*
两个正整数的最大公约数（Greatest Common Divisor，GCD）是能够整除这两个整数的最大整数。请实现程序，用递归方法计算两个数的最大公约数。

递归法：
当a > b时，则a 和b与a - b 和 b 的最大公约数相同，即Gcd(a,b)=Gcd(a-b.b)
当b > a时，则a 和b与a 和 b- a 的最大公约数相同，即Gcd(a,b)=Gcd(a.b-a)
当a = b时，a 和 b的最大公约数就是 a （或b）
输入格式:
由用户从键盘输入两个正整数。

输出格式:
输出两个正整数的最大公约数。

如果输入的数不是正整数，则程序输出：

Input Data error!
函数接口定义：
int Gcd(int a, int b);
其中，a和b是用户输入的两个正整数。

函数返回a和b的最大公约数。

如果a或b不是不是正整数，则函数返回-1。

主程序样例：
这里给出主函数及对Gcd函数的调用样例：

#include <stdio.h>
int Gcd(int a, int b);
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = Gcd(a,b);
    if (c != -1)
    {
        printf("%d\n", c);
    }
    else
    {
        printf("Input Data error!\n");
    }
    return 0;
}

 请在这里完成 Gcd 函数
 
输入样例:
在这里给出一组输入。例如：

15 20
输出样例:
在这里给出相应的输出。例如：

5

*/
#include <stdio.h>
#include <stdio.h>
int Gcd(int a, int b);
int main()
{    
int a, b, c;    
scanf("%d %d", &a, &b);    
c = Gcd(a,b);    
if (c != -1)    
{        
printf("%d\n", c);    
}    
else    
{        
printf("Input Data error!\n");    
}    
return 0;
}
/* 请在这里完成 Gcd 函数*/
int Gcd(int a, int b)
{    
int result;
    if (a <= 0 || b <= 0)        
result = -1;                   
else if (a == b)        
result = a;                    
else if (a > b)        
result = Gcd(a - b, b);        
else        
result = Gcd(a, b - a);    
    return result;                 
}
//没啥可说的