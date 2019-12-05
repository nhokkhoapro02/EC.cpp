#include <iostream>
#include <cstring>

using namespace std;
int main(){
// Size for the string
const int size = 200;
char input[size];
// Ask user to input their sentences
cout <<"Input your senctence:"<<endl;
getline(cin, input);
// Show user's sentences after fixed
cout <<"Your sentences after modified is are:"<< capital(input)<<endl;
return 0;
}
// Purpose: This function will capitalize name, and words after punctuation
// Input: sentences with all lowercase words
// Output: modified sentences with uppercase word on names and words after punctuation.

// Header:
char capital(char sentence)
void test_capital()

// Test
  // Input                             Output
  // "my name is tom. i'm 20"          "My name is Tom. I'm 20
 
// Template:
// int i=0;
// while (i<=s.length()){
  // ...s[i]...
  // i=i+1;
//}

// Pseudocode:
// 1. Detect punctuations, and names
// 2. Capitalize first letter of words that come after punctuation
// 3. Display new sentences  


