#include<vector>

class EuroBarrierOption{
    public:

        // constructor
        EuroBarrierOption(
                int nInt_,
                double strike_,
                double spot_,
                double vol_,
                double r_,
                double expiry_,
                double barrier_
        );

        // destructor
        ~EuroBarrierOption(){};

        // methods
        void generatePath();
        double getEuroBarrierDNOPutPrice(int nReps);
        double getEuroBarrierDNOCallPrice(int nReps);
        double getEuroBarrierUNOPutPrice(int nReps);
        double getEuroBarrierUNOCallPrice(int nReps);

        // members 
        std::vector<double> thisPath;

        int nInt;
        double strike;
        double spot;    
        double vol;
        double r;
        double expiry;
        double barrier;
};

