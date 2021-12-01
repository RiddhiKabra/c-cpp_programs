//Binary search tree
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

			else if(temp->data>No) // tree contains atleast one node
			//else if(No<(temp->data))
			{
				if((temp->lchild)==NULL)
				{
					temp->lchild=newN;
					break;
				}
				temp=temp->lchild;
			}

			else if((temp->data)<No)//Node  finished in BST
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

bool Search(PNODE Head,int No)
{
	bool flag=false;
	if(Head==NULL) //Tree is empty
	{
		return false;
	}
	else //Tree has atleast 1 nodes
	{
		while(Head!=NULL)
		{
			if(Head->data==No)//Node found
			{
				flag=true;
				break;
			}
			else if(No>(Head->data))//Data is larger than No
			{
				Head=Head->rchild;
			}
			else if(No>(Head->data))//Data is smaller than No
			{
				Head=Head->lchild;
			}
	    }
	    return flag;
	}
}

int main()
{
	int iNo=0;
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
	return 0;
}