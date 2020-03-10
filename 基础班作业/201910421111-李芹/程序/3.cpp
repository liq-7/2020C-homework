#include <iostream>
using namespace std;
int main()
{
	const int change1=60;
	const int change2=3600;
double degree;
double minute;
double second;
double degrees;
cout<<"enter a latitude in degrees,minutes,and seconds"<<endl;
cout<<"First,enter the degrees:"<<endl;
cin>>degree;

cout<<"Next,enter the minutes of arc:"<<endl;
cin>>minute;
cout<<"Finally,enter the seconds of arc:"<<endl;
cin>>second;
degrees=degree+minute/change1+second/change2;
cout<<degree<<"degrees,"<<minute<<"minutes,"<<second<<"seconds,="<<degrees<<" degrees";

return 0;


}