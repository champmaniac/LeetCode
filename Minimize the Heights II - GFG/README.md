# Minimize the Heights II
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>arr[]</strong>&nbsp;denoting heights of <strong>N</strong> towers and a positive integer <strong>K</strong>, you <strong>have to</strong> modify the height&nbsp;of each&nbsp;tower either by increasing or decreasing them by <strong>K</strong> only <strong>once</strong>. After modifying, height should be a <strong>non-negative</strong> integer.&nbsp;<br>
Find out the minimum possible difference of the height&nbsp;of shortest and longest towers after you have modified each tower.</span></p>

<p><span style="font-size:18px">You can find a slight modification of the problem&nbsp;<a href="https://practice.geeksforgeeks.org/problems/minimize-the-heights-i/1/" target="_blank">here</a>.<br>
Note: It is compulsory to increase or decrease (if possible) by K to each tower.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>K = 2, N = 4
Arr[] = {1, 5, 8, 10}
<strong>Output:</strong>
5
<strong>Explanation:</strong>
The array can be modified as 
{3, 3, 6, 8}. The difference between 
the largest and the smallest is 8-3 = 5.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>K = 3, N = 5
Arr[] = {3, 9, 12, 16, 20}
<strong>Output:</strong>
11
<strong>Explanation:</strong>
The array can be modified as
{6,&nbsp;12,&nbsp;9,&nbsp;13,&nbsp;17}. The difference between 
the largest and the smallest is 17-6 = 11.&nbsp;
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>getMinDiff()</strong>&nbsp;which takes the <strong>arr[], n</strong>&nbsp;and&nbsp;<strong>k&nbsp;</strong>as input parameters and returns an integer&nbsp;denoting the minimum difference.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*logN)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)<br>
<br>
<strong>Constraints</strong><br>
1 ≤ K&nbsp;≤ 10<sup>4</sup><br>
1 ≤ N&nbsp;≤ 10<sup>5</sup><br>
1 ≤ Arr[i] ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>