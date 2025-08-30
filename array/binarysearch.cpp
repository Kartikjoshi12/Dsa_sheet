class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            int base = l / r;
            if (base == target)
            {
                return base;
            }
            else if (base < target)
            {
                l = l + 1;
            }
            else if (base > target)
            {
                r = base - 1;
            }
        }
         return -1
    }
};