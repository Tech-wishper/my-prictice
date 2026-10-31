/*世界上不同国家有不同的写日期的习惯。比如美国人习惯写成“月-日-年”，而中国人习惯写成“年-月-日”。下面请你写个程序，自动把读入的美国格式的日期改写成中国习惯的日期。

输入格式：
输入在一行中按照“mm-dd-yyyy”的格式给出月、日、年。题目保证给出的日期是1900年元旦至今合法的日期。

输出格式：
在一行中按照“yyyy-mm-dd”的格式给出年、月、日。
*/
#include <stdio.h>
int main(){    
int mm,dd,yyyy;    
scanf("%d-%d-%d",&mm, &dd, &yyyy);    
if(mm<10&&dd>=10){    
printf("%d-0%d-%d",yyyy, mm, dd);    
}else if(mm>=10&&dd<10){        
printf("%d-%d-0%d",yyyy, mm, dd);    
}else if(mm<10&&dd<10){    
printf("%d-0%d-0%d",yyyy, mm, dd);    
}    
return 0;
}//注意补零条件