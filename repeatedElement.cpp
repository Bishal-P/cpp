#include <iostream>

using namespace std;

int main(){
    int N=6;
    int arr[N]={1,2,3,4,5,2};
    int result1=0,result2=0;
    for(int i=0;i<N;i++)
    {
        if(i<=N-2){
            result2^=i+1;            
        }
        result1^=arr[i]^result2;
    }
    cout<<"The repeated element is :"<<result2<<endl;
    return 0;
}