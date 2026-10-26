#include <iostream>
using namespace std; 

int main(){ 
int t;
cin>>t; 

while(t--){ 

int n, k; 
int max = 0; 
int x = 0; 
int y = 0; 
cin >> n >> k; 

if (n==1 && k==1) {
 cout<<2<<"\n"; 
}

else if  ( n == k ) {
 max = n*2; 
cout<< max << "\n";
}

else{ 

x = (k-1)*2; 
y = n-(k-1);

max = (1<<y) + x; 

cout<<max<<"\n"; 
}
}
return 0; 

} 


