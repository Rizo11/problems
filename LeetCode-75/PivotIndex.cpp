#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {-1,-1,-1,1,1,1};
    int sum = 0;
    int index = 0;
    for(int i = -1; i < (int) nums.size(); i++)
    {
        if (i>=0)
        {
            sum += nums[i];
        }
        
        int sumRight = 0;
        for(int j = i+2; j < nums.size(); j++)
        {
            sumRight += nums[j];
        }
        if(sum == sumRight && i+1 < (int) nums.size())
        {
            cout << "index " << i+1 << endl;
        }
    }
    return -1;
}