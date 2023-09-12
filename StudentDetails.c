#include <stdio.h>

int main()
{
    char StudentName[]="";
    int StudentAge;
    float StudnetPercentage;
    char StudentSection;
    char StudentSkillset[20];

    printf("IT-A StudentDetails \n");
    printf(" Enter your Name : ");
    scanf("%s",&StudentName);

    printf(" please tell us your age ,percentage,section,skillset");
    scanf("%d \n %f \n %c \n %s",&StudentAge,&StudnetPercentage,&StudentSection,StudentSkillset);
    printf("Your name is :%s \n your age is :%d \n your percentage %f\n your section : %c \n your skillset is : %s ",StudentName,StudentAge,StudnetPercentage,StudentSection,StudentSkillset);
}