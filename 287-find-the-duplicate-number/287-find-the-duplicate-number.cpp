class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
            int i=0,n=nums.size(); // i is the start of the range and n is the end of the range
            while(i<n){ // i value is less than n value
                if(nums[i]!=i+1){ // if the value is not equal to the index value
                    int correct = nums[i]-1; // correct is the value that is supposed to be in the index
                    if(nums[i]!=nums[correct]) // if the value is not equal to the value in the index
                        swap(nums,i,correct); // swap the values
                    else
                        return nums[i]; // return the value
                }
                else
                    i++; // increment i
            }
            return -1; // if no duplicate is found
        }
        
        void swap(vector<int> &nums, int first, int second){ // swap function
                int temp =nums[first];
                nums[first] = nums[second];
                nums[second] =temp;
        }
    };