#include<bits/stdc++.h>
using namespace std;

class St{
	public:
    int  stack[5],size = 5, top = -1;

	int len = sizeof(stack) / sizeof(stack[0]);
bool push(int item){


			if(!isFull()){
				top++;
				stack[top] = item;
				return true;
				}
			else{
				return false;
				}
}

int pop(){


		return stack[top--];
	}
 bool isEmpty(){
	return (top == -1);
}
bool isFull(){
	return (top == size - 1);
	}

void display(){
		if(top >= 0)
		{ cout << "Stack elements are : ";
		 for(int i = top; i >= 0; i--)
		 cout << stack[i] <<" ";
		 cout <<'\n';}
		 else{
			 cout << "Stack is empty ";
			 }

}
void add()
{
    int sum = 0;
    if(top >= 0)
    {
        for(int i = top; i >= 0; i--)
        {
          sum += stack[i];
        }

    }
    cout << "The sum of the stack is = "<<sum<<'\n';
}

};
int main()
{
	St s;

	int ch,val;

	cout<<"1) Push in stack "<<'\n';
	cout<<"2) Pop from stack "<<'\n';
	cout<<"3) Adding array elements of stack "<<'\n';

	cout<<"4) Display"<<'\n';
	cout<<"5) Quit "<<'\n';
	do{
		cout<< "Enter choice : "<<'\n';
		cin >> ch;
		switch(ch){

			case 1:{
				cout << "Enter value to be pushed"<<'\n';
				cin >> val;
				s.push(val);
				break;
				}
			case 2:{
				cout << "Enter value to be poped"<<'\n';
				s.pop(); break;
				}

			case 3:{
				cout << "Adding"<<'\n';
				 s.add(); break; }

			case 4:{ s.display(); break; }

			case 5: { cout << " EXIT " <<'\n'; break; }

			default :{
					cout << "Invalid Choice "<<'\n';
				}

			}

		}while(ch != 4);
		return 0;

}
