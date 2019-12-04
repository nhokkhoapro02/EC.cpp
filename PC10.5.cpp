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
char capital(char sentence){
