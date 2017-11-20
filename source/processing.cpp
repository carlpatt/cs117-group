#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "processing.h"


using namespace std;
/*
void removePunct(string &str) {
    char charsToRemove[] = "!@#$%^&*():/><.,\"";
    for ( unsigned int i = 0; i < strlen(charsToRemove); ++i ) {
        str.erase(remove(str.begin(), str.end(), charsToRemove[i]), str.end() );
    }
}*/

void rmvpct(vector<string>& v) {
    char charsToRemove[] = "!@#$%^&*():/><.,\"";
    for(unsigned int x=0; x < v.size(); x++) {
        for ( unsigned int i = 0; i < strlen(charsToRemove); ++i ) {
            v[x].erase(remove(v[x].begin(), v[x].end(), charsToRemove[i]), v[x].end() );
        }
    }
}

void getWords(ifstream& inp, vector<string>& v) {

    string x;
    while(inp >> x) {
        //removePunct(x);
        v.push_back(x);
    }

}


