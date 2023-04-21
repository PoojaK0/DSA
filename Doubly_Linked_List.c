#include <stdlib.h>
#include <stdio.h>

typedef struct nodetype{
    int info;
    struct nodetype *prev;
    struct nodetype *next;
}node; 

int main()
{
    void insertB(node**,node**,int);
    void insertE(node**,node**,int);
    void deleteE(node **,node **);
    void deleteB(node **,node **);

    void traversal(node *,node *);
    void taill(node *,node *);
    
    node *head=NULL;
    node *tail=NULL;
    int n,v;
  
    
    while(1){
        printf("enter choice : ");
        scanf("%d",&n);
        switch(n){
            case 1 : printf("enter value to insert at B: ");
                    scanf("%d",&v);
                    insertB(&head,&tail,v); break;
            case 2 : traversal(head,tail); break;
            case 3 : taill(tail,head); break;
            case 4 : printf("enter value to insert at E: ");
                    scanf("%d",&v);
                    insertE(&head,&tail,v); break;
            case 5: deleteE(&tail,&head); break;
            case 6: deleteB(&tail,&head); break;
            
            default: exit(0);
        }
    }
    return 0;
}
void insertB(node **head,node **tail, int n){
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=n;
    ptr->prev=NULL;
    
    if(*head==NULL && *tail == NULL){
        ptr->next=NULL;
        *head=ptr;
        *tail=ptr;
    }else{
        node *curr=*head;
        ptr->next=*head;
        curr->prev=ptr;
        *head=ptr;
    }
}
void insertE(node **head,node **tail, int n){
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=n;
    ptr->next=NULL;
    
    if(*head==NULL && *tail == NULL){
        ptr->prev=NULL;
        *head=ptr;
        *tail=ptr;
    }else{
        node * curr=*tail;
        curr->next=ptr;
        ptr->prev=*tail;
        *tail=ptr;
    }
}
void traversal(node *head,node * tail){
    if(head == NULL){
        printf("EMPTY LIST\n");
        return;
    }
    printf("Inorder : \n");
    while(head != NULL){
        printf("%d <-> ",head->info);
        head=head->next;
    }
    printf("null\nReversal : \n");
    printf("null <-> ");

     while(tail->prev != NULL){  //while(tail != NULL)  wrong
        printf("%d <-> ",tail->info);
        tail=tail->prev;
    }
    printf("%d \n",tail->info);

}
void taill(node *tail,node * head){
    if(head != NULL){
    printf("Tail : %d\n",tail->info);
    printf("Head : %d",head->info);
    }else{
        printf("Null values\n");
    }

}
void deleteE(node **tail,node **head){
if(*tail == NULL){
    printf("EMPTY LIST : Nothing to delete\n");
}else{
    node *curr=*tail;
    if(curr->prev==NULL){
        *tail=NULL;
        *head=NULL;
    }else{
        node * p;
        *tail=curr->prev;
        p=*tail;
        p->next=NULL;
        curr->prev=NULL;
        free(curr);
    }
}
}
void deleteB(node **tail,node **head){
    if(*head == NULL){
    printf("EMPTY LIST : Nothing to delete\n");
}else{
    node *curr=*head;
    if(curr->next==NULL){
        *tail=NULL;
        *head=NULL;
    }else{
        node * p;
        
        *head=curr->next;
        p=*head;
        p->prev=NULL;
        curr->next=NULL;
        free(curr);
    }
}
}




