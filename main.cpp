#include "Finder.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    Finder f;
    string s1 = "4634554567";
    string s2 = "45689";
    vector<int> s3;
    s3 = f.findSubstrings(s1,s2);
    for(int i=0; i<s3.size();i++){
        cout<<s3.at(i)<<endl;
    }
    return 0;
}