/*
给定平面上任意三个点的坐标(x1,y1)、(x2,y​2)、(x3,y3)
检验它们能否构成三角形。
输入格式
输入在一行中顺序给出六个[−100,100]范围内的数字，即三个点的坐标
输出格式:
若这3个点不能构成三角形，则在一行中输出“Impossible”；
若可以，则在一行中输出该三角形的周长和面积，
格式为“L = 周长, A = 面积”，输出到小数点后2位。

输入样例1:
4 5 6 9 7 8
输出样例1:
L = 10.13, A = 3.00
输入样例2:
4 6 8 12 12 18
输出样例2:
Impossible
*/
#include <stdio.h>
#include <math.h>
int main(){    
double a,b,c,d,e,f;    
scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);  

  
double al = sqrt((a-c)*(a-c)+(b-d)*(b-d));    
double bl = sqrt((c-e)*(c-e)+(d-f)*(d-f));    
double cl = sqrt((e-a)*(e-a)+(f-b)*(f-b));   

 
if((al+bl<=cl)||(bl+cl<=al)||(al+cl<=bl)){        
printf("Impossible\n");    
}else{        
double L = al+bl+cl;        
double p = L/2;        
double A = sqrt(p*(p-al)*(p-bl)*(p-cl)); 
       
printf("L = %.2f, A = %.2f",L,A);    
}    
return 0;
}
//这题主要是对开根函数sqrt的应用