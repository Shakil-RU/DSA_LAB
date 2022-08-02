#include<stdio.h>
#include<stddef.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data)
{
 struct node *new_node = (struct node *) malloc(sizeof(struct node));
 if(new_node == NULL){
 printf("could not create node");
 exit(1);}
 new_node->data = data;
 new_node->left = NULL;
 new_node->right = NULL;
 return new_node;   
}

void add_left_child(struct node *node, struct node *child)
{
    node->left = child;
}
void add_right_child(struct node *node, struct node *child)
{
    node->right = child;
}

struct node *create_tree()
{
    struct node *two = create_node(2);
    struct node *seven = create_node(7);
    struct node *nine = create_node(9);
    add_left_child(two, seven);
    add_right_child(two, nine);


    return two;
}

int main()
{
    struct node *root = create_tree();
    printf("%d\n", root->data);
    return 0;
}