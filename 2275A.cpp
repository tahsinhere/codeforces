#include <bits/stdc++.h> 
using namespace std; 



int main() {
int t;
cin >> t;

while(t--){

int R;
int x;
int y;

cin >> x; 
cin >> y;
cin >> R; 

// since its a circle with coordinates xy being the center, and with radius of R, any point on the circumference 
// suffice. Therefore, just go down left or right or up or down R distance. 

y = R + y; 

cout << x << " " << y << "\n"; 

} 
return 0; 








}
