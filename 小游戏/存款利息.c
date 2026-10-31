#include <stdio.h>
#include <math.h>
int main()
{    
//本题目要求计算存款利息，计算公式为interest=money*(1+rate)year-money
//其中interest为存款到期时的利息（税前），money是存款金额，year是存期，rate是年利率。
double money,year,rate;    
scanf("%lf %lf %lf",&money, &year ,&rate);    
double i = money*pow(1+rate,year);    
double interest = i - money;    
printf("interest = %.2f",interest);    
return 0;
//注意对头文件的调用（math.h)
}