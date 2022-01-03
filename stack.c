#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
int peek();
void display();
int main()
{top=-1;
printf("\n Enter the size of STACK[MAX=100]:");
scanf("%d",&n);
printf("\n\t STACK OPERATIONS USING ARRAY");

printf("\n\t 1.Push\n\t 2.Pop\n\t 3.Peek\n\t 4.Display\n\t 5.Exit\n\t");
do
{
printf("\n Enter the choice:");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	{	push();
		break;
	}
	
	case 2:
	{
		pop();
		break;
	}

	case 3:
	{
		peek();
		break;
	}

	case 4:
	{
		display();
		break;
	}
	case 5:
	{
		printf("\n\t exit");
		break;
	}

	default:
	{
		printf("\n\t Please enter a valid choice(1/2/3/4/5)");
	}
}
}
while(choice!=5);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("\n\tSTACK is overflow");
}
else
{
printf("Enter a value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("\n\t Stack is underflow");
}
else
{
printf("\n\t The popped elements is %d",stack[top]);
top--;
}
}
int peek()
{
if(top==-1)
{
printf("\n\t Stack is underflow");
return 0;
}
else
{
printf("top of stack:%d",stack[top]);
}
}
void display()
{
if(top>=0)
{
printf("\n The elements in STACK \n");
for(i=top; i>=0;i--)
	printf("\n%d",stack[i]);
printf("\n Press Next Choice");
}
else
{
printf("\n The Stack is empty");
}
}
