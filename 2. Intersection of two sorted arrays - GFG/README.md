# 2. Intersection of two sorted arrays
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">The intersection of two arrays contains the elements common to both the arrays. The intersection should not count duplicate elements.<br>
Given two sorted arrays <strong>arr1</strong>[] and <strong>arr</strong>2[] of sizes <strong>N</strong> and <strong>M</strong> respectively. Find their&nbsp;<strong>intersection</strong></span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
N = 4, arr1[] = {1, 2, 3, 4}  
M = 5, arr2 [] = {2, 4, 6, 7, 8}
<strong>Output</strong>: 2 4
<strong>Explanation</strong>: 2 and 4 are only common 
elements in both the arrays.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
N = 5, arr1[] = {1, 2, 2, 3, 4}
M = 6, arr2[] = {2, 2, 4, 6, 7, 8}
<strong>Output</strong>: 2 4
<strong>Explanation</strong>: 2 and 4 are the only 
common elements.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 3:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 2, arr1[] = {1, 2}
M = 2, arr2[] = {3, 4}
<strong>Output</strong>: -1
<strong>Explanation</strong>: No common elements.</span></pre>

<p><br>
&nbsp;</p>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You do not need to read input or print anything.&nbsp;Complete the <strong>function printIntersection()&nbsp;</strong>that takes arr1,arr2, &nbsp;N and M as input&nbsp;parameters and return a list of integers containing the&nbsp;intersection of two arrays. If the intersection is empty then then list should contain&nbsp;-1.</span><br>
<br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N + M).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(min(N,M)).</span><br>
<br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N, M &lt;= 10<sup>5</sup><br>
1 &lt;= arr[i], brr[i] &lt;= 10<sup>6</sup></span></p>

<p>&nbsp;</p>
 <p></p>
            </div>