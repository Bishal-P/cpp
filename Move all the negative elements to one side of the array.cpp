#include <iostream>

using namespace std;

int* oneSide(int arr[],int size)
{
    int newarr[size];
    int start=0,end=size-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            newarr[end]=arr[i];
            end--;
        }
        else{
            newarr[start]=arr[i];
            start++;
        }
       
    }
    // for(int i:newarr)
    //     cout<<i<<" ";
    int* pt=newarr;
    return pt;
}

int main(){

    int arr[8]={5,453,34,-1,6,-3,58,-2};
    int* s=oneSide(arr,8);
    for(int i=0;i<8;i++)
        cout<<s[i]<<" ";
    cout<<endl;

    
    return 0;
}