/*program to create student database and reverse the node*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct link
{
char name[20];
char usn[20];
char mobile[20];
char address[20];
char cgpa[10];
struct link *next;
};

typedef struct link node;
void addfirst();
void delfirst();
void display();
void reverse();
node *head=NULL;

void main()
{
int ch;
clrscr();
printf("\nSINGLY LINKED LIST OPERATIONS\n");
printf("\n1.Addfirst\n2.DeleteFirst\n3.Display\n4.Exit\n5.reverse\n");
do
{
printf("\nEnter your option:\t");
scanf("%d",&ch);
switch(ch)
{
case 1:
addfirst();
break;
case 2:
if(head==NULL)
printf("\nLIST IS EMPTY.....\n");
else
delfirst();
break;
case 3:
if(head==NULL)
printf("\nLIST IS EMPTY.....\n");
else
display();
break;
case 4:
exit(0);
break;
case 5:reverse();
break;
default:
printf("Invalid Choice\n");
}
}
while(ch<=5);
getch();
}

void addfirst()
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nEnter the data\t");

printf("\nenter the name of the student\n");
scanf("%s",&temp->name);
printf("enter the usn\n");
scanf("%s",&temp->usn);
printf("enter the mobile no.\n");
scanf("%s",&temp->mobile);
printf("enter the address\n");
scanf("%s",&temp->address);
printf("enter the cgpa\n");
scanf("%s",&temp->cgpa);

temp->next=head;
head=temp;
}

void delfirst()
{
node *temp=head;
head=head->next;
printf("\nDeleted item is %s,%s,%s,%s,%s\n",temp->name,temp->usn,temp->mobile,temp->address,temp->cgpa);
free(temp);
}

void display()
{
node *cur=head;
printf("\nLINKED LIST : ");
while(cur!=NULL)
{
printf("\tname-%s,usn-%s,mobile-%s,address-%s,cgpa-%s",cur->name,cur->usn,cur->mobile,cur->address,cur->cgpa);
cur=cur->next;
}
}
void reverse()
{
node *cur,*temp;
cur=NULL;
while(head!=NULL)
{
temp=head->next;
head->next=cur;
cur=head;
head=temp;
}
head=cur;
}

