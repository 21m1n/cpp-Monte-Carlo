#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include"EuroBarrierOption.h"

using namespace std;

int main(){
    int nInt = 126;
    double Strike = 50;
    double Spot = 45;
    double Vol = 0.25;
    double Rfr = 0.04;
    double Expiry = 0.5;
    double Barrier = 0;
    int nReps = 10000;
    
    // set the seed
    srand( time(NULL) );

    // create a new instance of a class
    EuroBarrierOption myEuro(nInt, Strike, Spot, Vol, Rfr, Expiry, Barrier);

    // call the method to get option price
    double dno = myEuro.getEuroBarrierDNOPutPrice(nReps);
    double uno = myEuro.getEuroBarrierUNOPutPrice(nReps);
    cout << "the down-and-out put price is: "<< dno << endl;
    cout << "the up-and-out put price is: "<< uno << endl;

    // display option price 
    return 0;
}

