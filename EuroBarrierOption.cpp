#include<iostream>
#include<cmath>
#include"Random1.h"
#include"EuroBarrierOption.h"
#include<algorithm>
using namespace std;

// definition of constructor 
EuroBarrierOption::EuroBarrierOption(
        int nInt_,
        double strike_,
        double spot_,
        double vol_,
        double r_,
        double expiry_,
        double barrier_){
    nInt = nInt_;
    strike = strike_;
    spot = spot_;
    vol = vol_;
    r = r_;
    expiry = expiry_;
    barrier = barrier_;
    generatePath();
};

// method of definition 
void EuroBarrierOption::generatePath(){
    double thisDrift = (r * expiry - 0.5 * vol * vol * expiry) / double(nInt);
    double cumShocks = 0;
    thisPath.clear();

    for (int i = 0; i < nInt; i++) {
        cumShocks += (thisDrift + vol * sqrt(expiry / double(nInt)) * getOneGaussianByBoxMueller());
        thisPath.push_back(spot * exp(cumShocks));

    }
};

// European DOWN-AND-OUT PUT options
double EuroBarrierOption::getEuroBarrierDNOPutPrice(int nReps){

    double rollingSum = 0.0;
    double thisLast = 0.0;

    for (int i = 0; i < nReps; i++){
        generatePath();
        double thisMin = *min_element(thisPath.begin(), thisPath.end());

        thisLast = thisPath[thisPath.size() - 1];
        rollingSum += ((thisLast < strike) && (thisMin >= barrier)) ? (strike - thisLast) : 0;
    }
    return exp(-r * expiry) * rollingSum / double(nReps);
}

// European DOWN-AND-OUT CALL options
double EuroBarrierOption::getEuroBarrierDNOCallPrice(int nReps){

    double rollingSum =  0.0;
    double thisLast = 0.0;

    for (int i = 0; i < nReps; i++) {
        generatePath();
        double thisMin = *min_element(thisPath.begin(), thisPath.end());

        thisLast = thisPath[thisPath.size() - 1];
        rollingSum += (( thisLast > strike ) && ( thisMin >= barrier )) ? ( thisLast - strike ) : 0;
    }
    return exp(-r * expiry) * rollingSum / double(nReps);
}

// European UP-AND-OUT PUT options
double EuroBarrierOption::getEuroBarrierUNOPutPrice(int nReps){

    double rollingSum = 0.0;
    double thisLast = 0.0;

    for (int i=0; i<nReps; i++) {
        generatePath();
        double thisMax = *max_element(thisPath.begin(), thisPath.end());

        thisLast = thisPath[thisPath.size() - 1];
        rollingSum += (( thisLast < strike ) && ( thisMax <= barrier )) ? ( strike - thisLast ) : 0;
    }

    return exp(-r * expiry) * rollingSum / double(nReps);

}

// European DOWN-AND-OUT CALL options
double EuroBarrierOption::getEuroBarrierUNOCallPrice(int nReps){

    double rollingSum =  0.0;
    double thisLast = 0.0;

    for (int i = 0; i < nReps; i++) {
        generatePath();
        double thisMax = *max_element(thisPath.begin(), thisPath.end());

        thisLast = thisPath[thisPath.size() - 1];
        rollingSum += (( thisLast > strike ) && ( thisMax <= barrier )) ? ( thisLast - strike ) : 0;
    }
    return exp(-r * expiry) * rollingSum / double(nReps);
}
