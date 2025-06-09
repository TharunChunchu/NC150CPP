#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
//use set track the elements we have already visited
bool contains_duplicate(vector<int> v){
    unordered_set<int> us;
    for(auto i:v){
        if(us.find(i)!=us.end()){
            return false;
        }
        us.insert(i);
    }
    return true;
}
int main(){
    vector<int> v1{1,2,3,2};  
    vector<int> v2{1,2,3};  

    cout<<contains_duplicate(v1)<<endl;  
    cout<<contains_duplicate(v2)<<endl;  

    return 0;
}