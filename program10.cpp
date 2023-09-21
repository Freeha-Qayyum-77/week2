#include<iostream>
using namespace std;
main(){
cout<<"Enter the name of the cricket team: ";
string name;
cin>>name;
cout<<"Enter the number of wins: ";
int win;
cin>>win;
cout<<"Enter the number of draws: ";
int draws;
cin>> draws;
cout<<"Enter the number of losses: ";
int losses;
cin >>losses;
int points;
points= (win*3)+(draws*1)+(losses*0);
cout<<name <<" has obtained "<<points<<" points in the Asia Cup Tournament.";





}