#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        string str = s[i];
        reverse(str.begin(),str.end());
        int a = str.length();
        char arr[a+1];
        strcpy(arr, str.c_str());
        for(int j =0;j<str.length();j++)
        {
            if(arr[j]== 'p')
            {
                arr[j] = 'q';
            }
            else if(arr[j]=='q')
            {
                arr[j] = 'p';
            }
            else
                arr[j] = 'w';
            cout<<arr[j];
        }
        cout<<endl;
    }
}
