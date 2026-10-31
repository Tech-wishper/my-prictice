/*计算1!+2!+3!+......
已知求阶乘的函数如下，利用这个函数，编程计算并输出5*(1!+2!+...+n!)的值。注意函数Fact()返回的类型。 

unsigned long  Fact(unsigned int  n)
{
    int  i;
    unsigned long result = 1;
    for (i=2; i<=n; i++)
        result *= i;
    return result;
}
提示：最后一行输出sum的格式为 printf("sum=%u",sum);//无符号整数
输入格式:
输入整数n，n小于13。

输出格式:
sum=计算结果。

输入样例:
4
输出样例:
sum=165
*/
#include <stdio.h>
unsigned long  Fact(unsigned int  n)
{    
int  i;    
unsigned long result = 1;    
for (i=2; i<=n; i++)        
result *= i;    
return result;
}


int main(){    
unsigned int n;    
scanf("%u",&n);    
unsigned int sum = 0;//unsigned是定义一个包括0在内的正数变量；
    
for(int k = 0;k<n;n--){    
sum += Fact(n);    
}
    
sum=sum*5;    

printf("sum=%u\n",sum);    
return 0;
}