#include<stdio.h>
#include<conio.h>
void main()
{
    int sub_1=0,sub_2=0,sub_3=0,sub_4=0,sub_5=0;
   

    printf("Enter marks of subject1:-%d",sub_1);
    scanf("%d",&sub_1);
    printf("Enter marks of subject2:-%d",sub_2);
    scanf("%d",&sub_2);
    printf("Enter marks of subject3:-%d",sub_3);
    scanf("%d",&sub_3);
    printf("Enter marks of subject4:-%d",sub_4);
    scanf("%d",&sub_4);
    printf("Enter marks of subject5:-%d",sub_5);
    scanf("%d",&sub_5);

 int sum_of_all_subs=sub_1+sub_2+sub_3+sub_4+sub_5;
    int persentage_= sum_of_all_subs/5;

    printf("\nthe addition of subjects is=%d",sum_of_all_subs);
    printf("\n the persentage of all subjects is %d",persentage_);

    getch();

}
