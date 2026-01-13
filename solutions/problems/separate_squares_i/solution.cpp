class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double low = 1e9, high = -1e9, total = 0.0;

        for (auto &s : squares) {
            low = min(low, (double)s[1]);
            high = max(high, (double)s[1] + s[2]);
            total += (double)s[2] * s[2];
        }

        double target = total / 2.0;

        for (int i = 0; i < 100; i++) {
            double mid = (low + high) / 2.0;
            double below = 0.0;

            for (auto &s : squares) {
                double y = s[1], l = s[2], top = y + l;
                if (top <= mid)
                    below += l * l;
                else if (y < mid)
                    below += l * (mid - y);
            }

            if (below < target)
                low = mid;
            else
                high = mid;
        }

        return low;
    }
};
