#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string input;
    int idx = 0, idx2 = 0;
    while (getline(cin, input)){
        string::iterator init = input.begin(), end = input.end(), i;
        i = init;
        while (i != end){
            if (*i == '\"'){
                if((idx%2 == 0) || (idx==0)){
                    *i = '`';
                    input.insert(i,'`');
                }else{
                    *i = '\'';
                    input.insert(i,'\'');
                }
            idx++; // Use idx to determine if ` or ' should be placed
            // Since string is updated during loop, string limits have to be updated
            init = input.begin();
            end = input.end();
            i = init+idx2; // Use idx2 so it does not have to start the loop from the beginning
            }
        i++;
        idx2++;
        }
        idx2 = 0; // idx2 is per input line, so it has to be reseted
        cout << input << endl;
    }
    return EXIT_SUCCESS;
}