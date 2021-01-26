#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include"EuroBarrierOption.h"

using namespace std;

int main(){
    int nInt = 252;
    double Strike = 150.0;
    double Spot = 145.0;
    double Vol = 0.25;
    double Rfr = 0.05;
    double Expiry = 1.0;
    double Barrier = 0.0;
    int nReps = 100000;
    
    // set the seed
    srand( time(NULL) );

    // create a new instance of a class
    EuroBarrierOption myEuro(nInt, Strike, Spot, Vol, Rfr, Expiry, Barrier);

    // call the method to get option price
    double dno = myEuro.getEuroBarrierDNOPutPrice(nReps);
    double uno = myEuro.getEuroBarrierUNOPutPrice(nReps);
    cout << "the down-and-out put price is: "<< dno << endl;
    cout << "the up-and-out put price is: "<< uno << endl;

    // calculate standard deviation of given choice


    // display option price 
    return 0;
}

