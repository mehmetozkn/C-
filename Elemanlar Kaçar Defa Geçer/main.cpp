#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> nums;
    nums.push_back(4);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(2);

    int max = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

    vector<int> ref(max+1);

    for (int i = 0; i < nums.size(); i++)
    {
        ref[nums[i]]++;
    }

    for (int i = 0; i < ref.size(); i++)
    {
        cout <<  i << " Sayisi " << ref[i] << " Defa Geçiyor." << endl;
    }

    return 0;
}