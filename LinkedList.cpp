<<<<<<< HEAD
//https://www.learncpp.com/cpp-tutorial/stdcin-and-handling-invalid-input/
#include<bits/stdc++.h>
#include <limits> // for std::numeric_limits
#include <regex>
using namespace std;
typedef struct node Node;

struct node {
	int data;
	Node *next;
	};//*head
	
//void createList(int n);
void displayList();
void printList(Node* position);
void ignoreLine();


Node *createList(int n)
{
	Node* new_node,*temp,*head;
	int data, i;
	head = (Node*)malloc(sizeof(Node*));
	
	if(head == NULL)
	{
		cout<<"Unable to allocate memory";
		}
	else{
		
		cin >>data;
		
		ignoreLine();
		head->data = data;
		temp = head;
		
		for(i=2;i<= n;i++)
		{
	      new_node = (Node*)malloc(sizeof(Node*));
	      if(new_node == nullptr){ break; }
	      else {
			     cout <<i<<'\n';
			     cin>>data;
			     new_node->data = data;
			     new_node->next = nullptr;
			     temp->next = new_node;
			     temp = temp->next;
			  
			  }
			}
		  cout<<" Linked List created "<<'\n';
		}
		return head;
	}	
void ignoreLine()
{
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void displayList(Node *head)
{
    Node *temp;

   
       if(head != NULL){
        temp = head;
        while(temp != NULL)
        {
         // for(int i = 0; i < 3;i++){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
	}
    
}
/*
void printList(Node* position)
{
    
    Node* pointed;
    pointed=position;
    
        while(1)
    {
        cout<<" "<<pointed->data<<'\t';
        pointed=pointed->next;
    }
    cout<<'\n';
}
*/

int main(){
	
	//Node* linear_Node, *temp;
	Node* linear_Node;
	int size;
	cin>>size;
	
    //temp =	createList(size);
	 
	//linear_Node = temp;
	 
    linear_Node = createList(size);
    
    //printList(linear_Node);
    
	
	 cout <<"Data in the List : ";
	 displayList(linear_Node);
	
	cout<<'\n';
    
	
	/*int V = createList(data,next);
    
    
    cout<<"Data  = "<<V->data;	
	*/
	return 0;
	}
=======
//https://www.learncpp.com/cpp-tutorial/stdcin-and-handling-invalid-input/
#include<bits/stdc++.h>
#include <limits> // for std::numeric_limits
#include <regex>
using namespace std;
typedef struct node Node;

struct node {
	int data;
	Node *next;
	};//*head
	
//void createList(int n);
void displayList();
void printList(Node* position);
void ignoreLine();


Node *createList(int n)
{
	Node* new_node,*temp,*head;
	int data, i;
	head = (Node*)malloc(sizeof(Node*));
	
	if(head == NULL)
	{
		cout<<"Unable to allocate memory";
		}
	else{
		
		cin >>data;
		
		ignoreLine();
		head->data = data;
		temp = head;
		
		for(i=2;i<= n;i++)
		{
	      new_node = (Node*)malloc(sizeof(Node*));
	      if(new_node == nullptr){ break; }
	      else {
			     cout <<i<<'\n';
			     cin>>data;
			     new_node->data = data;
			     new_node->next = nullptr;
			     temp->next = new_node;
			     temp = temp->next;
			  
			  }
			}
		  cout<<" Linked List created "<<'\n';
		}
		return head;
	}	
void ignoreLine()
{
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void displayList(Node *head)
{
    Node *temp;

   
       if(head != NULL){
        temp = head;
        while(temp != NULL)
        {
         // for(int i = 0; i < 3;i++){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
	}
    
}
/*
void printList(Node* position)
{
    
    Node* pointed;
    pointed=position;
    
        while(1)
    {
        cout<<" "<<pointed->data<<'\t';
        pointed=pointed->next;
    }
    cout<<'\n';
}
*/

int main(){
	
	//Node* linear_Node, *temp;
	Node* linear_Node;
	int size;
	cin>>size;
	
    //temp =	createList(size);
	 
	//linear_Node = temp;
	 
    linear_Node = createList(size);
    
    //printList(linear_Node);
    
	
	 cout <<"Data in the List : ";
	 displayList(linear_Node);
	
	cout<<'\n';
    
	
	/*int V = createList(data,next);
    
    
    cout<<"Data  = "<<V->data;	
	*/
	return 0;
	}
>>>>>>> 249666c906e5e6a8edeb3978ea6fb7ab4e475b65
