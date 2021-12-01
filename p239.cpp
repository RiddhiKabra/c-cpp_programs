//Binary Search Tree 
#include <iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node*lchild;
	struct node*rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head,int No)
{
	PNODE newN=new NODE;
	newN->data=No;
	newN->lchild=NULL;
	newN->rchild=NULL;

	if(*Head==NULL)
	{
		*Head=newN;
	}
	else
	{
		PNODE temp=*Head;
		while(1) //Unconditional loop
		//while(true)
		{
			if(temp->data==No)
			{
				cout<<"Duplicate node\n";
				delete newN;
				break;
			}

			else if(temp->data>No) //If data is small than No
			//else if(No<(temp->data))
			{
				if((temp->lchild)==NULL)
				{
					temp->lchild=newN;
					break;
				}
				temp=temp->lchild;
			}

			else if((temp->data)<No)//If data is large than No
			//else if(No>(temp->data))
			{
				if(temp->rchild==NULL)
				{
					temp->rchild=newN;
					break;
				}
				temp=temp->rchild;
			}
		}
	}
}

bool Search(PNODE Head , int no)
{
    bool flag = false;
    if(Head == NULL)    // If tree is empty
    {
        return false;
    }
    else    // tree contains atleast one node
    {
        while(Head != NULL)
        {
            if(Head -> data == no)  // Node finished in BST
            {
                flag = true;
                break;
            }
            else if(no > (Head -> data))
            {
                Head = Head->rchild;
            }
            else if(no < (Head -> data))
            {
                Head = Head -> lchild;
            }
        }
        return flag;
    }
}

int Count(PNODE Head)
{
	static int iCnt=0;
	if(Head!=NULL)
	{
		iCnt++;
		Count(Head->lchild);
		Count(Head->rchild);
	}
	return iCnt;
}

int main()
{
	int iNo=0,iRet=0;
	bool bRet=false;
	PNODE first=NULL;
	//PNODE root=NULL;
	Insert(&first,51);
	Insert(&first,21);
	Insert(&first,101);
	cout<<"Enter number to search:\n";
	cin>>iNo;
	bRet=Search(first,iNo);
	if(bRet==true)
	{
		cout<<"Data is there in BST\n";
	}
	else
	{
		cout<<"Data is not there in BST\n";
	}
	iRet=Count(first);
	cout<<"Elements of nodes are:"<<iRet<<"\n";
	return 0;
}