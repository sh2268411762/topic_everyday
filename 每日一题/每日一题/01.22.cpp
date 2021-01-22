#include <iostream>
#include <vector>
using namespace std;


class Bonus {
public:
    int getMost(vector<vector<int> > board) {
        // write code here
        if (board.empty() || board[0].empty()) {
            return 0;
        }
        vector<int> dp(board.size(), 0);
        for (auto v : board) {
            dp[0] += v[0];
            for (int i = 1; i < v.size(); i++) {
                dp[i] = max(dp[i - 1], dp[i]) + v[i];
            }
        }
        return dp.back();
    }
};

int main()
{

	return 0;
}