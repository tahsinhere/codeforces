#include <bits/stdc++.h> 

using namespace std; 

int main(){ 
int t; 
cin >> t; 
//test cases

while (t--) { 

// length of array 
int n; 
// take into env
cin >> n; 
// initialize long long due to 64 bit integer possibility 

vector<long long> a(n); 

// take each value of the array into env  
for (int i=0; i<n; i++){ 
cin >> a[i]; 
}

// so s would be ai + ai1 ... of all previous values 
// however, the added values must all be added after they have gone through its own current_digit + or - s 
// so, start with first, it would be [1, 2, 3], then a_current would be 1 . but 1 cannot be modified due to no preivous digits
// so, s would initlize on a_i then it would need to be updated. So for a_1 it would be 2 and for first iteration 
// it would be 2 + or - 1, and in this case adding is the right choice, so now a_1 would be 3. this updates the array
// to be [1, 3. 3]. Now s would need to change to be a0 + a_current - 1 . then s would update to be 4. now 3 +4 is 7 and array updates to
// be [1 ,3, 7] thus max is 7 and s would update to be 11. 

long long s = 0;










} 


}





