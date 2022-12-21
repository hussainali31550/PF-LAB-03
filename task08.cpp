#include <iostream>
using namespace std;
main()
{
string name;  
float matric;
float intermediate; 
float ecat;
float matricw;
float intermediatew; 
float ecatw;
float aggregate;

cout<<"Enter your Name : ";
cin>>name;

cout<<"Enter your Matric Marks : ";
cin>>matric;

cout<<"Enter your Intermediate Marks : ";
cin>>intermediate;

cout<<"Enter your Ecat Marks : ";
cin>>ecat;

matricw=matric*0.0090909;
intermediatew=intermediate*0.036363636;
ecatw=ecat*0.125;
aggregate=matricw+intermediatew+ecatw;

cout<<"Your Aggregate is : " <<aggregate <<endl;

}