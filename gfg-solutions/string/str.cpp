#include<iostream>
#include <unordered_map>
#include <string>
using namespace std;

string removeDuplicates(string &s) {
        // code here
        unordered_map<char,int>mpp;
        string ans = "";  
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            if(mpp[s[i]]==1){
                ans = ans + s[i];
            }
        }
        return ans;
    }

int main(){
    string s = "HaPpyNewYear";
    cout<<removeDuplicates(s);
}