#include <stdio.h>
struct Student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};

int main(){

    struct Student arr[1000];
    int index = 0;

    printf("学生成绩管理系统\n");

    while (1)
    {

        printf("1---添加学生成绩\n");
        printf("2---删除学生成绩\n");
        printf("3---显示所有学生成绩\n");
        printf("4---业务1：所有总分不及格的学生（小于180）\n");
        printf("5---业务2：每一科都不及格的学生\n");
        printf("6---业务3：显示总分最高的学生\n");
        printf("7---业务4：显示平均分最高，且没有不及格科目的学生\n");
        printf("8---退出\n");

        printf("输入相关的功能编号\n");

        int code;
        scanf("%d", &code);
        
        if (code == 1) {
            printf("输入学生姓名\n");
            scanf("%s",&arr[index].name);

            printf("输入语文成绩\n");
            scanf("%d",&arr[index].yuwen);

            printf("请输入数学成绩\n");
            scanf("%d",&arr[index].shuxue);

            printf("请输入英语成绩\n");
            scanf("%d",&arr[index].yingyu);

            index++;
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
         if (code == 2) {
        }
         if (code == 3) {
        }
         if (code == 4) {
        }
         if (code == 5) {
        }
         if (code == 6) {
        }
         if (code == 7) {
        }
         if (code == 8) {
             printf("回车退出\n");
             break;
        }
        
    }

    return 0;

}