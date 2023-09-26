#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
 {
  int data;
  struct node *next;
 };
 struct node *first,*second,*third,*temp,*temp1,*current,*start;
 void firstt()
   {
     int n,i,item;
     struct node *temp,*newnode;
     printf("\n Number of nodes:");
     scanf("%d",&n);
     start=(struct node*)malloc(sizeof(struct node));
     if(start==NULL)
      {
	printf("\n Overflow");
	exit(0);
      }
      printf("\n Enter first node:");
      scanf("%d",&item);
      start->data=item;
      start->next=NULL;
      temp=start;
      for(i=2;i<=n;i++)
       {
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	 {
	   printf("\n Unable to allocate");
	   exit(0);
	 }
	printf("\n next node %d:",i);
	scanf("%d",&item);
	newnode->data=item;
	newnode->next=NULL;
	temp->next=newnode;
	temp=temp->next;
       }
   }
   void secondd()
   {
     int n,i,item;
     struct node *temp,*newnode;
     printf("\n Number of nodes:");
     scanf("%d",&n);
     start=(struct node*)malloc(sizeof(struct node));
     if(start==NULL)
      {
	printf("\n Overflow");
	exit(0);
      }
      printf("\n Enter first node:");
      scanf("%d",&item);
      start->data=item;
      start->next=NULL;
      temp=start;
      for(i=2;i<=n;i++)
       {
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	 {
	   printf("\n Unable to allocate");
	   exit(0);
	 }
	printf("\n next node %d:",i);
	scanf("%d",&item);
	newnode->data=item;
	newnode->next=NULL;
	temp->next=newnode;
	temp=temp->next;
       }
   }

  void traverse()
   {
    struct node* temp;


    if (start == NULL)
	printf("\nList is empty\n");


    else
     {
	temp = start;
	while (temp != NULL)
	 {
	    printf("Data = %d\n", temp->data);
	    temp = temp->next;
	 }
     }
    }
 void merging()
  {
   while(first!=NULL)
    {
     temp=(struct node*)malloc(sizeof(struct node*));
     temp->data=first->data;
     first=first->next;
     if(third==NULL)
      {
       third=temp;
      }
      else
       {
	current->next=temp;
	current=temp;
       }
     }
    while(second!=NULL)
     {
      temp1=(struct node*)malloc(sizeof(struct node*));
      temp1->data=second->data;
      second=second->next;
      if(third==NULL)
       third=temp;
      else
      {
       current->next=temp;
      }
     current=temp;
     }
     current->next==NULL;
     traverse();
 }
 void main()
 {
    int choice;
    clrscr();
    while (1)
    {

	printf("\n\t1  First list\n");
	printf("\t2  second list\n");
	printf("\t3  To see list\n");
	printf("\t4  merge\n");
	printf("\t5 To exit\n");
	printf("\nEnter Choice :\n");
	scanf("%d", &choice);

	switch (choice)
	 {
	case 1:
	    firstt();
	    break;
	case 2:
	    secondd();
	    break;
	case 3:
	    traverse();
	    break;
	case 4:
	    merging();
	    break;
	case 5:
	    exit(0);
	    break;
	default:
	    printf("Incorrect Choice\n");
	}
    }

}



