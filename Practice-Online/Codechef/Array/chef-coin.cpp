/*
There are N workers; each worker is of one of the following three types:

A translator translates some text from Chef's language to another langague.
An author writes some text in Chef's language.
An author-translator can both write a text in Chef's language and translate it to another language.

Input
The first line of the input contains a single integer N denoting the number of workers.
The second line contins N space-separated integers c1,c2,...,cN denoting the numbers of coins 
Chef has to pay each hired worker.
The third line contains N space-separated integers t1,t2,...,tN denoting the types of workers. 
For each valid i, the i-th worker is a translator if ti=1, an author if ti=2 or an author-translator if ti=3.

Output
Print a single line containing one integer — the minimum number of coins Chef has to pay.

Constraints
1≤N≤1,000
1≤ci≤100,000 for each valid i
1≤ti≤3 for each valid i

Example Input

5   
1 3 4 6 8   
1 2 1 2 3   
Example Output

4
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int c[n], t[n];
	
	for(int i=0; i<n; i++){
	    cin>>c[i];
	}
	for(int i=0; i<n; i++){
	    cin>>t[i];
	}
	
	int t1=1000000, t2=1000000, t3=1000000;
	
	for(int i=0; i<n; i++){
	    if(t[i]==1)
	        t1 = min(t1, c[i]);
	    else if(t[i]==2)
	        t2 = min(t2, c[i]);
	    else if(t[i]==3)
	        t3 = min(t3, c[i]);
	}
	
	cout<<min(t1+t2, t3)<<endl;
	
	return 0;
}
