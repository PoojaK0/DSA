#include <stdio.h>
#include<stdlib.h>
int main()
{
    int stack[10],n;
    void push(int [],int,int*,int);
    void pop(int [],int*);
    void view(int,int[]);
    int p, top=-1;
    
    while(1){
    printf("enter choice");
    scanf("%d",&n);
    switch(n){
        case 0:exit(0);
        case 1:pop(stack,&top); break;
        case 2: printf("enter value to insert");
        scanf("%d",&p);
        push(stack,p,&top,10); break;
        case 3:view(top,stack); break;
        default:printf("enter valid");
    }}

    return 0;
}
void push(int stack[],int val, int *top,int m){
    if(*top==m){
        printf("stack full");
        return;
    }else{
        (*top)++;
        stack[*top]=val;
       
    }
}
void pop(int stack[],int *top){
    int n;
    if(*top==-1){
        printf("stack empty");
        return;
    }else{
        n=stack[*top];
        (*top)--;
    }
    printf("%d ",n);
}
void view(int top,int stack[]){
    printf("%d",stack[top]);
}

