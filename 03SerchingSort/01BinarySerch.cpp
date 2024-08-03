#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void creatarr(vector<int>&arr,int size){

    /*creat an arr*/
    for(int i = 0; i < size; i++){
        arr.push_back(i);

    }
}

 int search(vector<int>& nums,int size, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;  // Avoid overflow
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        return -1;  // Target not found
    }


    bool bineryserchalgo(vector<int>&arr, int size ,int target){
        bool yesno=binary_search(arr.begin(),arr.end(),target);
    }




int main(){

   vector<int>arr;
   int n=15;
   int target=5;
   


    return 0;
}