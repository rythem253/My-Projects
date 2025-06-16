#include <string>
#include <vector>
#include <iostream>
using namespace std;
 
class Solution {
public:
    void reverseString() {
        string s;
        
        cout << "Enter a word to reverse: ";
        cin >> s;

        for (int i = s.size() - 1; i >= 0; i--) {
            cout << s[i];
        }
        cout << endl;  // just to add a newline after output
    }
};

int main() {
    Solution sol;
    sol.reverseString();
    return 0;
}
