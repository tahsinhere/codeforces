#include <iostream>
#include <algorithm>
using namespace std; 
// Perfect Sandwiches 


int main() {
int a,b;
int t; 

cin >> t; 


// amount of sandwiches 
int k = 0; 


for (int i = 0; i<t; i++) {
// read the variables 
cin>>a>>b; 

if (a<=b || b==0){
cout<<-1<<"\n"; 
}
else{

k = min(a-b, b); 

cout << k << "\n"; 
}
} 

return 0; 

}

