int findJudge(int n, int q, vector<vector<int> > &trust){
	// Write your code here.
	vector<int> incoming(n+1,0);
	vector<int> outgoing(n+1,0);
	for(int i=0;i<q;i++){
		incoming[trust[i][1]]++;
		outgoing[trust[i][0]]++;
	}
	for(int i=1;i<=n;i++){
		// Everyone trust 'i' i.e incoming >=n-1 , judge 'i' trust no one i.e is 0
		if(incoming[i]>=n-1 && outgoing[i]==0) return i;
	}
	return -1;
}
