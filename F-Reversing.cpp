//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

#include<iostream>
using namespace std;

void reversePrint(int*arr, int n)
{
    for(int i = (n-1); i>=0; i--)
        cout<<arr[i]<<" ";
    return;

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
        cin>>arr[i];
    reversePrint(arr,n);
    return 0;
}