/*
The span to the stock's price today is defined as the
maximum number of consecutive days (starting from today and going backwards)
for which the price of the stocks was less than today's rate.

Find the span of the stocks for all the days.

Brute force approach - O(n^2)
*/
#include "iostream"
using namespace std;

int main(){
    int price[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(price)/sizeof(price[0]);

    int days;
    for(int i=0; i<n; i++){
        int days = 0;
        for(int j=i; j>=0; j--){
            if(price[j] < price[i])
                days++;
        }
        cout<<days+1<<" ";
    }
    cout<<endl;
}
