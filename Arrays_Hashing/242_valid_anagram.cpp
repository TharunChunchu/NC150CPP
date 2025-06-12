#include<iostream>
#include<unordered_map>
using namespace std;
// build freq map with string 1 and string 2 reduces it when we find anamoly we return false else at the end we return true
bool is_anagram(string s,string t){
    unordered_map<char,int> ump;
    for(auto i:s){
        ump[i]++;
    }
    for(auto i:t){
        if(ump.find(i)==ump.end() || ump[i]==0)return false;
        ump[i]--;
    }
    for(auto i:ump){
     if(i.second>0)return false;   
    }
    return true;
}
int main(){
    string s1="anagram",t1="nagaram",s2="rat",t2="car";
    cout<<is_anagram(s1,t1)<<endl;
    cout<<is_anagram(s2,t2)<<endl;

    return 0;
}