// #include<iostream>
// using namespace std;
// class Solution{
//     public:
//     string modify(string s){
//         // crate an empty string to store the result
//         string result;

//         // iterate over each chartert in the input string
//         for (char ch:s)
//         {
//     if (ch!=' ')
//     {
//         result +=ch;
//     }
    
//         }
//         return result;
//     }
// };
// int main(){
//     Solution sol;
//     string s= "greeks for grreks";
//     cout<<sol.modify(s)<<endl;
//     return 0;
// }



#include <iostream>
using namespace std;

string modify(string s) {
    // Create an empty string to store the result
    string result;

    // Iterate over each character in the input string
    for (char ch : s) {
        // If the character is not a space, append it to the result
        if (ch != ' ') {
            result += ch;
        }
    }

    // Return the string without spaces
    return result;
}

int main() {
    string s = "geeks  for geeks";  // You can change the input string here
    cout << modify(s) << endl;      // Output will be: geeksforgeeks
    return 0;
}
