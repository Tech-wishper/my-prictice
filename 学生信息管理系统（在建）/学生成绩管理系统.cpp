#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
typedef struct Student{
	double score;
	char id[20];
	char name[20];
}Student;

Student students[MAX_STUDENTS];

int count = 0;

void addStudent(void)
{
	
	printf("欢迎使用录入系统！\n请输入本次录入人数。退出请输入“0”。\n\n\n"); 
	int addnum = 0;
    if(scanf("%d",&addnum) != 1){
      printf("[错误]请输入数字！\n\n\n");
	  while(getchar()!='\n') { }
	  return;
	}
    
    if(addnum == 0){
	  printf("已退出。\n\n\n");
	  return;
	}
    
    if(addnum < 0){
	  printf("[警告]请输入有效数字！\n\n\n");
	  return;
	}
    
	if (count + addnum > MAX_STUDENTS) {
		if(count == MAX_STUDENTS){
		    printf("[警告]容量已满，无法继续录入！\n\n\n");
			}else{
            printf("[警告]容量不足！当前已录 %d 人，最多还能录 %d 人。\n\n\n",
                   count, MAX_STUDENTS - count);
			}
            return;
        }


	for(int k = 0; k < addnum; k++){
	
	    printf("请输入学生学号:");
		
		while(scanf("%19s",students[count].id) != 1){
           printf("[错误]请输入有效学号！\n\n\n");
	       while(getchar()!='\n') { }
	       printf("请重新输入学号:");
		   }
		
		printf("请输入学生姓名:");
		while(scanf("%19s",students[count].name) != 1){
           printf("[错误]请输入有效姓名！\n\n\n");
	       while(getchar()!='\n') { }
	       printf("请重新输入姓名:");
		}
		
		printf("请输入学生成绩:");
		while(scanf("%lf",&students[count].score) != 1){
           printf("[错误]请输入有效成绩！\n\n\n");
	       while(getchar()!='\n') { }
	       printf("请重新输入成绩:");
		}
		
	    count++;
	}
	printf("本次录入完成，当前共 %d 名学生。\n\n\n", count);
}



int main(){
	int choice = -1;
	while(1){
	
	printf("欢迎使用学生成绩管理系统！\n\n\n");
	printf("输入对应数字以使用功能。\n"); 
	printf("输入“1”，录入学生成绩。\n");
	printf("输入“2”，查看已录入成绩。\n"); 
	printf("输入“0”，退出学生成绩管理系统。\n");
	printf("请输入您的选择：");
	
	if(scanf("%d",&choice)!=1){
		printf("[错误]请输入数字！\n\n\n");
		while(getchar()!='\n') { }
		continue;
	}
	switch(choice){
		
		case 1:
			addStudent();
			break;
			
		case 2:
			printf("[提示]查看功能开发中，敬请期待！\n\n\n"); 
			break;
			
		case 0: 
		    printf("感谢您的使用，再见！\n\n\n"); 
		    return 0;
		default:
		    printf("[错误]输入数字无效！\n\n\n");
	}       
	        }
	return 0;
}
