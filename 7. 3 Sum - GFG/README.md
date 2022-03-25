# 7. 3 Sum
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>A[]</strong> of <strong>N</strong> elements. Return all the triplets [<strong>A[i]</strong>, <strong>A[j]</strong>, <strong>A[k]</strong>] such that&nbsp; <strong>i</strong> &lt; <strong>j</strong> &lt; <strong>k</strong> and <strong>A[i]</strong> + <strong>A[j]</strong> + <strong>A[k]</strong> = <strong>0</strong>.<br>
Notice that the solution set must not contain duplicate triplets.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 6
A[] = {-1, 0, 1, 2, -1, 4}
<strong>Output:
</strong>{{-1, -1, 2}, {-1, 0, 1}}<strong>
Explanation:
</strong>(-1) + (-1) + 2 = 0&nbsp;and their indexes are 0, 4, 3.
(-1) + 0 + 1 = 0 and their indexes are 0, 1, 2.
Since duplicate triplets are not allowed 
this two are possible triplets.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 1
A[] = {0}
<strong>Output:
</strong>{}<strong>
Explanation:
</strong>There are no possible triplets.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't&nbsp;need to read input or print anything.&nbsp;The task is to complete the function <strong>findTriplets</strong>() which takes an integer <strong>N</strong>&nbsp;and an array <strong>A</strong>&nbsp;as input and returns&nbsp;all possible triplets whose sum equals 0 in <strong>sorted</strong> order.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N * N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N * N).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>3</sup><br>
1 ≤ arr[i] ≤ 10<sup>3</sup></span></p>
 <p></p>
            </div>