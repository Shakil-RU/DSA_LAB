
#include<stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

int isempty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull()
{
    if(top == MAXSIZE)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



int pop()
{
    int data;
    if(!isempty())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else{
        printf("Could not retrieve data, Stack is empty.\n");
    }
}


void push(int data)
{
    if(!isfull())
    {
        top = top + 1;
        stack[top] = data;
     
    }
    else
    {
        printf("could not insert data ! Stack is full.\n");
    }

}


void pop_stack()
{
  
    if(!isempty())
    {
        
        top = top - 1;
        
    }
    else{
        printf("Could not retrieve data, Stack is empty.\n");
    }
}


int main()
{
    //push item on to the stack.
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    pop_stack();


 while(!isempty())
 {
    int  data = pop();
    printf("%d\n", data);

 }
 

    return 0;
}

