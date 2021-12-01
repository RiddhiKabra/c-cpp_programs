#include <stdio.h>
#include<stdlib.h>

typedef struct  node
{
	int data;
	struct node*next;
}NODE,*PNODE,**PPNODE;

void DisplayR(PNODE Head)
{
  while(Head !=NULL)
  {
    printf("|%d|->",Head ->data);
    Head = Head -> next;
    DisplayR(Head);
  }
  printf("NULL\n");
}

int CountR(PNODE Head)
{
    static int iCnt = 0;
    
    if(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
        CountR(Head);
    }
    
    return iCnt;
}

void InsertFirst(PPNODE Head,int no)
{
   PNODE newN= NULL;
   newN=(PNODE)malloc(sizeof(NODE));

   newN -> data=no;
   newN ->next=NULL;
   if(*Head == NULL)
   {
   	*Head=newN;
   }
   else
   {
     newN -> next =*Head;
     *Head=newN;  
   }
}

int main()
{
	PNODE first=NULL;
	int iRet=0;
	InsertFirst(&first,31);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	DisplayR(first);
	iRet=CountR(first);
	printf("No. of elements are:%d\n",iRet);
	return 0;
}