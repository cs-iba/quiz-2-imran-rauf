//  Write a function to find the longest common prefix string amongst an array of strings.
//  If there is no common prefix, return an empty string "".

#include <iostream>
#include <vector>
#include <string>

using std::cout, std::vector, std::string;

//  strs[i] consists of only lowercase English letters.
string longestCommonPrefix(const vector<string>& strs) {
  // complete this function        
  // ...
  
}

int main() {
  // Example 1
  vector<string> strs1 = {"flower","flow","flight"};
  cout << longestCommonPrefix(strs1) << "\n";  // output "fl"

  // Example 2
  vector<string> strs2 = {"dog","racecar","car"};
  cout << longestCommonPrefix(strs2) << "\n";  // output "" as there is no common prefix among the input strings.

}

