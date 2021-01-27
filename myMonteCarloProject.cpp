#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include"EuroBarrierOption.h"

using namespace std;

int main(){
    int nInt = 252; // number of intervals: assume 252 trading days in a year
    double Strike = 150.0; // strike price 
    double Spot = 145.0; // price of the underlying instrument 
    double Vol = 0.25; // volatility 
    double Rfr = 0.05; // risk-free rate 
    double Expiry = 1.0; // time to maturity (1 = one year)
    double Barrier; // barrier level -> to be defined by user 
    int nReps; // number of paths generated -> to be defined by user
    
    // set the seed for reproducible results
    srand( time(NULL) );
    
    // ask user to set the barrier level and nReps 
    cout << "Enter the barrier level: "; 
    cin >> Barrier;

    cout << "Enter the number of paths to be generated: ";
    cin >> nReps;
    
    // create a new instance of the EuroBarrierOption class named myEuro
    EuroBarrierOption myEuro(nInt, Strike, Spot, Vol, Rfr, Expiry, Barrier);

    // call the up-and-out Put method to get option price
    double uno = myEuro.getEuroBarrierUNOPutPrice(nReps);

    // display the result
    cout << "The up-and-out put option price is: "<< uno << endl;

    return 0;
}

