#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    struct node *link;
};

 struct node *add_begin(struct node *ptr,int data){

     struct node *temp=(struct node *)malloc(sizeof(struct node));//2000
     temp->data=data;
     temp->link=NULL;

     temp->link=ptr;

     return temp;


   }

void print(struct node *ptr){

    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }

}

int main()
{

    struct node *head;
    head = (struct node *) malloc(sizeof(struct node));//10000
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;//1000
    ptr = add_begin(ptr, 30);//2000
    ptr=add_begin(ptr,10);//

     

    print(ptr);
    return 0;
}