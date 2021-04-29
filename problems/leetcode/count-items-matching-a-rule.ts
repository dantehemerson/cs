class Solution {
private:
    map<string, size_t> typeMap = {
        { "type", 0 },
        { "color", 1 },
        { "name", 2 },
    };
    
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int counter = 0;
        for(auto itemIt = items.begin(); itemIt != items.end(); itemIt++) {
            if(itemIt->at(typeMap[ruleKey]) == ruleValue) counter++;
        }
        return counter;
    }
};
