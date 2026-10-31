/*
对于给定的正整数n，输出n的素因数的乘式。

输入格式:
输入一个正整数n，要求1<n≤2^16−1。
输出格式:
输出n的素因数的乘式，要求这些素因数呈非递减排列。
输入样例1:
102
输出样例1:
2*3*17
输入样例2:
980
输出样例2:
2*2*5*7*7
*/
#include <stdio.h>
int main(){    
long long n;    
int first = 1;    
scanf("%lld",&n);
    
for(long long i = 2;i*i<=n;i++){        
while(n%i==0){ 
           
if(first){                
printf("%lld",i);                
first = 0;            
}else{                
printf("*%lld",i);            
}            
n = n / i;        
}
}    
/*循环结束后，如果 n 还大于 1，说明剩下的 n 本身就是一个质数
例如 102 除完 2、3 后剩 17，17 就是最后一个素因数，要补输出 */
if(n>1){        
if(first){        
printf("%lld",n);        
}else{            
printf("*%lld",n);        
}    
}    
printf("\n");    
return 0;
}