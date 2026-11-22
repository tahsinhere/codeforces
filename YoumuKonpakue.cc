#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {

// she can charge or attack, it would be better for her to charge if its x>1
// because if x is 2 she charges once, attack -> 2 then one move done
// if its 3 charges twice a->3, one move done
// if its 4 charges 3 times a-> one move done
// if its 5  charges 4 times a-> one move done
// if its 6 charges 5 times, a-> one move done
// if its 10 times. charges 9 times , attack one so that would be 10 moves
// however for x = 10, there is a more minimum route, as she could charge 4 times, a starts at 1
// so then that would be 5+4+3 > 10 , done, in 7 moves. if she charged 3 times
// then it would be 4+3+2+1 = 10, which would also be 7. 
// for 11 she would charge 4 times , then 5+4+3 > 11 which is 7 moves
// but for 11 if its 5 charges, then it would be 6+5 = 11. in whihc case it would also be 7 moves
// if its 12 then 6 charges 7+6 so 8 
// if its 5 charges then 5+4+3 which is 8
// if its 7 then 8+7 = 15 so then 9 

// so the least move can be two combinations, a charge aount then - 1 but that doesn't matter
// key is to then maximize charges to the minimum amount possible for two digits to be >= than x. 
// so then one charge varaible so add 1 to attack in a loop of x , if attack + attack -1 >= x then 
// count moves per charge, then add +2 moves 


// new approach 
// if each charge needs to be maximized or does it. for 20 10 charges would be 11 + 10 which is 12 moves,
// however, 6 charges would be 7+6+5+4 which would be only 10 moves, so charges need to be maximized, howver, 
// based on the amount of digts that could be added and each addition is a move, so find hte minimum charges + moves
// to >= x 
// so add a charge, then check if attack + attack - i , is >= x. however this would go until it is . So, then put
// them all in a dynamic array, and output the min. 

// x is the max health
// so should be equal or greater 
// a >= x 
// then c is charge which increents a , in each move its either x-a & a-1  or a+1 , so both results in moves++
// first my old method was go in a loop x amount and add 1 to a and moves++ then check if a is larger than but thats flawed.
// instead i can go into another loop that adds a + a-1 until a =0 then check if its equal to or greater than x
// if yes put it in an dynamic array, then return min of that array which should work. 


int x; 
int a = 1; //attack
cin >> x; 




if (x==1){  cout << 1 << "\n"; return; }
if (x==2){  cout << 2 << "\n"; return; }
if (x==3){  cout << 3 << "\n"; return; }
if (x==4){  cout << 4 << "\n"; return; }

int moves  =  0;

for (int i = 1; i<x; i++ ){

for (int r = a-1; i<r; r++){
    if (a + (r) >= x){
        cout << moves + 2 << "\n";  
        return;
    }
} 
    a++; 
    moves++;


}




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