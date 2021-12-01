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

int CountLeaf(PNODE Head)
{
	static int iCnt=0;
	if(Head!=NULL)
	{
		if((Head->lchild==NULL) &&(Head->rchild==NULL))
		{
			iCnt++;
		}
		CountLeaf(Head->lchild);
		CountLeaf(Head->rchild);
	}
	return iCnt;
}

int CountParent(PNODE Head)
{
	static int iCnt=0;
	if(Head!=NULL)
	{
		if((Head->lchild!=NULL) || (Head->rchild!=NULL))
		{
			iCnt++;
		}
		CountParent(Head->lchild);
		CountParent(Head->rchild);
	}
	return iCnt;
}

int CountChild2(PNODE Head)
{
	static int iCnt=0;
	if(Head!=NULL)
	{
		if((Head->lchild!=NULL) && (Head->rchild!=NULL))
		{
			iCnt++;
		}
		CountChild2(Head->lchild);
		CountChild2(Head->rchild);
	}
	return iCnt;
}

void Inorder(PNODE Head)    // LDR
{
    if(Head != NULL)
    {
        Inorder(Head ->lchild); // L
        cout<<Head->data<<"\n"; // D
        Inorder(Head -> rchild);    // R
    }
}

void Postorder(PNODE Head)    // LRD
{
    if(Head != NULL)
    {
        Postorder(Head ->lchild); // L
        Postorder(Head -> rchild);    // R
        cout<<Head->data<<"\n"; // D
    }
}

void Preorder(PNODE Head)    // LRD
{
    if(Head != NULL)
    {
        cout<<Head->data<<"\n"; // D
        Preorder(Head ->lchild); // L
        Preorder(Head -> rchild);    // R
    }
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
	cout<<"Inorder\n";
    Inorder(first);
    cout<<"Postorder\n";
    Postorder(first);    
    cout<<"Preorder\n";
    Preorder(first);
	iRet=Count(first);
	cout<<"Elements of nodes are:"<<iRet<<"\n";
	iRet=CountLeaf(first);
	cout<<"Number of leaf nodes are:"<<iRet<<"\n";
	iRet=CountParent(first);
	cout<<"Number of parent nodes are:"<<iRet<<"\n";
    iRet=CountChild2(first);
	cout<<"Number of nodes having 2 child nodes:"<<iRet<<"\n";
	return 0;
	
}