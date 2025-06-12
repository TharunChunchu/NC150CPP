#include<iostream>

using namespace std;
bool isPalindrome(string s1) {
    string s="";
    for(auto i:s1){
        if(isalnum(i))s+=tolower(i);
    }
   int i=0;
   int j=s.size()-1;
   while(i<j){
    if(s[i]!=s[j])return false;
    i++;
    j--;
   }
   return true;

}
int main(){
    cout<<isPalindrome("thaht")<<endl;
    cout<<isPalindrome("thah")<<endl;

    return 0;
}