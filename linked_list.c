#include<stdio.h>
#include<stdlib.h>

typedef struct node node;

struct node{
    int data;
    struct node *link;   
};

struct node *create_node()  
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    return temp;
}

struct node *insert_at_begin(int data, struct node *start){
    struct node *new_node = create_node();
   new_node->data = data;
   new_node->link = start;
   return new_node;

}

struct node *insert_at_last(int data, struct node *start)
{
    struct node *last = create_node();
    last->data = data;
    last->link = NULL;
    start->link = last;
    
    return last;
}

struct node *insert_at_certainpoint(int data, struct node *ptr, struct node *last)
{
    struct node *certain = create_node();
    certain->data = data;
    certain->link = NULL;
    ptr->link = certain;
    certain->link = last;
}

struct node *remove_node(struct node *head, struct node *node)
{
    if(node == head)
    {
        head = node->link;
        free(node);
        return head;
    }
    struct node *current_node = head;
    while(current_node !=NULL)
    {
        if(current_node->link == node)
        {
            break;
        }
        current_node = current_node->link;
    }
    if(current_node == NULL)
    {
        return head;
    }
    current_node->link = node->link;
    free(node);
    return head;

}

void print(struct node *ptr){

    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
int main()
{

    struct node * start = NULL;
start =insert_at_begin(20, start);
struct node *last = insert_at_last(30, start);
struct node *add_certain = insert_at_certainpoint(40, start, last);
print(start);
printf("\n");
struct node *head = remove_node(start, add_certain);
print(start);
    return 0;
}