#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    int total_sum = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        total_sum += coins[i];
    }
    
    sort(coins.rbegin(), coins.rend()); 
    
    int sum_taken = 0;
    int coins_taken = 0;
    
    for (int coin : coins) {
        sum_taken += coin;
        coins_taken++;
        if (sum_taken > total_sum - sum_taken) {
            break;
        }
    }
    
    cout << coins_taken << endl;
    
    return 0;
}
