#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==0&&n!=2)
        cout<<"YES";
    else if(n%2==1||n==2)
        cout<<"NO";
}
