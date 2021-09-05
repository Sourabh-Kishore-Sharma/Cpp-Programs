/*
Program to 
i) Count number of set bits in a binary representation of a number.
ii) Position of least significant set bit
iii) Position of most significant set bit
*/
#include "iostream"
#include "cmath"
using namespace std;

int countSetBits(int n){
    int cnt = 0;
    while(n!=0){
        n = n&(n-1);
        cnt++;
    }
    return cnt;
}

int msbPosition(int n){
    int pos=0;
    int x=8;

    int bits = 4;
    while(bits--){
        pos++;
        if((n&x) == x)
            return pos;
        x = x>>1;
    }
    return -1;
}

int lsbPosition(int n){
    int pos=0;
    int x=8;
    int ans=1;

    int bits = 4;
    while(bits--){
        pos++;
        if((n&x) == x)
            ans = max(ans,pos);
        x = x>>1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int set_bits = countSetBits(n);
    int msb_pos = msbPosition(n);
    int lsb_pos = lsbPosition(n);
    cout<<set_bits<<"#"<<msb_pos<<"#"<<lsb_pos<<endl;
}