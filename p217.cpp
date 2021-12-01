//Singly Circular LL
#include <iostream>
using namespace std;

typedef struct  node
{
  int data;
  struct node*next;	
}NODE,*PNODE,**PPNODE;

class SinglyLL
{
private:
	PNODE first;
  int iSize;
public:
	SinglyLL()
	{
		first=NULL;
		iSize=0;
	}
	void InsertFirst(int no)
	{
      PNODE newN= new NODE; //newN =(PNODE)MALLOC(sizeof(NODE))
      newN -> data= no;
      newN -> next=NULL;
      if(first==NULL)
      {
      	first =newN;
      }
      else
      {
      	newN->next=first;
      	first=newN;
      }
      iSize++;
	}

	void InsertLast(int no)
	{
      PNODE newN= new NODE;
      newN -> data= no;
      newN -> next=NULL;
      if(first==NULL)
      {
      	first =newN;
      }
      else
      {
         PNODE temp =first;
         while(temp-> next !=NULL)
         {
         	temp= temp-> next;
         }
         temp-> next =newN;
      }
      iSize++;
	}
	
	void DeleteFirst()
	{
       PNODE temp =first;
       if(first !=NULL)
       {
       	first =first-> next;
       	delete temp;
       	iSize--;
       }
	}
	
	void DeleteLast()
	{
	  PNODE temp =first;
	  if(first==NULL)
	  {
	  	return;
	  }
	  if(first-> next==NULL)
	  {
	  	delete first;
	  	first =NULL;
	  	iSize--;
	  }
	  else
	  {
	  	while(temp->next-> next !=NULL)
	  	{
	  		temp=temp-> next;
	  	}
	  	delete temp -> next;
	  	temp -> next=NULL;
	  	iSize--;
	  }
	}
	
	void InsertAtPos(int no,int iPos)
	{
//HW
	}

	void DeleteaAtPos(int iPos)
	{
	  //HW	
	}
	
	void Display()
	{
      PNODE temp= first;
      while(temp!=NULL)
      {
      	cout<<temp->data<<"\t";
      	temp = temp-> next;
      }
      cout<<"\n";
	}
	
	int Count()
	{
      return iSize;
	}
};


int main()
{
	SinglyLL obj;
	int iRet=0;

	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);

	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.Display();
    
    iRet=obj.Count();
    cout<<"Number of elements are:"<<iRet<<"\n";
    
    return 0;
}