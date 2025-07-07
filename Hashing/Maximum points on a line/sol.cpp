class Solution {
public:
    int maximumPointsOnALine(vector<vector<int>>& points) {
        int n = points.size();
        if (n <= 2) return n;

        int answer = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<double, int> slopeCount;
            int same = 1;   // Count the base point itself

            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                int dx = points[j][0] - points[i][0];
                int dy = points[j][1] - points[i][1];

                // Handle vertical line separately (to avoid division by zero)
                double slope;
                if (dx == 0) {
                    slope = 1e9;  // a large number to represent infinity
                } else {
                    slope = (double)dy / dx;
                }

                slopeCount[slope]++;
            }

            int maxSlopePoints = 0;
            for (auto it : slopeCount) {
                maxSlopePoints = max(maxSlopePoints, it.second);
            }

            answer = max(answer, maxSlopePoints + same);
        }

        return answer;
    }
};
