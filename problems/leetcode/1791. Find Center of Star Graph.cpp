class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // Given that it's a valid star graph, we can find the solution only with 2 edges.
        
        // It's 1 if the the Vi(position 1 in all edges) from an edge is in another edge.
        int indexCenter = edges[0][1] == edges[1][0] || edges[0][1] == edges[1][1];
        
        
        return edges[0][indexCenter];
    }
};
