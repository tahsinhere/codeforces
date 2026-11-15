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

// so [3 , -5, 1, -4 , 2] i can do -5-3 get -8, then 1--5 = 6 then UA would be 3, -8, 6 = 1, -4 + 1= -3 , then 2--2 =4. 
// so trying to maximize the digits doesn't always work, as max in the last one is 6.
// however, if i did -5-3 =- 8, then i did 1+-5 i would have -4 < 6 thought this allows s to be -9. add taht to -4 i get -13. 
// s would be -9+-13 so -22, then 2--22 = 24 which 24> 4. From before. so one desicion led to it be 20 higher. 
// so maybe the trick is to maximize s.  

// what is negative and positive [1 , -3, 3] s=0 well,
// -3 - 1 = -4 and s = -3 . [1, -4, 3] -> 3--3 = 6 . or -3+1= -2, [3, -2, 3] s=1 . 3+1= 4. 

// so, no matter what if last number is positive then number can increased no matter if s is + or -. 
// if last number is negative then -3 + 1 = -2. in othercase -3--3 = 0 . 

// [ 1, 3, -4 ] so 4,  -4+5 = 1 or -4-5= -9. s is 5 in both cases, if last is negative and s is postivie then subtracting
// would never work there u need to add no matter what, and if s is positive or negative in this, it needs to be max


// ok new plan instead , i fcous on the current a_i and s to maximize the current a_i or s as i do not have knowledge 
// of the later numbers anyways. 
// [1, -3, 3]

// so current if ai -3 , s = 1, . I should always maximize s magnitude as that would allow next nunber to maximize
// so -3-1, so if a_i is negative and s positive then subtract -4, now s is -3 . so if a_i is positive, so 3, and 
// s is negative then always subtract also so 3--3 = 6 . 

//  since i can know if an-1 last value  is negative or positive, if it is positive then maxmize magnitude of s and subtract , 
// if it is negative and s maximizes negative magnitude then subtract, if it maximizes positive then add. 

// so, instead i can just focus maximizing magnitude of s, as even if last digit is negative or postivie, l - - s  or l+s,
// magnitude of s determines how max it can be come, as if its negative then -l -- s (this won't work if s < l in magntiude)
//  or -l + s (again s>-l in magnitude )

// so then [1, -3, 4, -5] -3 - 1 = -4 + 1 = s = -3.[1, -4, 4, -5] 4--3 = 7 and s is 4. or 4-3 = 1 s -2. so i choose the first
// one as it increases s magnitude so [1, -4, 7, -5] s = 4 -5+4 = -1 and t hats highest. so max is 7 . 




//



for (int i=0; i<n; i++){

     a[i] = a[i] + s; 

     s += a[i];   


 

    } 


} 


}





