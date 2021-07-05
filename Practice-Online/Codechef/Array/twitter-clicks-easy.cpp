/*
Problem Code - TWTCLOSE

Input
First line contains two integers N K, the number of tweets (numbered 1 to N) and the number of clicks respectively (1 ≤ N, K ≤ 1000). Each of the following K lines has one of the following.
CLICK X , where X is the tweet number (1 ≤ X ≤ N)
CLOSEALL

Output
Output K lines, where the ith line should contain the 
number of open tweets just after the ith click.

Example
Input:
3 6
CLICK 1
CLICK 2
CLICK 3
CLICK 2
CLOSEALL
CLICK 1

Output:
1
2
3
2
0
1
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, clicks;
    cin>>n>>clicks;
    int arr[n+1] = {0};
    
    string str;

    while(clicks > 0){
        
        int count = 0;
        cin>>str;
        if(str.compare("CLICK")==0){
            int i;
            cin>>i;
            if(arr[i]==0)
                arr[i]=1;
            else
                arr[i]=0;
        }
        else{
            for(int j=0; j<n+1; j++){
                arr[j]=0;
                count=0;
            }
        }
        
        for(int j=0; j<n+1; j++){
                if (arr[j]==1)
                    count+=1;
            }
        cout<<count<<endl;   
        clicks--;
    }
return 0;
}
