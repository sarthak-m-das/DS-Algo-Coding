//https://leetcode.com/problems/insert-delete-getrandom-o1/description/?envType=study-plan-v2&envId=top-interview-150

class RandomizedSet {
public:
    unordered_map<int,int> hashMap;
    vector<int> v;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(hashMap.find(val) != hashMap.end())
            return false;
        else {
            v.push_back(val);
            hashMap[val]=v.size()-1;
            return true;
        }
    }
    
    bool remove(int val) {
        if(hashMap.find(val) != hashMap.end()) {
            int l = v.back();
            v[hashMap[val]] = l;
            hashMap[l] = hashMap[val];
            v.pop_back();
            hashMap.erase(val);
            return true;
        } else {
            return false;
        }
    }
    
    int getRandom() {
        int r = rand();
        int l=r%v.size();
        return v[l];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */