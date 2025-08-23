#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> &arr, int left, int right, int x)
{
    if (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);
        return binarySearch(arr, mid + 1, right, x);
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 4, 10, 40};
    int x = 10;
    int result = binarySearch(arr, 0, arr.size() - 1, x);
    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}
// Time Complexity: O(log n)

// Space Complexity: O(log n) due to recursion stack
