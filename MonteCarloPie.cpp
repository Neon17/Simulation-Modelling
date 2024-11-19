#include <bits/stdc++.h>
using namespace std;


double calculatePie(long int itrs){
    //square points by circular points in an unit radius
    double x,y,pi;
    long int circlePoints=0, squarePoints=0;
    srand(time(NULL));
    for (long int i=0;i<itrs;i++){
        x = (double)rand()/RAND_MAX;
        y = (double)rand()/RAND_MAX;
        if ((x*x + y*y)<1) circlePoints++;
        squarePoints++;
    }
    cout<<"Number of points inside circle = "<<circlePoints<<endl;
    cout<<"Number of points inside square = "<<squarePoints<<endl;
    pi = 4*(double)circlePoints/squarePoints;
    return pi;
}

int main(){
    cout<<"Monte Carlo: Finding the value of PI"<<endl;
    long int itrs;
    cout<<"Enter number of iterations you want: ";
    cin>>itrs;
    cout<<"PI = "<<calculatePie(itrs)<<endl;
    return 0;
}
