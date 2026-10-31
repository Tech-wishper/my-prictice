//指针遍历数组，getmax函数
/*#include <stdio.h>
void getmax(int a[],int len,int *min,int *max){
	*min = *max = a[0];
	for(int i = 0;len>i;i++){
		if(*min>a[i])
		*min = a[i];
		if(*max<a[i])
		*max = a[i];
	} 

}
int main(){
	int a[] = {1,2,13,89,51,64,78,13,5,0};
	int min,max;
	getmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
    printf("min=%d, max=%d\n", min, max);
	return 0;
} 
这是下标遍历 
*/
#include <stdio.h>

void getmax(int *a, int len, int *min, int *max) {
    int *p   = a;//p指向首个元素
    int *end = a + len;//end是组后一个元素再后一位，因为a可以表达为a[0]。

    *min = *max = *a;

    for (; p < end; p++) {
        if (*min > *p) *min = *p;
        if (*max < *p) *max = *p;
    }
}

int main(void) {
    int a[] = {1, 2, 13, 89, 51, 64, 78, 13, 5, 0};
    int min, max;

    getmax(a, sizeof(a) / sizeof(a[0]), &min, &max);

    printf("min=%d, max=%d\n", min, max);
    return 0;
}
/*p        == a        == &a[0]    // 都是"第一个元素的地址"
*p       == a[0]     == *a       // 都是"第一个元素的值"
*(p + 1) == a[1]                 // 第二个元素
p[i]     == a[i]                 // 指针也能用 []，等价于 *(p+i)*/