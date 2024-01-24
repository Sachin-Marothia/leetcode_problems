#include <iostream>
#include <vector>
using namespace std;

void sortarray(vector<int> nums )
{
         for (int  k = 0; k < 3; k++)
    {
        int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] <= k)
        {
            swap(nums[i], nums[j]);
            j++;
        } 
    }
    } 
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] ;
    }
}
int main()
{

    int n;
    cout << "enter the size of an array " << endl;

    cin >> n;
    vector<int> arr;
    cout << "enter the element " << endl;

    int data;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        arr.push_back(data);
    }

    sortarray(arr);
    return 0;
}