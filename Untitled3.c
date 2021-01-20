// this how recursive work....
#include<stdio.h>

void recurprint(int n)
{


    if(n==0)
    {

        return;
    }

    recurprint(n-1);
    printf("%d\n",n);
    //recurprint(n-1);

}


int main(){
recurprint(40);



}
