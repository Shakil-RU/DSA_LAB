#include<iostream>
#include<string>
#define max 20;
using namespace std;
char stack[20]
int top = -1;
bool isEmpty()
{
    return top == -1;
}

bool isFull()
{
    return top = max - 1;
}

void push(char oper)
{
    if(isFull)
    {
        cout<<" stack full!"<<endl;
    }
    else{
        top++;
        stack[top] = open;
    }
}

char pop()
{
    if(isEmpty)
    {
        cout<<"stack empty!"<<endl;
    }
    else{
        char value = stack[top];
        top--;
        return (value);
    }
    return 0;
}

int priority (char alpha)
{ 
    if(alpha == '+' || alpha =='-') 
        return 1; 
    if(alpha == '*' || alpha =='/') 
        return 2; 
    if(alpha == '^') 
        return 3; 

    return 0; 
} 

string convert(string  )
