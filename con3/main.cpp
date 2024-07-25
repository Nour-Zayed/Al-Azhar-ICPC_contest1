#include <iostream>

using namespace std;

int main()
{
int x;
int counter=0;
cin>>x;

for (int i=1;i<x;i++){
    if(x%i==0)
        counter++;
}

cout<<counter;

    return 0;
}
