#include <iostream>
// #include<String>

using namespace std;

// String reverseWord(String ,int start,int end)
// {
//     while(start<end)
//     {
        
//     }  
//     return 
// }

int main(){
    string word="Hello how are you";
    for(int i=0;i<word.length();i++)
    {
        cout<<word[i]<<endl;
    }
    cout<<word[0:5]<<endl;
    return 0;
}