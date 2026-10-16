#include <unordered_map>
#include <list>
using namespace std;

class LRUCache {
private:
    int capacity;

    // Stores {key, value}, from least to most recently used.
    list<pair<int, int>> cache;

    // Maps each key to its position in the list.
    unordered_map<int, list<pair<int, int>>::iterator> mp;

public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) {
            return -1;
        }
        auto it = mp[key];
        int value = it->second;
        cache.splice(cache.end(), cache, it);

        return value;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            auto it = mp[key];
            it->second = value;
            cache.splice(cache.end(), cache, it);
            return;
        }
        if (cache.size() == capacity) {
            int lruKey = cache.front().first;
            mp.erase(lruKey);
            cache.pop_front();
        }
        cache.push_back({key, value});
        mp[key] = prev(cache.end());

    }
};
