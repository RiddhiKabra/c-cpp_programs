/*//Doubly Circular LinkedList
#include <iostream>
using namespace std;

typedef struct  node
{
	int data;
	struct  node *next;
	struct  node *prev; 
	
}NODE,*PNODE;

class DoublyCLL
{
private:
	PNODE first;
	PNODE last;
	int iSize;

public:
	DoublyCLL()
	{
		first=NULL;
		last=NULL;
		iSize=0;
	}
	void Display();
	int Count();
	void InsertFirst(int no);
	void InsertLast(int no);
	void InsertAtPos(int no,int iPos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int iPos);
};
// Return_Value Class_Nmae:: Function name(Parameters)  {How to use scope resolution}

void DoublyCLL :: InsertFirst(int no)
{
	PNODE newN = new NODE;
	newN -> data = no;
	newN -> next =NULL;
    newN->prev =NULL;

	if((first==NULL) && (last ==NULL))
	{
		first =newN;
		last = newN;
	}
	else
	{
		newN -> next =first;
		first -> prev = newN;
		first =newN;
	}



*/


















	#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE;

class DoublyCL
{
private:
    PNODE first;
    PNODE last;
    int size;
    
public:
    DoublyCL()
    {
        first = NULL;
        last = NULL;
        size = 0;
    }
    
    void Display();
    int Count();
    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no , int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
};

// Return_Value Class_Name :: Fnuction_Name(Parameters)

void DoublyCL :: InsertFirst(int no)
{
    PNODE newn = new NODE;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first -> prev = newn;
        first = newn;
    }
    
    last->next = first;
    first->prev = last;
    size++;
}

void DoublyCL :: InsertLast(int no)
{
    PNODE newn = new NODE;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        last -> next = newn;
        newn->prev = last;
        last = newn;
    }
    
    last->next = first;
    first->prev = last;
    size++;
}

void DoublyCL :: Display()
{
    PNODE temp = first;
    
    for(int i = 1; i <= size; i++)
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp->next;
    }
    cout<<"\n";
}

int DoublyCL :: Count()
{
    return size;
}

void DoublyCL :: DeleteFirst()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first  = NULL;
        last = NULL;
    }
    else
    {
        first = first -> next;
        delete last->next;
        first->prev = last;
        last->next = first;
    }
    size--;
}

void DoublyCL :: DeleteLast()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first  = NULL;
        last = NULL;
    }
    else
    {
        last = last -> prev;
        delete last->next;
        first->prev = last;
        last->next = first;
    }
    size--;
}

void DoublyCL :: InsertAtPos(int no, int ipos)
{
    if((ipos < 1) || (ipos > size+1))
    {
        return;
    }
    
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == size +1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn= new NODE;
        
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        
        PNODE temp = first;
        
        for(int i = 1; i < ipos -1; i++)
        {
            temp = temp -> next;
        }
        
        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        size ++;
    }
}

void DoublyCL :: DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > size))
    {
        return;
    }
    if(ipos ==1)
    {
        DeleteFirst();
    }
    else if(ipos == size)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = first;
        
        for(int i = 1; i < ipos -1 ; i ++)
        {
            temp = temp -> next;
        }
       
        temp -> next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        
        size--;
    }
}

int main()
{
    DoublyCL obj;
    
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(51);
    obj.InsertLast(101);
    
    obj.InsertAtPos(75,3);
    obj.Display();
    
    int iret = obj.Count();
    cout<<"Number of elements are : "<< iret<<"\n";
    
    obj.DeleteAtPos(3);
    obj.DeleteFirst();
    obj.DeleteLast();
    
    obj.Display();
    return 0;
}


	last -> next=first;
	first->prev=last;
	iSize++;
}

void DoublyCLL ::InsertLast(int no)
{

	PNODE newN = new NODE;
	newN -> data = no;
	newN -> next =NULL;
    newN->prev =NULL;

	if((first==NULL) && (last ==NULL))
	{
		first =newN;
		last = newN;
	}
	else
	{
		last -> next =newN;
		newN -> prev =last;
		last = newN;
	}

	last -> next=first;
	first->prev=last;
	iSize++;
}

void DoublyCLL ::DeleteFirst()
{
	if((first==NULL) && (last ==NULL))
	{
		return;
	}
	else if(first ==last)
	{
		delete first;
		first=NULL;
		last =NULL;
	}
	else
	{
		first=first->next;
		delete last->next;
		last -> next=first;
	    first->prev=last;
	}
	iSize--;
}

void DoublyCLL ::DeleteLast()
{
	if((first==NULL) && (last ==NULL))
	{
		return;
	}
	else if(first==last)
	{
		delete last;
		first=NULL;
		last =NULL;
	}
	else
	{
		last = last ->prev;
		delete last-> next;
		last -> next=first;
	    first->prev=last;
	}
	
	iSize--;
}

void DoublyCLL :: InsertAtPos(int no,int iPos)
{
	if((iPos<1)||(iPos>iSize+1))
	{
		return;
	}
	if(iPos==1)
	{
		InsertFirst(no);
	}
	else if(iPos==iSize+1)
	{
		InsertLast(no);
	}
	else
	{
		PNODE newN = new NODE;
		newN ->data =no;
		newN->next=NULL;
		newN->prev=NULL;

		PNODE temp=first;

		for(int i=1;i<iPos-1;i++)
		{
			temp=temp-> next;
		}
		newN->next=temp->next;
		newN->next->prev=newN;
		temp-> next=newN;
		newN->next=temp;
		iSize++;
	}
}

void DoublyCLL ::DeleteAtPos(int iPos)
{
	if((iPos<1)||(iPos>iSize))
	{
		return;
	}
	if(iPos==1)
	{
	    DeleteFirst();
	}
	else if(iPos==iSize)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp=first;

		for(int i=1;i<iPos-1;i++)
		{
			temp=temp-> next;
		}
		temp->next=temp->next->next;
		delete temp->next->prev;
		temp->next->prev=temp;
		iSize--;
	}
}

void DoublyCLL ::Display()
{
	PNODE temp= first;
	if((first==NULL) && (last ==NULL))
	{
		return;
	}

	for(int i=1;i<=iSize;i++)
	{
		cout<<"|"<<temp->data<<"|->";
		temp = temp-> next;
	}
	cout<<"\n";
}

int DoublyCLL ::Count()
{
	return iSize;
}

int main()
{
	DoublyCLL obj;
	int iRet = 0;
    
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(51);
    obj.InsertLast(101);
    
    obj.InsertAtPos(75,3);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";
    
    obj.DeleteAtPos(3);  
    obj.DeleteFirst();
    obj.DeleteLast();
    
    obj.Display();
   
	return 0;
}