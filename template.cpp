#include <bits/stdc++.h>
using namespace std;

using ll = long long;


// construct a permutation (p) array of length n such that 
// so n = 4 would be pi is 4 and i = 1 so 4*1 = 4. then times 
// i see so given any n= i go down 1 value until all digits if they are composite given their p value times their 
// index value equals a composite number 
// so for n=4 = [4, 3, 2 , 1] works due to 4x1= 4, 3x2 = 6, 2x3 =6, 1x4 =4. All composite 
// for n=5 it needs to be rearranged as [4, 5, 3, 1, 2] 4x1, 5x2, 3x3, 1x4, 2x5
// 5 would work in every position except for i = 1 here. 
// 1 here would only work in the 4th position 
//composite number if it has a divisor besides one.  15 has 5  and 3 so its not composite

// so any n > 3 would be 4 3 2 1 , so it can go in order 
// then check if each value is composite 
// if a value is no composite then switch it's value 

// ok so  i have all the digits in order now so where does it break

// if its 4 it works in order if its 5 then [5, 4, 3, 2, 1] 1 times 5 doesn't work due to it bneing composite
// and 5 times 1 doesn't work. in the example case they just swapped 5 and 4 and 1 and 2.
// i can try something similar for n = 6. So [6, 5, 4, 3, 2, 1], oh so for even all digits work all the time. 
// [8, 7, 6, 5, 4, 3, 2, 1], so for odd [7, 6, 5, 4, 3, 2, 1] , so for this i switch the last 2 digits, and first two digits
// as they would only be composite 
void solve() {
int n; 
cin >> n;
vector<ll>a; 

if (n <= 3){ cout<<-1 <<"\n"; return; }


for (int i = n; i>=1; i--){
    a.push_back(i);
}

if (n%2 == 0){ 
    for (int i = 0; i<n; i++){
        cout<< a[i] << " "; 
    }
    cout << "\n";
    return; 
}

swap(a[0], a[1]);
swap(a[n-2], a[n-1]);

for (int i = 0; i<n; i++){
        cout<< a[i] << " "; 
    }
cout << "\n"; 



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}