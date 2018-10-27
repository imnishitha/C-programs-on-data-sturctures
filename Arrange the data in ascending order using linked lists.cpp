//To arrange the data in ascending order
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct link
{
int data;
struct link *next;
};
typedef struct link node;
node *head=NULL;
void assend()
{
node *temp,*cur;

temp=(node*)malloc(sizeof(node));
printf("Enter the value");
scanf("%d",&temp->data);
temp->next=NULL;
if(head==NULL)
head=temp;
else
{
if(temp->data<head->data)
{
temp->next=head;
head=temp;
}
else
{cur=head;
if(head->next==NULL)
{
head->next=temp;
}
else
{
while(temp->data>cur->next->data)
{
cur=cur->next;
if(cur->next==NULL)
{
break;
}
}
if(cur->next!=NULL)
{
temp->next=cur->next;
cur->next=temp;
}
else
{
cur->next=temp;
}
}
}
}
}
void display()
{
node *a=head;
printf("List");
while(a!=NULL)
{
printf("%d\n",a->data);
a=a->next;
}
}
void main()
{
int c;
printf("1.Add\n2.Display");
do
{
printf("Enter the choice");
scanf("%d",&c);
switch(c)
{
case 1:
assend();
break;
case 2:
if(head==NULL)
printf("Empty");
else
display();
break;
default:
printf("Invalid");
}
}while(c<=2);
getch();
}
