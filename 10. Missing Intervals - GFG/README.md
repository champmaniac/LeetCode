# 10. Missing Intervals
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a sorted array <strong>A[]</strong> of <strong>N</strong> distinct integers from 0 to 99999. Find all the integer intervals missing from the given list.</span><br>
<span style="font-size:18px"><strong>Note: </strong>There is always atleast 1 number missing.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4
A = {1,5,67,88}
<strong>Output:</strong>
0,2-4,6-66,68-87,89-99999
<strong>Explanation:</strong>
All the missing Intervals are printed.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2: </strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 6
A = {4,55,77,89,91,99} 
<strong>Output:
</strong>0-3,5-54,56-76,78-88,90,92-98, 100-99999</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task: </strong> </span><br>
<span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function <strong>printMissingIntervals</strong><strong>()</strong> which takes Integer N and an Array&nbsp;A[] as input and returns a array&nbsp;of elements with 2*x elements where x is the number of missing intervals and each pair in the array is the range missing. arr={1,3,97,100} would mean the intervals missing are 1-3 and 97-100. Suppose only the number 1 is missing ,then arr={1,1}.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 ≤ N ≤ 10<sup>5</sup><br>
0 ≤ A<sub>i</sub> &lt; 10<sup>5</sup></span></p>
 <p></p>
            </div>