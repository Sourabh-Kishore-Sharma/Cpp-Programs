#include "iostream"
#include "vector"

using namespace std;

int main(){
    vector<int> v = {1, 3, -1, -3, 5, 3, 6};
    vector<int> ans;
    int k = 3;

    int n = v.size();
    for(int i=0; i<=n-k; i++){
        int mx = v[i];
        for(int j=1; j<k; j++){
            mx = max(v[i+j],mx);
        }
        ans.push_back(mx);
    }

    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}