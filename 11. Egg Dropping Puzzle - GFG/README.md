# 11. Egg Dropping Puzzle
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given <strong>N</strong> identical eggs and you have access to a <strong>K</strong>-floored building from&nbsp;<strong>1</strong>&nbsp;to&nbsp;<strong>K</strong>.</span></p>

<p><span style="font-size:18px">There exists a floor <strong>f</strong>&nbsp;where <strong>0</strong> &lt;= <strong>f</strong> &lt;= <strong>K&nbsp;</strong>such that any egg dropped at a floor higher than <strong>f</strong>&nbsp;will break, and any egg dropped <strong>at or below&nbsp;</strong>floor <strong>f </strong>will <strong>not break</strong>. There are few rules given below.&nbsp;</span></p>

<ul>
	<li><span style="font-size:18px">An egg that survives a fall can be used again.</span></li>
	<li><span style="font-size:18px">A broken egg must be discarded.</span></li>
	<li><span style="font-size:18px">The effect of a fall is the same for all eggs.</span></li>
	<li><span style="font-size:18px">If the egg doesn't break at a certain floor, it will not break at any floor below.</span></li>
	<li><span style="font-size:18px">If the eggs breaks at a certain floor, it will break at any floor above.</span></li>
</ul>

<p><span style="font-size:18px">Return the minimum number of moves that you need to determine with certainty what the value of&nbsp;<strong>f</strong>&nbsp;is.</span></p>

<p><span style="font-size:18px">For more description on this problem see <a href="http://en.wikipedia.org/wiki/Dynamic_programming#Egg_dropping_puzzle" target="_blank">wiki page</a></span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
N </strong>= 1<strong>, K </strong>= 2
<strong>Output: </strong>2
<strong>Explanation:&nbsp;
</strong>1. Drop the egg from floor 1. If it 
&nbsp;  breaks, we know that f = 0.
2. Otherwise, drop the egg from floor 2.
&nbsp;  If it breaks, we know that f = 1.
3. If it does not break, then we know f = 2.
4. Hence, we need at minimum 2 moves to
&nbsp;  determine with certainty what the value of f is.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span><span style="font-size:18px"><strong>
</strong>N = 2, K = 10
<strong>Output: </strong>4</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function&nbsp;<strong>eggDrop()</strong>&nbsp;which takes two&nbsp;positive integer N&nbsp;and K as input parameters&nbsp;and returns the&nbsp;minimum number of attempts you need in order to find the critical floor.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong> : O(N*(K^2))<br>
<strong>Expected Auxiliary Space</strong>: O(N*K)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=200<br>
1&lt;=K&lt;=200</span></p>
 <p></p>
            </div>