#include<iostream>
using namespace std;
main(){
setlocale(LC_ALL,"English");
int shortEdge,longEdge,perimeter,area;
cout<<"Enter short edge:";
cin>>shortEdge;
cout<<"Enter long edge:";
cin>>longEdge;
perimeter=2*(shortEdge+longEdge);
area=shortEdge*longEdge;
cout<<"Perimeter of rectangular: "<<perimeter<<"  Area of rectangular:"<<area;

	
}
