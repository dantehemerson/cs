class OrderedStream {
public:
    vector<string> values;
    int ptr;
  
    OrderedStream(int n) {
      values = vector<string>(n);
      ptr = 0;
    }
    
    vector<string> insert(int idKey, string value) {
      values[idKey - 1] = value;  
      vector<string> result;
      for(; ptr < values.size() && values[ptr] != ""; ptr++) result.push_back(values[ptr]);
      return result; 
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
