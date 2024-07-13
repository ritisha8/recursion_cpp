/*
//  Reverse an array with recursion: 


// Intrusion: 
    * We can use two pointers approach...
    * first pointer is at index "0", & second is at "n-1"
    * we will swap these values..
    * & increment first pointer & decrement second pointer..
    * we will perform all these operations till we will not reached "n/2"
    * or (we can say start is less than end)

// Input: 
1
5
1 2 3 4 5
// Output:
5 4 3 2 1 

// TC : O(n)

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef size_t s_t;  // use during string traversal
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define arrInp for(int i=0;i<n;i++) cin >> arr[i];
#define arrOut(k) for(int i=0;i<n;i++) cout << arr[i] <<  k;
#define el cout << endl;
#define SQ(a) (a)*(a);

void reverseArr(int arr[], int start, int end){
    if(start < end){
        swap(arr[start], arr[end]);
        reverseArr(arr, start+1, end-1);
    }
    else return;
}

void solve(){
    int n;
    cin >> n;
    int arr[n];
    arrInp;
    reverseArr(arr, 0, n-1);
    for(auto i : arr) cout << i << " ";
    el;
}

int main(){
    int t = 1;     // Change the testcase according to question...
    cin >> t;
    
    while(t--){
        solve();
    }
    
    return 0;
}