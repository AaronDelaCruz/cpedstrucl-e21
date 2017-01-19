//Dela Cruz, Aaron Christian C.


#include<iostream>
#include<conio.h>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
        
    };

public:
    LinkedList(){
        head = NULL; 
    }

    void push(int a){
        Node *n = new Node();   
        n->x = a;             
        n->next = head;         
                               
        head = n;    
		    
    }

    int pop(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }
    
    void display(){
    	temp=head;
    	while(head!=0){
  	
    	Node *n = head;
    	int ret = n->x;
    	head = head->next;
  	
    	cout<<ret<<endl;
    }
    
    head=temp;
	}
    
private:
    Node *head; 
    Node *temp;
};

int main()
{
	LinkedList list;
	int z,a;
	while (1){	
	system("cls");
	cout<<"Push and Pop"<<endl;
	cout<<"*************"<<endl;
	cout<<"[1] Push"<<endl;
	cout<<"[2] Pop"<<endl;
	cout<<"[3] Display"<<endl;
	cout<<"[4] Exit"<<endl;
	cout<<"Enter your choice:";
	cin>>z;
	
	switch(z)
	{
		case 1:
			cout <<"Enter a number:";
			cin >> a;
			list.push(a);
			cout <<"You pushed number " << a  << endl;
			break;
			
		case 2:
			cout <<"You popped number " << list.pop() <<endl;
			break;
		
		case 3:
			list.display();
			break;
		
		case 4:
			exit(1);
							
	}
		getch();
	}	
}
