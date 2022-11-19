#include <iostream>
using namespace std;
int main()
{
//variables declaration

string name;
int score;


//variable initialization
cout<<"Enter Student's Full Name:";
getline(cin,name);

cout<<"Enter "+ name +"'s Score:";
cin>>score;

if ((score >= 70) && (score <=100))
{
    cout<< name +"'s Mean Grade is:"<<"A";
}
else if ((score >= 60) && (score <=69))
{
    cout<<name +"'s Mean Grade is:"<<"B";
}
else if ((score >= 50)&& (score <=59))
{
cout<<name +"'s Mean Grade is:"<<"C";
}
else if((score >= 40) && (score <=49))
{
    cout<<name +"'s Mean Grade is:"<<"D";

}
else if ((score>= 0) && (score<=40))
{
    cout<<name +"'s Mean Grade is:"<<"F";
}

else
{
    cout<<"Invalid score!!";
}

}