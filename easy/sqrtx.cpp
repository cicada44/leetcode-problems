//-----------------------------------------------------------------------------
//
// Source code for 'Sqrt(x)' task
// URL: https://leetcode.com/problems/sqrtx/
//
//-----------------------------------------------------------------------------

class Solution {
  public:
    int mySqrt(int x) {
        if (x == 0) return x;

        int first = 1, last = x, medium;

        while (first <= last) {
            medium = first + (last - first) / 2;
            if (medium == x / medium)
                return medium;
            else if (medium > x / medium)
                last = medium - 1;
            else
                first = medium + 1;
        }

        return last;
    }
};

int main() {}
