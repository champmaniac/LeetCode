class Solution {
public:
    int stars, n, m;
    vector<int> ans;     
    bool checkAndReplace(string& target, int& start, string& stamp){
	// check for match
	for(int i = 0; i < m; i++)
		if(target[i + start] != '*' && target[i + start] != stamp[i]) return false;
	// match occurs - push index into ans and replace start to start+m	with *
	ans.push_back(start);
	for(int i = start; i - start < m; i++) 	
		stars += (target[i] != '*'), target[i] = '*';        
		// dont count ⬆️ if it was already star character
	return true; // denotes replacement happened at index start to start + m
    }
    vector<int> movesToStamp(string stamp, string target) {
        stars = 0, n = size(target), m = size(stamp);        
	vector<bool> vis(n, false);  // to avoid revisiting index at which replacement already occurred
	while(stars < n){            // till all characters have not been stamped
		bool replaced = false;
		for(int i = 0; i <= n - m && stars < n; i++)
			// for each non-visited index, check if there's a match with 'stamp' for target substring starting at i
			// replace and increment the stars count if there's a match (partial or complete)
			if(!vis[i]) replaced = checkAndReplace(target, i, stamp), vis[i] = replaced;
		if(!replaced) return {}; // if no replacement occurs throughout one iteration over target, return []
	}            
	// we began with reverse appraoch, real sequence will be reverse of what we got
	reverse(begin(ans), end(ans));;
	return ans;
    }
};