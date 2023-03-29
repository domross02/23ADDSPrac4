#include "Finder-1.h"
#include <iostream>
#include <vector>
using namespace std;
int main(){
    Finder f;
    vector<int> s1(4,6,3,4,5,5,4,5,6,7);
    vector<int> s2(4,5,6,8,9);

    for(int i=0; i<s2.size();i++){
        cout<<s2.at(i);
    }

}