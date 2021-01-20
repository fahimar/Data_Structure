#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={1,3,5,10,12,15,17,19,21,22};
    int s,e,m,item,n ;
    n =  sizeof(a)/sizeof(int);
    cout<<"The predefined array elements are"<<'\n';
    for(int i=0;i < n;i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<'\n';
    cout<<"Enter Item to find:"<<'\n';

    cin >> item;

    s = 0;e = n - 1;m = (s+e)/2;
    int comp=0;

    while (s <= e) {

     comp++;


    if (a[m] < item){ s = m + 1; }

       else if (a[m] == item) {

      cout<<"Item -> "<< item<<" found at index ["<<m<< "] Number of Comparison = "<<comp<<'\n';
      cout<<'\n';

      break;
    }
    else{
     e = m - 1;

     m = (s + e)/2;}


  }

  if (s > e)
    cout<< item <<" Not found at index , Comparison = "<<comp<<'\n';
    return 0;
}
