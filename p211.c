//singly linear LinkedList using dynamic memory allocation(Menu driven application)
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}NODE,*PNODE,**PPNODE;

/*typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE; */

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

void InsertLast(PPNODE Head,int no)
{
   PNODE newN= NULL;
   PNODE temp =*Head;
   newN=(PNODE)malloc(sizeof(NODE));

   newN -> data=no;
   newN ->next=NULL;
   if(*Head==NULL)
   {
   	*Head=newN;
   }
   else
   {
   	while(temp -> next != NULL)
   	{
   		temp= temp -> next;
   	}
   	temp -> next= newN;
   }
}

void DeleteFirst(PPNODE Head)
{
	PNODE temp =*Head;
    if(*Head !=NULL)
    {
    	*Head= (*Head) -> next;
    	free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
   PNODE temp =*Head;
   if(*Head ==NULL)
   {
   	return;
   }
   else if((*Head)-> next ==NULL)
   {
   	free(*Head);
   	*Head =NULL;
   }
   else
   {
   	while(temp -> next -> next != NULL)
   	{
   		temp =temp -> next;
   	}
   	free(temp -> next);
   	temp -> next= NULL;
   }
}

void InsertAtPos(PPNODE Head,int no,int iPos)
{
  int iSize=0,i=0;
  PNODE newN= NULL;
  PNODE temp= *Head;

  iSize=Count(*Head);
  
  if((iPos<1)||(iPos >iSize+1))//Filter for invalid position
  {
  	printf("Invalid position\n");
  	return;
  }

  if(iPos==1)// First position
  {
  	InsertFirst(Head,no);
  }
  else if(iPos== iSize+1)//Last position
  {
  	InsertLast(Head,no);
  }
  else//In between position
  {
    newN=(PNODE)malloc(sizeof(NODE));
    newN -> data= no;
    newN -> next=NULL;
    for(i=1;i< iPos-1;i++)
    {
    	temp= temp -> next;
    } 
    newN -> next =temp-> next;
    temp -> next = newN;
  }
}

void DeleteAtPos(PPNODE Head,int iPos)
{

  int iSize=0,i=0;
  PNODE temp= *Head;
  PNODE targeted=NULL;

  iSize=Count(*Head);
  
  if((iPos<1)||(iPos >iSize))//Filter for invalid position
  {
  	printf("Invalid position\n");
  	return;
  }

	if(iPos==1)// First position
  {
  	DeleteFirst(Head);
  }
  else if(iPos== iSize)//Last position
  {
  	DeleteLast(Head);
  }
  else //In between position
  {
    for(i=1;i<iPos-1;i++)
    {
    	temp= temp -> next;
    }
    targeted =temp -> next;
    temp -> next = targeted -> next;
    free(targeted);
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
     	InsertAtPos(&first,iValue,Pos);
     	break;

     	case 4:
     	DeleteFirst(&first);
     	break;

     	case 5:
     	DeleteLast(&first);
     	break;

     	case 6:
     	printf("Enter the position\n");
     	scanf("%d",&Pos);
     	DeleteAtPos(&first,Pos);
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