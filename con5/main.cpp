#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int minn =arr[0];
int maxx =arr[0];

for (int i=0;i<n;i++){
    if (arr[i]>maxx)
        maxx=arr[i];
    if (arr[i]<minn)

        minn=arr[i];
}
int cntr=0;

for (int i=0;i<n;i++)
{
    for (int j=i+1;j<n;j++)
    {


        if(arr[i] +arr[j] == minn+maxx)

            cntr++;
    }}
    cout<<cntr;




    return 0;
}
