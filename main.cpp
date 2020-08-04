#include <iostream>
#include <bits/stdc++.h>

using namespace std;

float Probability(int rating1,int rating2)
{
    return 1.0 *1.0 /( 1+ 1.0 * pow(10, 1.0* (rating1-rating2)/400));
}

void EloRating(float Ra, float Rb, int K, bool d)
{
    float Pb = Probability(Ra, Rb);
    float Pa = Probability(Rb, Ra);

    if( d == 1){
        Ra = Ra + K * (1-Pa);
        Rb = Rb + K * (0- Pb);
    }
    else{
        Ra = Ra + K * (0- Pa);
        Rb = Rb + K * (1-Pb);
    }

    cout << "Updated Ratings: \n";
    cout << "Ra = " << Ra <<" Rb = " << Rb;
}

int main()
{
    float Ra = 1000;
    float Rb = 1000;

    int K = 30;

    bool d = 1;

    EloRating(Ra,Rb,K,d);

    return 0;
}
