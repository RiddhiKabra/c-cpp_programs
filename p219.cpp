//Singly Circular LinkedList

#include <iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node* next;
}NODE,*PNODE;

class SinglyCLL
{  
  private:
   PNODE first;
   PNODE last;
  int iSize;
public:
	SinglyCLL()
	{
		first=NULL;
		last=NULL;
		iSize=0;
	}  
	void Display()
	{
		PNODE temp=first;
		if((first==NULL)&&(last==NULL))
		{
			return;
		}
		do
		{
			cout<<"|"<<temp->data<<"|-> ";
			temp=temp->next;

		}while(temp !=last ->next);
		cout<<"\n";
	}
    
    int Count()
    {
    	return iSize;
    }

	void InsertFirst(int no)
	{
		//PNODE newN=NULL;
		PNODE newN=new NODE;
		newN -> data=no;
		newN ->next =NULL;

		if((first==NULL) && (last==NULL))
			//if(first==0 && last=0)
		{
			first=newN;
			last=newN;
		}
		else
		{
			newN -> next= first;
			first=newN;
		}
		last-> next =first;
		iSize++;
	}

	void InsertLast(int no)
	{
		PNODE newN=new NODE;
		newN -> data=no;
		newN ->next =NULL;

		if((first==NULL) && (last==NULL))
			//if(first==0 && last=0)
		{
			first=newN;
			last=newN;
		}
		else
		{
		   *last -> next =newN;
		   *last -> newN;
		}
		last-> next =first;
		iSize++;
	}

	void DeleteFirst()
	{
		if((first==NULL)&&(last==NULL))
		{
			return;
		}
		else if(first==last)
		{
			delete first;
			first= NULL;
			last=NULL;
		}
		else
		{
			first=first -> next;
			delete last -> next;
		}
		last-> next =first;
		iSize--;
	}

	void DeleteLast()
	{
		PNODE temp =first;
		if((first==NULL)&&(last==NULL))
		{
			return;
		}
		else if(first==last)
		{
			delete first;
			first= NULL;
			last=NULL;
		}
		else
		{
			while(temp-> next !=NULL)
			{
				temp=temp-> next
			}
			delete last;
			last= temp;
		}
		last-> next =first;
		iSize--;
	}
};

int main()
{
	SinglyCLL obj;
	int iRet=0;

	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);

	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.Display();
    
    iRet=obj.Count();
    cout<<"Number of elements are:"<<iRet<<"\n";
/*
    obj.InsertAtPos()
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are:"<<iRet<<"\n";


    obj.DeleteAtPos();
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are:"<<iRet<<"\n";

    obj.DeleteFirst();
    obj.Display(); 
    iRet=obj.Count();
    cout<<"Number of elements are:"<<iRet<<"\n";

    obj.DeleteLast();
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are:"<<iRet<<"\n";
    */
	
	return 0;
}