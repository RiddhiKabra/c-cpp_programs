//DOUBLY LL all 8 functions
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
    PNODE temp= *Head;
	if(*Head !=NULL) //LL  contains atleast 1 node
    {
       *Head = (*Head) -> next;
       free(temp);
       if(*Head != NULL)
       {
          (*Head) -> prev=NULL;
       }
    }
}
/*
void DeleteFirstX(PPNODE Head)
{
    if(*Head ==NULL)//LL  contains 0 node
    {
     return;
    }
    else if((*Head) -> next ==NULL)//LL  contains atleast 1 node
    {
        free(*Head);
        *Head =NULL;
    }
    else //LL  contains more 1 node
    {
        *Head = (*Head) -> next;
        free(*Head -> prev);
        (*Head) -> prev=NULL;
    }
}


*/
void DeleteLast(PPNODE Head)
{
    PNODE temp =*Head;
   if(*Head ==NULL)//LL  contains 0 node
    {
     return;
    }
    else if((*Head) -> next ==NULL)//LL  contains atleast 1 node
    {
        free(*Head);
        *Head =NULL;
    }
    else //LL  contains more 1 node
    {
        while(temp -> next!=NULL)
        {
            temp =temp->next;
        }
        temp = prev->next= NULL;
        free(temp);
    }
}

void InsertAtPos(PPNODE Head,int no,int iPos)
{
  int iSize=Count(*Head);
  int i=0;
  PNODE newN= NULL;
  PNODE temp= *Head;  

  if((iPos<1)||(iPos >iSize+1))//Filter for invalid position
  {
    printf("Invalid position\n");
    return;
  }
  else if(iPos==1)
  {
    InsertFirst(Head,no);
  }
  else if(iPos==iSize+1)
  {
    InsertLast(Head,no);
  }
  else
  {
     newN=(PNODE)malloc(sizeof(NODE));
     newN -> next =NULL;
     newN -> prev =NULL;
     newN -> data =no;
     for(i=1;i<iPos-1;i++)
     {
        temp =temp -> next;
     }
     newN ->next =temp-> next;
     newN ->next->prev=newN;
     temp-> next= newN;
     newN-> prev=temp;
  }
}

void DeleteAtPos(PPNODE Head,int iPos)
{
  int iSize=Count(*Head);
  int i=0;
  if((iPos<1)||(iPos >iSize))//Filter for invalid position
  {
    printf("Invalid position\n");
    return;
  }
  else if(iPos==1)
  {
    DeleteFirst(Head);
  }
  else if(iPos==iSize)
  {
    DeleteLast(Head);
  }
  else
  {
      for(i=1;i<iPos-1;i++)
     {
        temp =temp -> next;
     }
     temp -> next=temp -> next->next;
     free(temp -> next->prev);
     temp -> next;->prev=temp;
  }
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