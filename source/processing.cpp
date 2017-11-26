#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "processing.h"


using namespace std;

void removePunct(string &str) {
    char charsToRemove[] = "!@#$%^&*():/><.,\"";
    for ( unsigned int i = 0; i < strlen(charsToRemove); ++i ) {
        str.erase(remove(str.begin(), str.end(), charsToRemove[i]), str.end() );
    }
}
/* 
void rmvpct(vector<string>& v) {
    char charsToRemove[] = "!@#$%^&*():/><.,\"";
    for(unsigned int x=0; x < v.size(); x++) {
        for ( unsigned int i = 0; i < strlen(charsToRemove); ++i ) {
            v[x].erase(remove(v[x].begin(), v[x].end(), charsToRemove[i]), v[x].end() );
        }
    }
}
*/
void getWords(ifstream& inp, vector<string>& v) {

    string x;
    while(inp >> x) {
        separateWords(x, v);
        removePunct(x);
        v.push_back(x);
    }

}

void separateWords(string& str, vector<string>& a) {
    string tmp, punct = ".,:;!?";    
    for(unsigned int i =0; i < str.size(); i++) {
        if(ispunct(str[i])) {
            tmp = str.substr(i+1, str.size());
            a.push_back(tmp);
            str.erase(i, str.size());
        }
    } 
}
