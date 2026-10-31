/*本题要求将输入的任意3个整数从小到大输出。

输入格式:
输入在一行中给出3个整数，其间以空格分隔。

输出格式:
在一行中将3个整数从小到大输出，其间以“->”相连。*/
#include <stdio.h>
int main(){    
int num[3];    
int i;    
scanf("%d %d %d", &num[0], &num[1], &num[2]);    
if(num[0]>num[1]){        
i = num[0];num[0] = num[1];num[1]=i;    
}    
if(num[0]>num[2]){        
i = num[0];num[0] = num[2];num[2]=i;    
}    
if(num[1]>num[2]){        
i = num[1];num[1] = num[2];num[2]=i;    
}    
printf("%d->%d->%d\n",num[0],num[1],num[2]);    
return 0;
}//注意，num[3]包含的是num[0],num[1]，num[2],没有num[3]。