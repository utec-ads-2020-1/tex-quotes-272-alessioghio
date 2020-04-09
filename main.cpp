#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string input;
    int idx = -1;
    while (getline(cin, input)){
        for (string::iterator i = input.begin(); i != input.end(); ++i){
            if (*i == '\"'){
                idx++;
                if((idx%2 == 0) || (idx==0)){
                    *i = '`';
                    input.insert(i,'`');
                }else{
                    *i = '\'';
                    input.insert(i,'\'');
                }
            }
        }
        cout << input << endl;
        
    }
    
    return EXIT_SUCCESS;
}