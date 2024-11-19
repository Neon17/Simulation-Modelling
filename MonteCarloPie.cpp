#include <bits/stdc++.h>
using namespace std;


int calculatePie(int itrs){
    //square points by circular points in an unit radius
    int x,y,pi=0;
    x = rand()%10;
    cout<<"X = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    return pi;
}

int main(){
    int itrs;
    cout<<"Enter number of iterations you want: ";
    cin>>itrs;
    cout<<calculatePie(itrs)<<endl;
    return 0;
}
