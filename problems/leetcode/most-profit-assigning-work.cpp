class Solution {
public:
    // template<typename T>
    // void print_queue(T q) { // NB: pass by value so the print uses a copy
    //   while(!q.empty()) {
    //       std::cout << '{' << q.top().first << ", " << q.top().second << "}  ";
    //       q.pop();
    //   }
    //   std::cout << '\n';
    // }
  
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        priority_queue<pair<int,int>> pq;
      
        for(int i=0;i<profit.size();i++) {
            pq.push({ profit[i], difficulty[i] });
        }
        
        // print_queue(pq);
      
        sort(worker.begin(),worker.end(), greater<int>());
      
        int profitSum = 0;
        for(int i = 0; i < worker.size();) {
          while(!pq.empty() && pq.top().second > worker[i]) {
            pq.pop();
          }
          
          if(!pq.empty()) {
            profitSum += pq.top().first;
            i++;
          } else {
            break;
          }
          
        }
      
        return profitSum;
    }
};
