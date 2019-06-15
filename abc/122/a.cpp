#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string str = "";
    cin >> str;
    std::map<char, char> dna;
    dna['A'] = 'T';
    dna['C'] = 'G';
    dna['G'] = 'C';
    dna['T'] = 'A';

    for(int i = 0; i < str.size(); i++){
        cout << dna[str.at(i)];
    }
    cout << endl;
}