#include <iostream>
#include <string>
using namespace std;

void removeDup(string str, string ans, int i, bool map[]) {
    // Base Case
    if (i == str.length()) {
        cout << "Resulting String: " << ans << endl;
        return;
    }

    // Current character and its corresponding index in the map array
    char ch = str[i];
    int mapIndex = ch - 'a';

    // Check if the character is already present (Duplicate)
    if (map[mapIndex] == true) {
        // Skip the character and move to the next
        removeDup(str, ans, i + 1, map);
    }
    // If it's a unique character
    else {
        // Mark it as seen in the map
        map[mapIndex] = true;
        // Include it in the answer string and recurse
        removeDup(str, ans + ch, i + 1, map);
    }
}

int main() {
    string str = "appnnacollege";
    string ans = "";

    // Initialize boolean map with false
    bool map[26] = {false};

    removeDup(str, ans, 0, map);

    return 0;
}
