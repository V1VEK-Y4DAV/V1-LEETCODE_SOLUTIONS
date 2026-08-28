class Solution {
private:
    pair<int, int> first_second(vector<int>& stones) {
    int highest = 0;
    int secondHighest = 1;

    for (int i = 1; i < stones.size(); i++) {

        // New highest found
        if (stones[i] > stones[highest]) {
            secondHighest = highest;
            highest = i;
        }

        // Current element can be second highest
        else if (i != highest && stones[i] >= stones[secondHighest]) {
            secondHighest = i;
        }
    }

    return {highest, secondHighest};
}


public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 2) {
            return abs(stones[0] - stones[1]);
        }

        while (stones.size() > 1) {

            pair<int, int> p = first_second(stones);

            int high = p.first;
            int s_high = p.second;

            int temp = stones[high] - stones[s_high];
            // cout << stones[high] << " " << stones[s_high] << endl;
            // Erase larger index first
            if (high > s_high) {
                stones.erase(stones.begin() + high);
                stones.erase(stones.begin() + s_high);
            }
            else {
                stones.erase(stones.begin() + s_high);
                stones.erase(stones.begin() + high);
            }


                stones.push_back(temp);

        }
        return stones[0];
    }
};
