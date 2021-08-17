/*
The span to the stock's price today is defined as the
maximum number of consecutive days (starting from today and going backwards)
for which the price of the stocks was less than today's rate.

Find the span of the stocks for all the days.

Using stack of pairs, O[N]
*/
#include "iostream"
#include "stack"
#include "vector"
using namespace std;

vector<int> stockSpan(vector<int> prices){
    vector<int> ans;
    //pair<price,days>
    stack<pair<int,int>> st;

    for(auto price:prices){
        int days = 1;
        while(!st.empty() && st.top().first < price){
            days += st.top().second;
            st.pop();
        }
        st.push({price,days});
        ans.push_back(days);
    }
    return ans;
}

int main(){
    vector<int> price = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = stockSpan(price);

    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
}