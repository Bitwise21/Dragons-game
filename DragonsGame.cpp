#include <bits/stdc++.h>   // Includes all standard C++ libraries
using namespace std;

int main () {
    int a, b;               // a = Kirito's initial strength, b = number of dragons
    cin >> a >> b;

    // Vector of pairs:
    // first  -> dragon's strength (xi)
    // second -> bonus strength gained after defeating it (yi)
    vector<pair<int,int>> str(b);

    // Input dragon data
    for(int i = 0; i < b; i++){
        cin >> str[i].first >> str[i].second;
    }

    // Sort dragons by their strength in ascending order
    // This ensures Kirito fights weaker dragons first
    sort(str.begin(), str.end());

    // Try to defeat each dragon in sorted order
    for(int i = 0; i < b; i++){
        if(a > str[i].first){        // If Kirito's strength is greater
            a += str[i].second;      // Defeat dragon and gain bonus
        } else {
            cout << "NO" << endl;    // Cannot defeat this dragon
            return 0;                // End program
        }
    }

    // If all dragons are defeated
    cout << "YES";
    return 0;
}
