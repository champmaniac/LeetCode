class DSU 
{
    int parent[];
    int height[];
 
    public DSU(int n)
    {
        parent = new int[n];
        height = new int[n];
        Arrays.fill(parent , -1);
        Arrays.fill(height , 1);
    }
 
    public int findRoot(int node)
    {
        if(parent[node] == -1)
            return node;
        return (parent[node] = findRoot(parent[node]));
    }
 
    public void union(int node1 , int node2)
    {
        int ra = findRoot(node1);
        int rb = findRoot(node2);
 
        if(ra != rb)
        {
            if(height[ra] < height[rb])
                parent[ra] = rb;
            else if(height[rb] < height[ra])
                parent[rb] = ra;
            else 
            {
                parent[rb] = ra;
                height[ra] ++;
            }
        }
    }
}
class Solution {
    public int removeStones(int[][] stones) {
        DSU dsu = new DSU(20001);
        for(int stone[]:stones){
            dsu.union(stone[0],stone[1]+10001);
        }
        Set<Integer> set = new HashSet<>();
        for(int stone[]:stones){
            set.add(dsu.findRoot(stone[0]));
        }
        int comps=set.size();
        return stones.length-comps;
    }
}