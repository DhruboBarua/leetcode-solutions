

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // int sum = target;
        vector<int> v;

        for(int i = 0; i < nums.size(); i++)
        {
            //sum = sum - nums[i];
            for (int j = 1; j < nums.size(); j++)
            {
                if(j > i)
                {
                    //sum = sum - nums[j];
                    if (nums[j] == target - nums[i])
                    {
                        v.push_back(i);
                        v.push_back(j);
                        break;
                    }
                    //sum = sum + nums[i];
                }
            }
            //sum = target;
        }
        return v;
    }
};


    /*
    int arr[2] = {3, 3};
    int target = 6;
    int sum = target;

    sum = sum - arr[0];


    sum = sum - arr[1];
    if(sum == 0)
    {
        printf("%d %d", arr[0], arr[1]);
        break;
    }
    */

    /*
    for(int i = 0; i < 4; i++)
    {
        cout << i << " ";
        for(int j = 1; j < 5; j++)
        {
            if(j > i)
            {
                cout << j << " ";
            }

        }
        cout << endl;
    }
    */




}
