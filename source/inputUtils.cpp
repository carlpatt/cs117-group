#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>

using namespace std;

string getFilename() {
    string filename;
    cout << "Please enter the name of the file: ";
    cin >> filename;
    return filename;
}

