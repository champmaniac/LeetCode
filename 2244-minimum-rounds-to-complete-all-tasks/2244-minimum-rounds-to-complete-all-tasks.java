class Solution {
    public int minimumRounds(int[] tasks) {
        Map<Integer, Integer> mp = new HashMap<>();
        for (int task: tasks) {
            mp.put(task, mp.getOrDefault(task, 0) + 1);
        }
        int freq, ans = 0;
        for (Map.Entry<Integer, Integer> entry: mp.entrySet()) {
            freq = entry.getValue();
            if (freq == 1) {
                return -1;
            }
            if (freq % 3 == 0) {
                ans += freq / 3;
            } else {
                ans += freq / 3 + 1;
            }
        }
        return ans;
    }
}