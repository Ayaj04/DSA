class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {

        int t = 0;
        int l = 0, r = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'L') {
                l++;
            } else if (moves[i] == 'R') {
                r++;
            }
        }

        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'L') {
                t = t - 1;
            } else if (moves[i] == 'R') {
                t = t + 1;
            } else if (moves[i] == '_') {
                if (l > r) {
                    t--;
                } else {
                    t++;
                }
            }
        }
        return t = abs(t);
    }
};