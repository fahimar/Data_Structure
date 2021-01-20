#include <iostream>
#include <cstdio>
using namespace std;


int bubbleSort(int arr[], int n,int count) 
{ 
   int i, j; 
   bool swapped; 
   for (i = 0; i < n-1; i++) 
   { 
     swapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
		
        if (arr[j] > arr[j+1]) 
        { 
           swap(arr[j], arr[j+1]); 
           swapped = true; 
           count++;
        }
          
     } 
  
     
     if (swapped == false) 
        break;  
   } 
 return count;
} 
  


int main() 
{ 
    int arr[] = {1,2,3,4,5,6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    int c = 0;
   
    cout<<"My Sorted array: \n";
    c =  bubbleSort(arr, n,c);
   // printArray(arr, n,c);  
    for (int i=0; i < n; i++) 
        {cout<<arr[i]<<'\n';} 
        cout<<"Count = "<<c<<'\n';
    
    return 0; 
}
