/*
 * =====================================================================================
 *
 *       Filename:  getWords.cpp
 *
 *    Description:  
 *        Version:  1.0
 *        Created:  11/04/2017 11:29:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
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

vector<string> getWords(ifstream& inp) {

    vector<string> s;
    string x;
    while(inp) {
        inp >> x;
        s.push_back(x);
    }

    return s;
}
