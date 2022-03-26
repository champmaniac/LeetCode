# 8. Rotate a 2D array without using extra space
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a <strong>N</strong> x&nbsp;<strong>N</strong>&nbsp;2D matrix <strong>Arr</strong> representing an image. Rotate the image by 90 degrees (anti-clockwise). You need to do this in place.&nbsp;Note that if you end up using an additional array, you will only receive partial score.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
Arr[][] = {{1,  2,  3}
           {4,  5,  6}
           {7,  8,  9}}
<strong>Output:</strong>
 3  6  9 
 2  5  8 
 1  4  7 
<strong>Explanation:</strong> The given matrix is rotated
by 90 degree in anti-clockwise direction.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
Arr[][] = {{1,  2,  3,  4}
           {5,  6,  7,  8}
           {9, 10, 11, 12}
           {13, 14, 15, 16}}
<strong>Output:</strong>
 4  8 12 16 
 3  7 11 15 
 2  6 10 14 
 1  5  9 13
<strong>Explanation: </strong>The given matrix is rotated
by 90 degree in anti-clockwise direction.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>rotate()</strong>&nbsp;which takes the 2D array of&nbsp;integers <strong>arr </strong>and&nbsp;<strong>n</strong><strong>&nbsp;</strong>as parameters and returns void. You need to change the array itself.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤ 1000<br>
1 ≤ Arr[i][j]&nbsp;≤ 1000</span></p>
 <p></p>
            </div>