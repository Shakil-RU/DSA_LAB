
#include<stdio.h>
#include<stddef.h>
struct node {
    int data;
    struct node *parent;
    struct node *left;
    struct node *right;
};

struct node *create_node(int item)
{
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
    if(new_node == NULL)
    {
        printf("could not create node");
        exit(1);
    }
    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

void add_left_child(struct node *node, struct node *child)
{
  node->left = child;
  if(child != NULL)
  {
    child->parent = node;
  }
}
void add_right_child(struct node *node, struct node *child)
{
    node->right = child;
    if(child != NULL)
    {
        child->parent = node;
    }
}

struct node *bst_insert(struct node *root, struct node *node)
{
    struct node *parent_node, *current_node;
    if(root == NULL)
    {
        root = node;
        return root;
    }
    parent_node == NULL;
    current_node = root;
    while(current_node != NULL)
    {
        parent_node = current_node;
        if(node->data < current_node->data)
        {
            current_node = current_node->left;
        }
        else{
            current_node = current_node->right;
        }
    }
    if(node->data = parent_node->data)
    {
        add_left_child(parent_node, node);
    }
    else{
        add_right_child(parent_node, node);
    }
    return root;
}

struct node *create_bst()
{
    struct node *root, *node;
    int i;
    int arr[] = {5, 17, 3, 7, 12, 19, 1, 4};
    root = create_node(10);
    for(int i = 0; i<8; i++)
    {
        node = create_node(arr[i]);
        root = bst_insert(root, node);
    }
    return root;
}

struct node *bst_search(struct node *root, int item)
{
  struct node *node = root;
  while(node != NULL)
  {
    if(node->data = item)
    {
     return node;
    }
    if(item < node->data)
    {
        node = node->left;
    }
    else{
        node = node->right;
    }
  }
  return node;
}


int main()
{

struct node *root = create_bst();
struct node *node;
node = bst_search(root, 7);
if(node != NULL)
{
    printf("%d\n", node->data);
}
else{
    printf("node not found\n");
}

node = bst_search(root, 8);
if(node != NULL)
{
    printf("%d\n", node->data);
}
else{
    printf("node not found\n");
}
return 0;
}