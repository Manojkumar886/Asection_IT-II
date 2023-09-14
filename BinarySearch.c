#include<stdio.h>

int binarysearch(int arr[],int start,int end,int target);//function declareion

int binarysearch(int arr[],int start,int end,int target)//function definition
{
    if(start<end)
    {
        int mid=(start+end)/2; //mid=4
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]>target)
        {
            return binarysearch(arr,0,mid-1,target);
        }
        else if (arr[mid]<target)
        {
            return binarysearch(arr,mid+1,end,target);
        }
        else{
            return -1;
        }
    }
    else
    {
        return -1;
    }

}

void main()
{
    int orderedvalues[10]={11,23,34,45,56,67,78,89,99,100};
    int length=sizeof(orderedvalues)/sizeof(orderedvalues[0]);


    int received;
    received=binarysearch(orderedvalues,0,length,99 );//function calling

    printf("%d in this position of value is %d",received,99);

}