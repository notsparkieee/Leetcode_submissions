class Solution {
public:
    long long earliestFinishTime(vector<int>& landStartTime,
                                 vector<int>& landDuration,
                                 vector<int>& waterStartTime,
                                 vector<int>& waterDuration) {

        long long minLandFinish = LLONG_MAX;
        int n = landStartTime.size();

        for (int i = 0; i < n; i++) {
            minLandFinish = min(
                minLandFinish,
                (long long)landStartTime[i] + landDuration[i]
            );
        }

        long long minWaterFinish = LLONG_MAX;
        int m = waterStartTime.size();

        for (int j = 0; j < m; j++) {
            minWaterFinish = min(
                minWaterFinish,
                (long long)waterStartTime[j] + waterDuration[j]
            );
        }

        long long ans = LLONG_MAX;

        // Land -> Water
        for (int j = 0; j < m; j++) {
            ans = min(
                ans,
                max(minLandFinish, (long long)waterStartTime[j])
                + waterDuration[j]
            );
        }

        // Water -> Land
        for (int i = 0; i < n; i++) {
            ans = min(
                ans,
                max(minWaterFinish, (long long)landStartTime[i])
                + landDuration[i]
            );
        }

        return ans;
    }
};