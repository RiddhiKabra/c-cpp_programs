//DOUBLY LL Menudriven application
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

void InsertAtPos(PPNODE Head,int no,int Pos)
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

void DeleteAtPos(PPNODE Head,int Pos)
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
	int iChoice=1, iValue=0,iRet=0,Pos=0;
	while(iChoice !=0)
	{
		printf("\n________________________________________________________________________\n");
     	printf("Enter the desired operation that you want to perform on Linkedlist\n");
	    printf("1:Insert the node at first position\n");\
	    printf("2:Insert the node at last position\n");
	    printf("3:Insert the node at desired position\n");
	    printf("4:Delete the node at first position\n");
	    printf("5:Delete the node at last position\n");
	    printf("6:Delete the node at desired position\n");
	    printf("7:Display the content of Linkedlist\n");
	    printf("8:Count the number of nodes from Linkedlist\n");
	    printf("0:Terminate the application\n");
	    printf("\n________________________________________________________________________\n");
        scanf("%d",&iChoice);

     switch(iChoice)
     {
     	case 1:
     	printf("Enter the data to insert\n");
     	scanf("%d",&iValue);
     	InsertFirst(&first,iValue);
     	break;

     	case 2:
     	printf("Enter the data to insert\n");
     	scanf("%d",&iValue);
     	InsertLast(&first,iValue);
     	break;

     	case 3:
     	printf("Enter the data to insert\n");
     	scanf("%d",&iValue);
     	printf("Enter the position\n");
     	scanf("%d",&Pos);
     	//InsertAtPos(&first,iValue,Pos);
     	break;

     	case 4:
     	//DeleteFirst(&first);
     	break;

     	case 5:
     	//DeleteLast(&first);
     	break;

     	case 6:
     	printf("Enter the position\n");
     	scanf("%d",&Pos);
     	//DeleteAtPos(&first,Pos);
     	break;
        
        case 7:
        printf("Elements of Linkedlist are:\n");
        Display(first);
        break;

        case 8:
        iRet= Count(first);
        printf("Number of elements are:");
        printf("%d",iRet);
        break;

        case 0:
        printf("Application terminated\n");
        break;

        default:
        printf("Please enter valid number\n");
        break;
      }
	}

	return 0;
}