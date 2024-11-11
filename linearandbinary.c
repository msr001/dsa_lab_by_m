#include<stdio.h>
#include<stdlib.h>
int a[100],n,key;
int lsearch(int a[],int n,int key)
{
    int i=-1;
    while(i<n)
    {
        if(a[++i]==key)
        return i;
    }
    return -1;
}
int binsearch(int a[],int n,int key)
{
    int first,last,mid,i;
    first=0;
    last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(key==a[mid])
        return mid;
        else if(key<a[mid])
        last=mid-1;
        else 
        first = mid+1;
    }
    return -1;
}
void acceptinput()
{
    int i,n,key;
    printf("Enter the number of elements");
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter an element to be searched:");
    scanf("%d",&key);
}
void main()
{
int ch,flag;
while(1)
{
    printf("\n searching techniques");
    printf("\n***********************");
    printf("\n 1. linear search");
    printf("\n 2. binary search");
    printf("\n 3. exit");
    printf("\n Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : acceptinput();
        flag=lsearch(a,n,key);
        if(flag==-1)
        printf("\n search unsucessful");
        else
        printf("\n An element %d found at position %d ",key,flag+1);
        break;
        case 2 :printf("\nEnter the elements in ascending order");
        acceptinput();
        flag = binsearch(a,n,key);
        if(flag==1)
        printf("%d found in array\n",key);
        else 
        printf("An element %d found at position %d \n",key,flag+1);
        break;
        case 3 : exit(0);
    }
  }
}











