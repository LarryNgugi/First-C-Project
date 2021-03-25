#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
const float tax_rate = .3;
int main()

{
    //declaring variables
    string name,fav_food,feedback;
    float price = 150;
    int qty = 0;
    float charge = 0,taxCharge = 0,total=0,serviceCharge=200;
    //customer details
    cout<<"Kebab Fries"<<endl;
    cout <<"please enter your name:"<<endl;
    cin >>name;
    cout <<"Hello, Mr " << name << ",nice to see you at kebab fries"<<endl;
    cout <<"please enter your order:"<<endl;
    cin >>fav_food;
    cout<<"Mr "<< name <<",Your " << fav_food << " order will be out in a few minutes"<<endl;
    cout<<"Enter the number you wish to order:" <<endl;
    cin>>qty;

   //format output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    //calculations
    charge = price * qty;
    taxCharge=charge * tax_rate;
    total=charge + taxCharge+serviceCharge;

    //format output
    cout<<" Total Amount:Ksh"<<setprecision(2)<<total<<endl;
    cout<<"______________________________________________"<<endl;
    cout<<"Untaxed Price:Ksh"<<setprecision(2)<<charge<<endl;
    cout<<"    Tax charged:Ksh"<<setprecision(2)<<taxCharge<<endl;
    cout<<"service charged:Ksh"<<setprecision(2)<<serviceCharge<<endl;
    cout<<"-------------Buy Goods Till Number 717571-------------"<<endl;
    cout <<"At kebab fries we really appreciate customer feedback,How was our service at Kebab Fries:"<<endl;
    cin>>feedback;
    cout<<"Thank you,Mr "<< name <<",for your feedback and for choosing Kebab Fries."<<endl;
    return 0;
}
