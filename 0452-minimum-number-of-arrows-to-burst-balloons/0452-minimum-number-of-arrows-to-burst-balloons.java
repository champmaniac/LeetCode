class Solution {
    public int findMinArrowShots(int[][] points) {
        Collections.sort(Arrays.asList(points), new SortComparator());
        int n = points.length;
        LinkedList<int[]> merged = new LinkedList<>();
        for(int i=0; i<n; i++){
            if(merged.isEmpty() || merged.getLast()[1] < points[i][0]){
                merged.addLast(points[i]);
            }
            else{
                merged.getLast()[0] = Math.max(merged.getLast()[0], points[i][0]);
                merged.getLast()[1] = Math.min(merged.getLast()[1], points[i][1]);
            }
        }
        return merged.size();
    }
}
class SortComparator implements Comparator<int[]>{
    public int compare(int[] a, int[] b){
        return Integer.compare(a[0], b[0]);
    }
}