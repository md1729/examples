#include<iostream>
using namespace std;
main(){
float price,amount,rate,VAT;
cout<<"Enter the price without VAT:";
cin>>price;
cout<<"Enter the VAT rate:";
cin>>rate;
VAT=price*rate/100;
amount=price+VAT;
cout<<"VAT amount of the product: "<<VAT<<"  Price of the product including VAT: "<<amount;

	
}
