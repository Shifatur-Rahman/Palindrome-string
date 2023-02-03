#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){

	vector<string>words = {"abc","car","ada","racecar","cool"};




    for(int i=0; i<words.size(); i++){
            string temp1 = words[i];
            reverse(temp1.begin(), temp1.end());
            if(temp1 == words[i]) return words[i];
        }


}
