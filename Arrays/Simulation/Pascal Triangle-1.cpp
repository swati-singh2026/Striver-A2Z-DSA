class Solution {
public:
    int pascalTriangleI(int r, int c) {

        long long ans = 1;

        int n = r - 1;
        int k = c - 1;

        for (int i = 0; i < k; i++) {
            ans = ans * (n - i);
            ans = ans / (i + 1);
        }

        return (int)ans;
    }
};
