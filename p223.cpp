//Stack
#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class Stack     // Singly Linear Linked List
{
private:
    PNODE first;
    int iSize;
    
public:
    Stack()
    {
        first = NULL;
        iSize = 0;
    }
    
    void Push(int no)   // InsertFirst()
    {
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        
        if(first == NULL)
        {
            first = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }
        iSize++;
    }

    int Pop()   // DeleteFirst()
    {
        int no = 0;
        PNODE temp = first;
        
        if(iSize == 0)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        
        if(iSize == 1)
        {
            no = first->data;
            delete first;
            first = NULL;
        }
        else
        {
            no = first->data;
            first = first -> next;
            delete temp;
        }
        
        iSize--;
        return no;
    }
    
    void Display()
    {
        PNODE temp = first;
        
        while(temp != NULL)
        {
            cout<<"|"<<temp->data<<"|"<<"\n";
            temp = temp->next;
        }
    }
    
    int Count()
    {
        return iSize;
    }
};

int main()
{
    Stack obj;
    
    obj.Push(11);
    obj.Push(21);
    obj.Push(51);
    obj.Push(101);
    
    cout<<"Elements of stack\n";
    obj.Display();
    
    int iRet = obj.Pop();       // 101
    cout<<"Poped element is : "<<iRet<<"\n";                     // 101
    
    cout<<"Elements of stack\n";
    obj.Display();          // 51       21      11
    iRet = obj.Count();
    
    cout<<"Size of stack is : "<<iRet<<"\n";        // 3
    
    return 0;
}
