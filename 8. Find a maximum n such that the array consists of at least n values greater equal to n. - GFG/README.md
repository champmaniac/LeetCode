# 8. Find a maximum n such that the array consists of at least n values greater equal to n.
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an unsorted array of integers, you need to return maximum possible K&nbsp;such that the array consists at least K&nbsp;values greater than or equals to K. Array can contain duplicate values.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
<strong>N = 4</strong>
<strong>A[] = </strong>{1, 2, 4, 3}<strong> </strong>
<strong>Output: </strong>2
<strong>Explanation:</strong>
3, 4 are greater than 2 and 2
is equal to 2 thus
2 is the max possible value 
matching above conditions.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
<strong>N = 5</strong>
<strong>A[] </strong><strong>= </strong>{900, 2, 901, 3, 1000}
<strong>Output: </strong>3
<strong>Explanation:</strong>
1000, 900, 901 is greater than 3 and
3 is also present in the array thus 
answer is 3.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>maxValueK()</strong> which takes a list A of size N as input and returns the max possible K.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>6</sup><br>
1 &lt;= A[i] &lt;= 10<sup>5</sup></span></p>
 <p></p>
            </div>