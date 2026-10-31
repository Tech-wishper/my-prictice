/*本题目要求读入菱形起始字母和菱形的高度，然后输出空心字符菱形。所谓“空心菱形”是指：每行由两端为字母、中间为空格的字符串构成，每行的字符串中心对齐；上半部分相邻两行字符串长度差2，且字母从给定的起始字母逐一递增；下半部分与上半部分对称。
输入格式:
输入在一行中给出起始字母（范围为英文大写字母A-G）和菱形的高度（为不超过10的奇数）。
输出格式:
输出空心字符菱形。
输入样例:
B 5
输出样例:
  B
 C C
D   D
 C C
  B
  */
#include <stdio.h>

int main(){
    char start;      // 起始字母
    int n;           // 菱形高度（奇数）
    scanf("%c %d", &start, &n);

    int mid = n / 2;             // 中间行的下标（0开始），比如高度5，mid=2

    // ---------- 上半部分（包含中间行）----------
    // 行数：mid+1 行，即第 0 行到第 mid 行
    for(int i = 0; i <= mid; i++){
        char ch = start + i;      // 当前行的字母

        // 1. 打印每行开头的空格：每往上一行多加1个空格
        //    首行(mid)之前要缩进 mid 个空格，往下逐行减1
        for(int j = 0; j < mid - i; j++){
            printf(" ");
        }

        // 2. 打印本行的内容
        if(i == 0){
            // 第一行只有一个字母，空心菱形的顶点
            printf("%c", ch);
        } else {
            // 其他行：字母 + (中间空格) + 字母
            // 中间空格数 = 2*i - 1，随着往下逐行 +2
            printf("%c", ch);
            for(int j = 0; j < 2 * i - 1; j++){
                printf(" ");
            }
            printf("%c", ch);
        }

        printf("\n");
    }

    // ---------- 下半部分（不含中间行，与上半对称）----------
    // 行数：mid 行，即从 mid-1 递减到 0
    for(int i = mid - 1; i >= 0; i--){
        char ch = start + i;      // 与上半对应行字母相同

        for(int j = 0; j < mid - i; j++){
            printf(" ");
        }

        if(i == 0){
            printf("%c", ch);
        } else {
            printf("%c", ch);
            for(int j = 0; j < 2 * i - 1; j++){
                printf(" ");
            }
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}
