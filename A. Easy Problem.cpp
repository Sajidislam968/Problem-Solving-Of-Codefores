#include<iostream>
using namespace std;
 int main()
 {
     int n;
     cin>>n;
     int arr[n];
     int b =0;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     for(int i = 0;i<n;i++)
     {
         b = arr[i]-1;
         cout<<b<<endl;
     }
 }
