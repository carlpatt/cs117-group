#ifndef PROCESSING_H_INCLUDED_
#define PROCESSING_H_INCLUDED_

using namespace std;

//gets the words from the text file
void getWords(ifstream& inp, vector<string>& v);

//counts the number of words that are in the text file
int countWords(const vector<string>& w);

//removes punctuation from the words.
void removePunct(string& str);

//temporary placeholder for testing
void rmvpct(vector<string>& v);

//separates words that are joined incorrectly by punctuation
void separateWords(string& str, vector<string>& a);

#endif
