#include <iostream>

using namespace std;

int pivot(int arr[])
{
    int size=sizeof(arr);
    int start=0,end=size-1,mid=(start+end)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
            start=mid+1;
        else
            end=mid;
        mid=(start+end)/2;
    }
    return end;

}

int main(){
    int arr[8]={6,7,8,1,2,3,4,5};
    cout<<"Pivot element is at index :"<<pivot(arr)<<endl;
    
    return 0;
}