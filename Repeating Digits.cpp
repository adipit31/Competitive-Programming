#include <bits/stdc++.h>
using namespace std;

int count_repeating_digits(long long data) {
    unordered_map<int, int> mp; 
    int count = 0;


    while (data > 0) {
        int current_no = data % 10;
        if(mp.count(current_no)){
        mp[current_no]++;
        }
        else{
            mp[current_no]=1;
        }
        data /= 10;
    }
    for (auto m : mp) {
        if (m.second > 1) { 
            count++;
         }
    }
    return count;
}

int main() {
    long long data;
    cout << "Enter data:" << endl;
    cin >> data;
    int result = count_repeating_digits(data);
    cout << "Count of repeating digits: " << result << endl;
    return 0;
}
