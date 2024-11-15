#include <iostream>
using namespace std;

string word1= "abcd";
string word2="pq";
string merged;

int main()
{
    size_t maxLength = max(word1.length(), word2.length());
    
    // Loop up to the maximum length
    for (size_t i = 0; i < maxLength; i++) {
        if (i < word1.length()) {
            merged += word1[i];
        }
        if (i < word2.length()) {
            merged += word2[i];
        }
    }
    
    cout << "Merged word is: " << merged << endl;
    return 0;
}