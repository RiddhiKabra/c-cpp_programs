//DOUBLY LL
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
	struct node *prev;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head)
{
   while(Head !=NULL)
  {
    printf("|%d|->",Head ->data);
    Head = Head -> next;
  }
  printf("NULL\n");
}

int Count(PNODE Head)
{
   int iCnt=0;
	while(Head != NULL)
	{
      iCnt++;
      Head=Head -> next;
	}
  return iCnt;
}

void InsertFirst(PPNODE Head,int no)
{
  PNODE newN= NULL;
   newN=(PNODE)malloc(sizeof(NODE));

   newN -> data=no;
   newN ->next=NULL;
   newN -> prev=NULL; 
   if(*Head == NULL)
   {
   	*Head=newN;
   }
   else
   {
   	 newN -> next =*Head;
   	 (*Head)-> prev =newN;
   	 *Head=newN;
   }
}

void InsertLast(PPNODE Head,int no)
{
	PNODE newN= NULL;
	PNODE temp=*Head;
   newN=(PNODE)malloc(sizeof(NODE));

   newN -> data=no;
   newN ->next=NULL;
   newN -> prev=NULL; 
   if(*Head == NULL)
   {
   	*Head=newN;
   }
   else
   {
   	  while(temp -> next !=NULL)
   	  {
   	  	temp = temp->next;
   	  }
   	  temp -> next= newN;
   	  newN->prev=temp;
   }
}

void DeleteFirst(PPNODE Head)
{
	
}

void DeleteLast(PPNODE Head)
{
	
}

int main()
{
    PNODE first =NULL;
    int iCnt=0;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,101);
    Display(first);

    iCnt= Count(first);
    printf("Number of elements are:%d\n",iCnt);
	return 0;
}