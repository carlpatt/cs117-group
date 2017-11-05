/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  #
 *
 *        Version:  1.0
 *        Created:  11/04/2017 10:10:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (Carl Patterson), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "getWords.h"

using namespace std;

int main() {
    ifstream file;
    if(!file) { 
        cout << "Unable to Open file" << endl;
        exit(EXIT_FAILURE);
    }
    //file.open("") 
    

    cout << "test" << endl; 
    return 0;
}
