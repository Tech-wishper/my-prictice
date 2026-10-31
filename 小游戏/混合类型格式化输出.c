/*本题要求编写程序，顺序读入浮点数1、整数、字符、浮点数2，再按照字符、整数、浮点数1、浮点数2的顺序输出。

输入格式：
输入在一行中顺序给出浮点数1、整数、字符、浮点数2，其间以1个空格分隔。

输出格式：
在一行中按照字符、整数、浮点数1、浮点数2的顺序输出，其中浮点数保留小数点后2位。*/
#include<stdio.h>
int main()
{    
float fudianshu1;    
int zhengshu;    
char zifu;        
float fudianshu2;    
scanf("%f %d %c %f",&fudianshu1,&zhengshu,&zifu,&fudianshu2);          
printf("%c %d %.2f %.2f",zifu,zhengshu,fudianshu1,fudianshu2);    
return 0;
}//注意，输入输出时的格式 
/*变量类型	正确格式符	       常见错误
    int	       %d	      用 %f 读 int → 数据错乱
    long long  %lld	      用 %d → 只读到一半
    float	   %f	 
    double	   %lf	      用 %f → 读入错误 （scanf 里 double 必须 %lf）
    char	   %c	 
    char[]	   %s	 
    特别注意scanf中的double类型必须用%lf，printf只需要%f即可。*/