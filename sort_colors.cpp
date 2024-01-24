// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//          for (int  k = 0; k < 3; k++)
//     {
//         int j = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] <= k)
//         {
//             swap(nums[i], nums[j]);
//             j++;
//         } 
//     }
//     } 
//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i] ;
//     }
//     }
// };