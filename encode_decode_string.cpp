#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>

using namespace std;
//key is to add len and delimeter and str later while encode (enable skipping reading the string) 
class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(auto i:strs){
            res+=to_string(i.size())+";"+i;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        cout<<s<<endl;
        for(int i=0;i<s.size();i++){
            int bi=i;
            string num="";
            while(s[i]!=';'){
                num+=s[i];
                i++;
            }

            int n=stoi(num);
            string t=s.substr(bi+num.size()+1,n);
            cout<<t<<endl;
            i=bi+num.size()+n;
        }
        return res;
    }
};

int main(){
    Solution s1;
    vector<string> v1{"neet","code","love","you"};
    string s=s1.encode(v1);
    vector<string> v = s1.decode(s);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

