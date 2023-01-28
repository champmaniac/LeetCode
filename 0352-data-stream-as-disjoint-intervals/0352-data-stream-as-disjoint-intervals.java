class SummaryRanges {
    private TreeMap<Integer, int[]> map = new TreeMap<>();
    public SummaryRanges() {
        
    }
    
    public void addNum(int val) {
        if (map.containsKey(val))
          return;

        final Integer lo = map.lowerKey(val);  
        final Integer hi = map.higherKey(val); 

       
        if (lo != null && hi != null && map.get(lo)[1] + 1 == val && val + 1 == hi) {
          map.get(lo)[1] = map.get(hi)[1];
          map.remove(hi);
        } else if (lo != null && map.get(lo)[1] + 1 >= val) {
          map.get(lo)[1] = Math.max(map.get(lo)[1], val);
        } else if (hi != null && val + 1 == hi) {
          map.put(val, new int[] {val, map.get(hi)[1]});
          map.remove(hi);
        } else {
          map.put(val, new int[] {val, val});
        }
    }
    public int[][] getIntervals() {
        List<int[]> intervals = new ArrayList<>(map.values());
        return intervals.toArray(new int[intervals.size()][]);
    }
}

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges obj = new SummaryRanges();
 * obj.addNum(value);
 * int[][] param_2 = obj.getIntervals();
 */