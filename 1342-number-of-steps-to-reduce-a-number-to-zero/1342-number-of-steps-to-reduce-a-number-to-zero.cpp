class Solution {
public:
    int numberOfSteps(int num) { // number of steps to reach 0
        int count=0; // count of steps
        while(num){ // while num is not 0
            if(num%2) // if num is odd
                --num; // decrement num
			else // if num is even
                num=num/2; // divide num by 2
            ++count; // increment count
        }
        return count; // return count    
    }
};