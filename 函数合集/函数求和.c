/*
用函数求1+2+3+4+5+…+n的和值
分数 10
作者 罗德宁
单位 成都信息工程大学
输入一个整数，写一个函数fun求1+2+3+4+5+…+n的和值，并在main()函数中输出和值。


输入样例:
例如：

5
输出样例:
例如：

sum = 15
*/
#include <stdio.h>
int mysum(int n){    
int sum = 0;    
for(int i = 0;i<=n;i++){        
sum = sum + i;    
}
    
return sum;
}
int main(){    

int n;
scanf("%d", &n);
    
printf("sum = %d",mysum(n)); 
   
return 0;
}
//这题简单，主题是对函数的调用