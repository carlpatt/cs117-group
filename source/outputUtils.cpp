#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>

using namespace std;

void printVectors(vector<string> v) {
    for(unsigned int i = 0; i < v.size(); i++) {
        cout << v.at(i) << endl;
    }
}

