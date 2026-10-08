class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();

        vector<pair<int, int>> seeds;

        for (int i = 0; i < n; i++) {
            seeds.push_back({growTime[i], plantTime[i]});
        }

        sort(seeds.rbegin(), seeds.rend());

        int plantingDays = 0;
        int answer = 0;

        for (auto& seed : seeds) {
            int grow = seed.first;
            int plant = seed.second;

            plantingDays += plant;

            answer = max(answer, plantingDays + grow);
        }

        return answer;
    }
};