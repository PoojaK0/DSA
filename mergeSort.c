#include <stdio.h>
#define m 7
int b[7];

void sort(int a[],int,int);
void merge(int a[],int,int,int);

    
int main()
{
   
    int a[7]={2,6,4,5,1,0,9};
    sort(a,0,m-1);
    
    for(int i=0; i<m; i++)
    printf("%d",b[i]);

    return 0;
}

void sort(int arr[],int s,int e){
    int mid;
    
    if(s<e){
        mid=(s+e)/2;
        sort(arr,s,mid);
        sort(arr,mid+1,e);
        merge(arr,s,mid,e);
    }
}

void merge(int arr[],int start,int mid,int end){
    int l1=start,l2=mid+1,i=start;
    
    while(l1 <=mid && l2 <=end){
        if(arr[l1]>= arr[l2])
        b[i++]=arr[l2++];
        else
        b[i++]=arr[l1++];
    }
    
    while(l1<=mid)
    b[i++]=arr[l1++];
    
    while(l2<=end)
    b[i++]=arr[l2++];
    
    for(i = start; i <= end; i++)
    arr[i] = b[i];
}



