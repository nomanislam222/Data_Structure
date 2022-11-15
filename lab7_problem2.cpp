#include<iostream>
using namespace std;

int stack[50];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char eqn[50];
    char *e;
    int operand1,operand2,operand3,num;
    cout<<"Postfix Equation : ";
    cin>>eqn;
    e = eqn;
    while(*e != '\0')
    {
        if(isdigit(*e))
        {
            num = *e - 48;
            push(num);
        }
        else
        {
            operand1 = pop();
            operand2 = pop();
            switch(*e)
            {
            case '+':
            {
                operand3 = operand1 + operand2;
                break;
            }
            case '-':
            {
                operand3 = operand2 - operand1;
                break;
            }
            case '*':
            {
                operand3 = operand1 * operand2;
                break;
            }
            case '/':
            {
                operand3 = operand2 / operand1;
                break;
            }
            }
            push(operand3);
        }
        e++;
    }
    cout<<"Result of the Equation: "<<pop();
    return 0;
}

