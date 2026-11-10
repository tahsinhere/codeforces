#include <iostream> 
#include <algorithm> 
using namespace std; 


int main() { 
int t; 
cin>>t;


while (t--){ 
int n; 
int a[3]; 
int strong;
int w = 0; 

cin>>n;  
cin>>a[0]>>a[1]>>a[2]; 


strong = min({a[0], a[1], a[2]}); 

w = n-strong; 

cout << w << "\n" ; 


}
return 0; 

}
