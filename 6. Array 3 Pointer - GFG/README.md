# 6. Array 3 Pointer
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given 3 arrays X, Y&nbsp;and Z. All 3 of the arrays are sorted.</span></p>

<p><span style="font-size:18px">Find&nbsp;<strong>i</strong>, j and k such&nbsp; that :<br>
<strong>max( abs(X[i] - Y[j] ), abs( Y[j] - Z[k] ), abs( Z[k] - X[i] ))</strong> is minimized.<br>
<br>
Return the minimum&nbsp;<strong>max( abs(X[i] - Y[j] ), abs( Y[j] - Z[k] ), abs( Z[k] - X[i] ))</strong></span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>X = {2, 3, 7, 12}
Y = {1, 2, 7}
Z = {12, 14}
<strong>Output: </strong>5
<strong>Explanation: </strong>If we choose 7 from X, 7 from Y
and 12 from Z we get max(abs(7-7), abs(7 - 12)
,abs(12 - 7)) = 5
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>X = {5}
Y = {6, 7}
Z = {8, 9, 10}
<strong>Output: </strong>3
</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anyhting. Your task is to complete the function <strong>minimize()&nbsp;</strong>which takes X, Y and Z as input parameter and returns the&nbsp;minimum&nbsp;<strong>max(abs(X[i] - Y[j]), abs(Y[j] - Z[k]), abs(Z[k] - X[i]))</strong>.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|X| + |Y| + |Z|)<br>
<strong>Expected Auxilary Space:&nbsp;</strong>O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |X| , |Y| , |Z| ≤ 10<sup>5</sup></span> &nbsp;<br>
<span style="font-size:18px">1&nbsp;≤ X<sub>i</sub>, Y<sub>i</sub>, Z<sub>i&nbsp;</sub>≤ 10<sup>6</sup></span></p>
 <p></p>
            </div>