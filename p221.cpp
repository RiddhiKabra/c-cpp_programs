//Singly Circular LinkedList for at position funcn

/*#include <iostream>
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

	void InsertAtPos(int no,int iPos)
	{
		if((iPos<1) || (iPos>(iSize+1)))
		{
			return;
		}
		else if(iPos ==)
		{
			InsertFirst(no);
		}
		else if(iPos ==iSize+1)
		{
			InsertLast(no);
		}
		else
		{
			PNODE newN= new NODE;
			newN-> data=no;
			newN-> next=NULL;
			PNODE temp =first;
			for (int i=1;i<iPos-1;i++)
			{
				temp=temp -> next;
			}
			temp-> next=newN;
			next=newN=newN;
			iSize++
		}
	}

	void  DeleteAtPos(int iPos)
	{
		if((iPos<1) || (iPos>iSize))
		{
			return;
		}
		else if()
		{
			DeleteFirst(no);
		}
		else if()
		{
			DeleteLast(no);
		}
		else
		{
			PNODE temp=first;
			for(int i=1;i<iPos;i++)
			{
				temp=temp->next;
			}
			PNODE targeted =temp->next;
			temp->next=targeted -> next;//temp->next-> next;
			delete targeted;
			iSize--;
		}
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
    	return 0;
}*/
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE;

class SinglyCL
{
private:
    PNODE first;
    PNODE last;
    int size;
    
public:
    SinglyCL()
    {
        first = NULL;
        last = NULL;
        size = 0;
    }
    
    void Display()
    {
        PNODE temp  = first;
        
        if((first == NULL) && (last == NULL))
        {
            return;
        }
        
        do
        {
            cout<<"|"<<temp->data<<"|-> ";
            temp = temp->next;
        }while(temp != last->next);
        
        cout<<"\n";
    }
    
    int Count()
    {
        return size;
    }
    
    void InsertFirst(int no)
    {
        PNODE newn = new NODE;
        
        newn->data = no;
        newn->next = NULL;
        
        if((first == NULL) && (last == NULL))
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }
        
        last->next = first;
        size++;
    }
    
    void InsertLast(int no)
    {
        PNODE newn = new NODE;
        
        newn->data = no;
        newn->next = NULL;
        
        if((first == NULL) && (last == NULL))
        {
            first = newn;
            last = newn;
        }
        else
        {
            last->next = newn;
            last = newn;
        }
        
        last->next = first;
        size++;
    }
    
    void InsertAtPos(int no, int ipos)
    {
        if((ipos < 1) || (ipos > (size+1)))
        {
            return;
        }
        
        if(ipos ==1)
        {
            InsertFirst(no);
        }
        else if(ipos == size+1)
        {
            InsertLast(no);
        }
        else
        {
            PNODE newn = new NODE;
            
            newn->data = no;
            newn->next = NULL;
            
            PNODE temp = first;
            
            for(int i = 1; i < ipos-1; i++)
            {
                temp = temp->next;
            }
            
            newn->next = temp->next;
            temp->next = newn;
            
            size++;
        }
    }
    
    void DeleteFirst()
    {
        if((first == NULL) && (last == NULL))
        {
            return;
        }
        else if(first == last)
        {
            delete first;
            first = NULL;
            last = NULL;
        }
        else
        {
            first = first->next;
            delete last->next;
            last->next = first;
        }
        size--;
    }
    
    void DeleteLast()
    {
        PNODE temp = first;
        
        if((first == NULL) && (last == NULL))
        {
            return;
        }
        else if(first == last)
        {
            delete first;
            first = NULL;
            last = NULL;
        }
        else
        {
            while(temp->next != last)
            {
                temp = temp -> next;
            }
            
            delete last;
            last = temp;
                
            last->next = first;
        }
        size--;
    }
    
    void DeleteAtPos(int ipos)
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
            for(int i = 1; i < ipos-1; i++)
            {
                temp = temp->next;
            }
            
            PNODE targated = temp->next;
            
            temp->next = targated->next;    // temp->next = temp->next->next;
            delete targated;
            
            size--;
        }
        
    }
};

int main()
{
    SinglyCL obj;
    int iret = 0;
    
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    
    obj.InsertAtPos(55,4);
    
    obj.Display();
    iret = obj.Count();
    cout<<"Number of elements are : "<<iret<<"\n";
    
    obj.DeleteAtPos(4);
    
    obj.DeleteFirst();
    obj.DeleteLast();
    
    obj.Display();
    iret = obj.Count();
    cout<<"Number of elements are : "<<iret<<"\n";
    
    return 0;
}
