#include<iostream>
using namespace std;

char stack[50];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int seq(char c)
{
    if(c == '(')
        return 0;
    if(c == '+' || c == '-')
        return 1;
    if(c == '*' || c == '/')
        return 2;
    return 0;
}

int main()
{
    char eqn[50];
    char *e, c;
    cout<<"Infix Equation : ";
    cin>>eqn;
    cout<<"Postfix Equation : ";
    e = eqn;

    while(*e != '\0')
    {
        if(isalnum(*e))
            cout<<*e;
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((c = pop()) != '(')
                cout<<c;
        }
        else
        {
            while(seq(stack[top]) >= seq(*e))
            cout<<pop();
            push(*e);
        }
        e++;
    }

    while(top != -1)
    {
         cout<<pop();
    }return 0;
}
