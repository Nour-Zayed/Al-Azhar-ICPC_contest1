#include <iostream>

using namespace std;

int main()
{
int s,d;
cin>>s>>d;

int arr[s];
for (int i=0;i<s;i++)
    cin>>arr[i];
int counter =0;
for(int i=0;i<s;i++)
{


    for (int j=0;j<s;j++)
        {



if(abs(arr[i]-arr[j])<=d &&i!=j)
    counter++;

}}
cout<<counter;
    return 0;
}
