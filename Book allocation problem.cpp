#include <iostream>

using namespace std;

void minMax(int arr[],int minMaxArr[]){
    int size=sizeof(arr);
    int max=0;
    for(int i=0 ;i<size;i++)
    {
        if(arr[i]>max){
            minMaxArr[0]=arr[i];
            max=arr[i];
        }
        minMaxArr[1]+=arr[i];
    }
}

bool isFeasible(int arr[],int start,int end,int student,int mid)
{
    int size=sizeof(arr);
    int k=1;
    int ans=0;
    for(int i=0 ;i<size;i++)
    {
        // ans+=arr[i];
        if(ans>mid)
        {
            ans=arr[i];
            k++;
        }
        else{
            ans+=arr[i];
        }

    }

    // int res=k<=student;

    // cout<<"res = "<<res<<endl;

    return k<=student;

}


int main(){
    int arr[]={10,10,20,30};
    int minMaxArr[2]={0};
    minMax(arr,minMaxArr);
    int start=minMaxArr[0],end=minMaxArr[1];
    int ans=0;
    int student=2;
    while(start<end)
    {
        int k=1;
        int mid=(start+end)/2;
        if(isFeasible(arr,start,end,student,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

    cout<<"The value is :"<<ans<<endl;
    
    
    return 0;
}