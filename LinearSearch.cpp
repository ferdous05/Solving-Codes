#include <iostream>
using namespace std;

int linear_Ser(int Arr[], int size,int num){
int store=0;
for (int i=0;i<size;i++){

    if (Arr[i]==num){
        return i;
    }
}
return -1;
}
int main (void)
{

    int x;
    cout<<"input the size\n";
    cin>>x;
    int Array[x];

    int fn;
    cout<<"input the Finding Number\n";
    cin>>fn;
    cout<<"input the Values\n";
    for (int i=0; i<x; i++)
    {
        cin>>Array[i];
    }
    if (linear_Ser(Array, x,fn)==-1){
        cout<<"The value is not present in Arrary";
    }
   cout<<"The Output: " <<linear_Ser(Array, x,fn);



}


