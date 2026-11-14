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
// so first number i can add s or subtract as it won't matter 
// so, go in a loop for each digit, and either add or subtract then update s. 


// so this only adds as of now, the way to find max digit is to just use the max function on the array. 

// given any array with any digits how do i maximize the the updated array on the last digit which i can return

// so [3 , -5, 1, -4 ,2 ] i can do -5-3 get -8, then 1--5 = 6 then UA would be 3, -8, 6 = 1, -4 + 1= -3 , then 2--2 =4. 
// so trying to maximize the digits doesn't always work, as max in the last one is 6.
// however, if i did -5-3 =- 8, then i did 1+-5 i would have -4 < 6 thought this allows s to be -9. add taht to -4 i get -13. 
// s would be -9+-13 so -22, then 2--22 = 24 which 24> 4. From before. so one desicion led to it be 20 higher. 
// so maybe the trick is to maximize s.  

for (int i=0; i<n; i++){

     a[i] = a[i] + s; 

     s += a[i];   




    }






} 


}





