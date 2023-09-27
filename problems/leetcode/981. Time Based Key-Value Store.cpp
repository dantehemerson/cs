class TimeMap {
private:
    unordered_map<string, vector<tuple<string, int>>> mapa;
public:
    TimeMap() {

    }

    void set(string key, string value, int timestamp) {
        if (mapa.count(key)) {
            mapa[key].push_back(make_tuple(value, timestamp));
        } else {
            mapa.emplace(key,
                vector<tuple<string, int>>{ make_tuple(value, timestamp) }
            );
        }
    }

    string get(string key, int timestamp) {
        if (!mapa.count(key)) return "";

        vector<tuple<string, int>>& v = mapa[key];

        int l = 0;
        int r = v.size() - 1;

        int idxResult = -1;

        while (l <= r) {
            int m = l + (r - l) / 2;

            if (get<1>(v[m]) == timestamp) {
                return get<0>(v[m]);
            } else if (get<1>(v[m]) <= timestamp) {
                idxResult = m;
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

       return idxResult != -1 ? get<0>(v[idxResult]) : "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
