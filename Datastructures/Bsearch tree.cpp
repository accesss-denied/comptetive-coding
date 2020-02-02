#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define pb push_back
#define vi vector<int>
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;
		
		struct node
		{
			ll data;
			node* left;
			node* right;
		};
		
			
		node* insert(node* x,ll data)
		{
			
			if(x==NULL)
			{
				node* temp=new node();
				temp->data=data;
				temp->left=NULL;
				temp->right=NULL;
				return temp;
			}
			else if(data> x->data)
			{
				x->right=insert(x->right,data);
				
			}
			else if(data<x->data)
			{
				x->left=insert(x->left,data);
			}
			
			
			
			return x;
		}	
		
	void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        cout<<root->data<<" ";
        inorder(root->right); 
    } 
} 

	void preorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        cout<<root->data<<" ";
        preorder(root->left); 
        preorder(root->right); 
    } 
} 


	void postorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        
        postorder(root->left); 
        postorder(root->right); 
        cout<<root->data<<" ";
    } 
} 
   
		

int main() {
				fast
				struct node* root=NULL;
				root=insert(root,50);
				insert(root, 30); 
    			insert(root, 20); 
   				insert(root, 40); 
   				insert(root, 70); 
   				insert(root, 60); 
    			insert(root, 80); 
    			cout<<"inorder traversal ";
    			inorder(root);
    			cout<<endl;
    			cout<<"postorder traversal ";
    			postorder(root);
    			cout<<endl;
    			cout<<"preorder traversal ";
    			preorder(root);
	return 0;
}
