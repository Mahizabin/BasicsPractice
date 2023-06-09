/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int glo=65;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo=9;
    glo=98;
    bool x=true;
    sum();
    cout<<endl;
    cout<<glo<<endl<<x<<endl;
    int a='d';
    int package=34;
    cout<<"Hi Mahizabin! "<<endl<< "Good Morning "<<endl;
    cout<<"Congratulations !! You are now a part of Microsoft and the ctc offered is "<<package<<" LPA"<<endl;
    cout<<a<<endl;
    
    int k,l;
    cout<<"Enter the value1 to be added: "<<endl;
    cin>>k;
    cout<<"Enter the value2 to be added: "<<endl;
    cin>>l;
    cout<<"The sum of two numbers is: "<<k+l<<endl;
    cout<<"The product of two numbers is: "<<k*l<<endl;
    cout<<"The difference of two numbers is: "<<k-l<<endl;
    cout<<"The integer division of two numbers is: "<<k/l<<endl;
    cout<<"The modulo operator of two numbers is: "<<k%l<<endl;
    cout<<"The pre increament is: "<<++k<<endl;
    cout<<"The post increament is: "<<k++<<endl;
    cout<<"The pre decreament is: "<<--k<<endl;
    cout<<"The post decreament is: "<<k--<<endl;
    int &m=k;
    cout<<k<<endl;
    cout<<m<<endl;
    cout<<"The local value of glo is: "<<glo<<endl;
    cout<<"The global value of glo is: "<<::glo<<endl;
    return 0;
}

