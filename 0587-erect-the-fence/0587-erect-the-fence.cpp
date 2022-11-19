class Solution {
private:
    int cross(const vector<int>& a, const vector<int>& b, const vector<int>& c) {
      return (b[0] - a[0]) * (c[1] - a[1]) - (b[1] - a[1]) * (c[0] - a[0]);
    }
public:
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
      // time complexity: O(nlogn)
      // space complexity: O(n)
      // n is the number of trees
      int n = trees.size();
      if (n <= 3) return trees;
      sort(trees.begin(), trees.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0] || (a[0] == b[0] && a[1] < b[1]);
      });
      vector<vector<int>> hull;
      for (int i = 0; i < n; ++i) {
        while (hull.size() >= 2 && cross(hull[hull.size() - 2], hull.back(), trees[i]) < 0) {
          hull.pop_back();
        }
        hull.push_back(trees[i]);
      }
      hull.pop_back();
      for (int i = n - 1; i >= 0; --i) {
        while (hull.size() >= 2 && cross(hull[hull.size() - 2], hull.back(), trees[i]) < 0) {
          hull.pop_back();
        }
        hull.push_back(trees[i]);
      }
      hull.pop_back();
      sort(hull.begin(), hull.end());
      hull.erase(unique(hull.begin(), hull.end()), hull.end());
      return hull;
    }
};