#include <iostream> 
#include <algorithm> 
using namespace std; 


int main() { 
int t; 
cin>>t;

//Among all scoreboards, find the min of weak participants 

//Essentially the first input is the amount of participants like 4 participants then each a_i can only go from 0-2 for the 3 problems and each a is the amount of participants that solved it correctly. If 4, 4, 4 then no weak, if 4,3, 3 then 2 weak, 

//I assume the trick is that the lowest amount in any is the max amount of weak participants. Meaning if 6 participants then its 6, 0, 6 then all 6 are weak, if its 6, 5, 4, then 2 are weak. 

//A better method would be to go by order, first contestant will go through each problem and if they solve then it increments by one. So, for 4, 3, 2 , first is guaranteed to solve all of them, second is also, but third is not, as third didn’t solve the 3rd problem so one weak contest. Now the 4th one gets the second one wrong and the third one wrong, so two weak contestants.

//So, the solution would be 5, 3, 0. To find the strong contestants, it would be 0 strong as none solved the 3rd problem. Therefore, 5 weak contestants. If it's 8 contestants and 7 4 5. This has max 4 contestants so that means 8-4 = 4 weak contestants. 

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
