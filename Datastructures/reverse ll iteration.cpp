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
			 	node * next;
			 };
            
            struct node *head; //global head variable
            
            void insert(ll n)
            {
            	
            	node* temp=new node( );
            	temp->data=n;
            	temp->next=NULL;
            	
            	node* t;
            	t=head;
            	if(head==NULL)
            	{
            		head=temp;
            		return ;
				}
            	while(t->next!=NULL)
            	t=t->next;
            	t->next=temp;
            	return ;
            	
                
				}
				
				void print()
				{
					node* t=head;
					while(t->next!=NULL)
					{
						cout<<t->data<<" ";
						t=t->next;
					}
					cout<<t->data;
					return ;
					
				}
				
				void reverse()
				{
					node *prev,*current,*temp;
					prev=NULL;
					current=head;
						
						while(current!=NULL)
						{
							temp=current->next;
							current->next=prev;
							prev=current;
							current=temp;
							
						}
						
						head=prev;
						
				}
				

int main() {
				fast
				ll t;
				head=NULL;
				cin>>t;
				while(t--)
				{
					ll x;
					cin>>x;
					insert(x);
		
             	}
             	reverse();
             	print();
	return 0;
}
