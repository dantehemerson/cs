class Solution {
public:
    int minPartitions(string n) {
        char max = '0';
        for(char &c: n) {
          if(c > max) max = c;
        }
      
        return int(max - '0');
    }
};
