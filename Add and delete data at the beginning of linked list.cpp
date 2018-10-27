/*program to add and delete data at the beginning of the circularly linked list*/

#include<stdio.h>
#include<stdlib.h>
struct link
{
int data;
struct link *next;
};
typedef struct link node;
void addfirst();
void delfirst();
void display();
node *head=NULL;
node *tail=NULL;
void main()
{
int ch;
printf("\ncircularly linked list operations\n");
printf("\n1 addfirst,2 delete first,3 display\n,4 exit\n");
do
{
printf("\nenter your options\n");
scanf("%d",&ch);
switch(ch)
{
case 1:addfirst();
      break;
case 2:if(head==NULL)
printf("\nlist is empty\n");
else
delfirst();
      break;
case 3:if(head==NULL)
printf("\nlist is empty\n");
else
      display();
      break;
case 4:exit(0);
       break;
default:printf("invalid choice\n");
}}
while(ch<=4);
}
void addfirst()
{
node *temp;
node *cur;
temp=(node *)malloc(sizeof(node));
printf("enter the data\n");
scanf("%d",&temp->data);
if(head==NULL)
{
temp->next=temp;
head=temp;
tail=temp;
}
else
{
temp->next=head;
head=temp;
tail->next=head;
}
}
void delfirst()
{
node *temp=head;
temp=head;
head=head->next;
tail->next=head;
printf("deleted item is %d",temp->data);
free(temp);
}
void display()
{
node *cur=head;
printf("\n circular linked list:");
printf("\t%d\n",cur->data);
while(cur->next!=head)
{

cur=cur->next;
printf("\t%d",cur->data);
}
}
