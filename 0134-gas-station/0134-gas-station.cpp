class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // Initialize variables to store the total amount of gas and cost
        int total_gas = 0;
        int total_cost = 0;

        // Compute the total amount of gas and cost
        for (int i = 0; i < gas.size(); i++) {
            total_gas += gas[i];
            total_cost += cost[i];
        }

        // If the total amount of gas is less than the total amount of cost, the journey is impossible to complete
        if (total_gas < total_cost) {
            return -1;
        }

        // Otherwise, the journey is possible to complete. Initialize variables to store the current amount of petrol and the starting point
        int curr_petrol = 0;
        int start = 0;

        // Find the starting point from which the journey can be completed
        for (int i = 0; i < gas.size(); i++) {
            curr_petrol += gas[i];
            curr_petrol -= cost[i];
            if (curr_petrol < 0) {
                start = i + 1;
                curr_petrol = 0;
            }
        }

        // Return the starting point
        return start;
    }
};