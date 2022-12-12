class Solution {
public:
vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> m;
    vector<int> ans(2);
    for (int i = 0; i < nums.size(); i++)
    {
        int tmp = target - nums[i];
        if (m.find(tmp) != m.end())
        {
            ans[0] = i;
            ans[1] = m[tmp];
            return ans;
        }
        m[nums[i]] = i;
    }
    return ans;
}
};
