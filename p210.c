//singly linear LinkedList using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newN =NULL;

   //Step 1:Allocate the memory
   newN=(PNODE)malloc(sizeof(NODE));
   //Step 2:Intialise the node
   newN ->data=no;
   newN ->next=NULL;
   //Step 3:Insert the node
   if(*Head==NULL)//LinkedList is empty
   {
     *Head=newN;
   }
   else//LinkedList contains one node
   {
      newN->next= *Head;
      *Head=newN;
   }
}

void InsertLast(PPNODE Head,int no)
{
    PNODE newN =NULL;
    PNODE temp= *Head;
   //Step 1:Allocate the memory
   newN=(PNODE)malloc(sizeof(NODE));
   //Step 2:Intialise the node
   newN -> data=no;
   newN -> next=NULL;
   //Step 3:Insert the node
   if(*Head==NULL)//LinkedList is empty
   {
     *Head=newN;
   }
   else//LinkedList contains one node
   {
      while(temp->next !=NULL)
      {
      	temp= temp->next;
      }
      temp->next =newN;
   } 
}

void DeleteFirst(PPNODE Head)
{
	PNODE temp=*Head;
   if(*Head !=NULL)//LinkedList contains atleast one node
   {
   	*Head=(*Head) -> next;
   	free(temp);
   }
}

void DeleteLast(PPNODE Head)
{
	PNODE temp=*Head;
	if(*Head==NULL)//LinkedList is empty
   {
   	return;
   }
   else if((*Head)->next==NULL)//LinkedList contains atleast one node
   {
   	free(*Head);
   	*Head=NULL;
   }
   else //LL contains more than one node
   {
     while(temp ->next ->next !=NULL)
     {
     	temp = temp -> next;
     }
     free(temp->next);
     temp ->next =NULL;
   }
}

void Display(PNODE Head)
{
   while(Head != NULL)
   {
      printf("%d\t",Head -> data);
      Head= Head -> next;
   }
}

int Count(PNODE Head)
{
	int iCnt=0;
   while(Head != NULL)
   {
   	iCnt++;
   Head= Head -> next;
   }
  return iCnt;
}


int main()
{
	PNODE first = NULL;
	int iRet=0;
	InsertFirst(&first,101);
    InsertFirst(&first,51); //InsertFirst(50,51);
    InsertFirst(&first,21); //InsertFirst(50,21);
    InsertFirst(&first,11); //InsertFirst(50,11);
    // INSERTION ORDER 11 21 51 101
    InsertLast(&first,111);
    // INSERTION ORDER 11 21 51 101 111
    Display(first); //Display(100);
    iRet=Count(first); //Count(100);
    printf("\nNumber of elements are: %d\n",iRet);
    
    DeleteFirst(&first);
    Display(first); //Display(100);
	iRet=Count(first); //Count(100);
    printf("\nNumber of elements are: %d\n",iRet);

    DeleteLast(&first);
    Display(first); //Display(100);
	iRet=Count(first); //Count(100);
    printf("\nNumber of elements are: %d\n",iRet);
	return 0;
}


/* void   InsertFirst(PPNODE Head, int no);           |  void  DeleteFirst(PPNODE Head);           |   void  Display(PNODE Head);
   void   InserLast(PPNODE Head, int no);             |  void  DeleteLast(PPNODE Head);            |   int  Count(PNODE Head);
   void   InsertAtPos(PPNODE Head, int no,int Pos);   |  void   DeleteAtPos(PPNODE Head,int  Pos); |                            */