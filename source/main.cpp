#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <cctype>
#include "inputUtils.h"
#include "outputUtils.h"
#include "processing.h"

using namespace std;

int main() {
    vector<string> words;
    ifstream file;
    //string filename = getFilename();
    file.open(getFilename().c_str());
    if(!file) { 
        cout << "Unable to Open file" << endl;
        exit(EXIT_FAILURE);
    }
    getWords(file, words);
    //rmvpct(words);
    printVectors(words);

    return 0;
}
