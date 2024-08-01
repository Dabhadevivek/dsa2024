#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void creatanarr(vector<int> &arr, int size)
{
    for (int i=0; i < size; i++)
    {
        arr[i] = i;
    }
}

int main()
{
    vector<int> arr(10);

    creatanarr(arr, 10);
    for (int i=0; i < 10; i++)
    {

        cout << arr[i] << endl;
    }

int target=5;
auto it=binary_search(arr.begin(),arr.end(),target);
cout<<it<<endl;
    return 0;
}