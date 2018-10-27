\\Decimal to hexadecimal

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct link
{
int data;
struct link *next;
};
typedef struct link node;
void push(int);
void pop(int *);
node *top=NULL;

void main()
{
int n,decimal,hex;
int rem;
node *temp;
printf("enter the decimal number:");
scanf("%d",&n);
decimal=n;
while(n!=0)
{
rem = n%16;
if (rem<10)
rem=48+rem;
else
rem=55+rem;
push(rem);
n=n/16;
}
printf("hex equivalent of %d is: ",decimal);
temp=top;
while(temp!=NULL)
{
pop(&hex);
printf("%c",hex);
temp = temp->next;
}
getch();
}
void push(int d)
{
node *temp;
temp=(node *)malloc(sizeof(node));
temp->data=d;
temp->next=top;
top=temp;
}
void pop(int *e)
{
if(top!=NULL)
{node *temp=top;
top=top->next;
*e = temp->data ;
}
else
{
printf("stack is empty\n");
}
}
