#include<iostream>
using namespace std;
main()
{
cout<<"Enter the student's name: ";
string name;
cin>>name;
cout<<"Enter matriculation marks (out of 1100): ";
float matric;
cin>>matric;
cout<<"Enter intermediate marks (out of 550): ";
float inter;
cin>>inter;
cout<<"Enter Ecat marks (out of 400): ";
float ecat;
cin>>ecat;
ecat = (ecat * 0.5/400);
matric = (matric*0.1/1100);
inter = (inter*0.4/550);
float agg;
agg = (matric + inter + ecat)*100;
cout<<"Aggregate score for "<<name<<" in UET is: "<< agg << "%";


}