# Connecting the graph
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given a graph with <strong>n</strong> vertices and <strong>m</strong> edges.</span></p>

<p><span style="font-size:18px">You can remove <strong>one</strong> edge from anywhere and add that edge between&nbsp;<strong>any </strong>two vertices in <strong>one </strong>operation.</span></p>

<p><span style="font-size:18px">Find the <strong>minimum</strong> number of operation&nbsp;that will be required to make the graph connected.</span></p>

<p><span style="font-size:18px">If it is not possible to make the graph connected, return -1.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong>&nbsp;</span></p>

<div data-darkreader-inline-bgcolor="" data-darkreader-inline-bgimage="" data-darkreader-inline-border-bottom="" data-darkreader-inline-border-left="" data-darkreader-inline-border-right="" data-darkreader-inline-border-top="" style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
n=4<br>
m=3<br>
Edge=[ [0, 1] , [0, 2] , [1, 2] ]<br>
<br>
<strong>Output:<br>
1<br>
<br>
Explanation:</strong><br>
Remove edge&nbsp;between vertices&nbsp;1 and 2 and add&nbsp;between vertices&nbsp;1 and 3.</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<div data-darkreader-inline-bgcolor="" data-darkreader-inline-bgimage="" data-darkreader-inline-border-bottom="" data-darkreader-inline-border-left="" data-darkreader-inline-border-right="" data-darkreader-inline-border-top="" style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
n=6<br>
m=5<br>
Edge=[ [0,1] , [0,2] , [0,3] , [1,2] , [1,3] ]<br>
<br>
<strong>Output:</strong><br>
2<br>
<br>
<strong>Explanation:</strong><br>
Remove edge between (1,2) and(0,3) and add edge between (1,4) and (3,5)</span><br>
&nbsp;</div>

<p>&nbsp;</p>

<p><strong>Your Task:</strong></p>

<p><span style="font-size:18px">You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>Solve()</strong>&nbsp;which takes an integer<strong> n</strong> denoting no. of vertices&nbsp;and a matrix <strong>edge[][]</strong> denoting the the edges of graph&nbsp;and return the<strong> minimum</strong> number of operation to connect a graph</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">1&lt;=n&lt;=10<sup>5</sup><br>
0&lt;=m&lt;=10<sup>5</sup><br>
0&lt;=edge[i][0],edge[i][1]</span></p>
</div>