#include <iostream>

using namespace std;

int main(){
    char str[]="MADAM";
    // cout<<str;
    int s=0,e=4;
    int pal=1;
    while (s<e)
    {
        if(str[s]!=str[e])
        pal=0;
        s++;
        e--;
        cout<<s<<" "<<e<<endl;
    }
    pal?cout<<"Palindrome\n":cout<<"Not palindrome\n";
    return 0;
}