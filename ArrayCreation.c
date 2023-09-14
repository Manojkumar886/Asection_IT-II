#include <stdio.h>
void main()
{
    int memberscount[4]={30,50,40,30};
    printf("%d \n",memberscount[3]);
    int length=sizeof(memberscount)/sizeof(memberscount[0]);

// int length=(4*4)16/4=4
    for(int pos=0; pos<length;pos++)
    {
        printf("%d \t",memberscount[pos]);
    }
}