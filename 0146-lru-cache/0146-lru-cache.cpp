class LRUCache {
    int capacity;
    list<pair<int,int>> l;
    unordered_map<int,list<pair<int,int>>::iterator> ump;
public:

    LRUCache(int capacity) {
        this->capacity=capacity;
    }
    
    int get(int key) {
        if(ump.find(key)==ump.end()){
            return -1;
        }
        l.push_front({ump[key]->first,ump[key]->second});
        l.erase(ump[key]);
        ump[key]=l.begin(); 
        return ump[key]->second;
    }
    
    void put(int key, int value) {
        if(ump.find(key)==ump.end()){
            if(l.size()>=capacity){
                ump.erase(l.back().first);
                l.pop_back();
            }
        }else{
            l.erase(ump[key]);
        }
        l.push_front({key,value});
        ump[key]=l.begin(); 
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */