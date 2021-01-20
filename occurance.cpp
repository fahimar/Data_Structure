#include <iostream>
using namespace std;

int occurrences(int arr[], int n, int x)
{
    int result = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          result++;
    return result;
} 
 
int main()
{
    
    int n;
    cout << "Number of the array element  :";
	cin >> n ;
	int arr[n];
	cout << "User input array: ";
	for(int i = 0;i < n;i++){ cin >> arr[i]; }
   
    for (int i=0; i < n; i++) 
    cout << arr[i] <<" ";
    cout<<"Searching number X :"<<'\n';
    
    int x ;
    cin >> x;
    cout <<"\nNumber of occurrences of "<< x<<" : " << occurrences(arr, n, x);
    return 0;
 }
