/*
Problem Code - CHEFRECP

In Chefland, types of ingredients are represented by integers and recipes are represented by sequences of ingredients 
that are used when cooking. One day, Chef found a recipe represented by a sequence A1,A2,…,AN at his front door 
and he is wondering if this recipe was prepared by him.

    Chef is a very picky person. He uses one ingredient jar for each type of ingredient and when he stops using a jar, 
he does not want to use it again later while preparing the same recipe, so ingredients of each type 
(which is used in his recipe) always appear as a contiguous subsequence. Chef is innovative, too, 
so he makes sure that in each of his recipes, the quantity of each ingredient 
(i.e. the number of occurrences of this type of ingredient) is unique ― distinct from the quantities of all 
other ingredients.

Determine whether Chef could have prepared the given recipe.

Input
The first line of the input contains a single integer T denoting the number of test cases. 
The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.

Output
For each test case, print a single line containing the string "YES" if the recipe could have been prepared by Chef 
or "NO" otherwise (without quotes).

Constraints
1≤T≤100
1≤N≤103
1≤Ai≤103 for each valid i

Example Input
3
6
1 1 4 2 2 2
8
1 1 4 3 4 7 7 7
8
1 7 7 3 3 4 4 4

Example Output
YES
NO
NO
*/
#include <iostream>
#include <algorithm>
using namespace std;

bool search(int arr[], int n,int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key)
            return true;
    }
    return false;
}

bool checkDuplicate(int freq[]){
    sort(freq, freq+999);
    for(int i=0; i<1000; i++){
        if(freq[i]!=0){
            if(freq[i]==freq[i+1]){
                return true;
            }
        }
    }
    
    return false;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    bool flag = true;
	    int n;
	    cin>>n;
	    int arr[n];
	    int freq[1000] = {0};
	    int cnt = 0;
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0; i<n; i++){
	        if(i==0){
	            freq[arr[i]]++;
	            cnt++;
	        }
	        else{
	            if(arr[i]==arr[i-1]){
	                freq[arr[i]]++;
	                cnt++;
	            }
	            else{
	                if(search(arr, i, arr[i])==true){
	                    flag = false;
	                }
	                else{
    	                cnt=0;
    	                freq[arr[i]]++;
    	                cnt++;
	                }
	            }
	        }
	    }
	    if(flag==true && checkDuplicate(freq)==false)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	    T--;
	}
	return 0;
}
