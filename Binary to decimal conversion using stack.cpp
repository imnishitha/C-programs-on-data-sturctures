//Binary to decimal

#include<stdio.h>
#include<conio.h>
#include<math.h>
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
int n,rem,bin,c=-1,sum=0;
node *temp;
printf("Enter the binary number");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
if(rem!=0||rem!=1)
{
printf("Not a binary number");
break;
}
push(rem);
n=n/10;
c++;
}
temp=top;
while(temp!=NULL)
{
pop(&bin);
sum=sum+(bin*(pow(2,c)));
temp=temp->next;
c--;
}
printf("Decimal %d",sum);
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
if(top==NULL)
printf("Stack is empty");
else
{
node *temp=top;
top=top->next;
*e=temp->data;
free(temp);
}
}
