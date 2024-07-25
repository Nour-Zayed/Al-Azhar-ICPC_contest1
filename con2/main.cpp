#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

float num_market,kilos;
float kilo,price;
float price_of_kilo;
float final_price=0;
cin>>num_market>>kilos;


for(int i=0;i<num_market;i++){


    cin>>kilo>>price;

price_of_kilo=kilo / price;


if(i==0){
            final_price=price_of_kilo;

            continue;
        }

if(price_of_kilo<final_price){
    final_price=price_of_kilo;
}}
cout<<setprecision(8)<<final_price*kilos;

    return 0;
}
