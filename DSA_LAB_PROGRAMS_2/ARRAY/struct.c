#include<stdio.h>
#include<conio.h>
        struct student
        {
            char frist_name[20];
            int roll;
            float marks;
            
        }s[5];
int main(){
    int i;
    printf("Enter information of students:-\n");
    for ( i = 0; i < 5; i++) 
    {
     printf("Enter Roll Number: ");
     scanf("%d",&s[i].roll);
     printf("Enter Name: ");
     scanf("%s",&s[i].frist_name);
     printf("Enter Marks: ");
     scanf("%f",&s[i].marks);
    }
     printf("Display Information of Students:-\n");
    for ( i = 0; i < 5; i++)
    {
     printf("Roll Number:%d ",s[i].roll);
     printf("Name:%s ",s[i].frist_name);
     printf("Marks:%f ",s[i].marks);
    }
    getch();
}
        
    
