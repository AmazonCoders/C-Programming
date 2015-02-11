#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
	int data;
	struct node *left,*right;

}*root,*temp,*p;

void create(struct node *,struct node *);
void dfs(struct node *);


int main()
{
	int num , ch;
	clrscr();
	do{
		printf("\n1.Insert\n2.DFS");
		scanf("%d",&ch);
		swith(ch)
		{
			case 1:
				scanf("%d",&num);
				p=(struct node*)malloc(sizeof(struct node));
				p->data=num;
				p->left=p->right=NULL;
				insert(p,root);
	
			case 2:

				dfs(root);
		}
	}while(n<=2);
	getch();
}

void insert(struct node *p,struct node *t1)
{
	
	if(root==NULL)
	root=p;
	else
	{
		temp=t1;
		if(p->data<temp->data)
		{
			if(temp->left==NULL)
				temp->left=p;
			else
				create(p,temp->left);
		}
		else
		{
			if(temp->right==NULL)
				temp->right=p;
			else
				create(p,temp->right);
		}		
		
	}
}

void dfs(struct node *root)
{
	printf("%d->",root->data);
	dfs(root->left);
	dfs(root->right);
}
