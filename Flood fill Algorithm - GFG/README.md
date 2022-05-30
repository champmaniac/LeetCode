# Flood fill Algorithm
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">An&nbsp;<code>image</code>&nbsp;is represented by a 2-D array of integers, each integer representing the pixel value of the image.</span></p>

<p><span style="font-size:18px">Given a coordinate&nbsp;<strong><code>(sr, sc)</code></strong>&nbsp;representing the starting pixel (row and column) of the flood fill, and a pixel value&nbsp;<code>newColor</code>, "flood fill" the image.</span></p>

<p><span style="font-size:18px">To perform a <strong>"flood fill"</strong>, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the <strong>same color</strong> as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the <strong>same color</strong> as the starting pixel), and so on. Replace the color of all of the aforementioned pixels with the newColor.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>image = {{1,1,1},{1,1,0},{1,0,1}},
sr = 1, sc = 1, newColor = 2.
<strong>Output: </strong>{{2,2,2},{2,2,0},{2,0,1}}
<strong>Explanation: </strong></span><span style="font-size:18px">From the center of the image 
(with position (sr, sc) = (1, 1)), all 
pixels connected by a path of the same color
as the starting pixel are colored with the new 
color.Note the bottom corner is not colored 2, 
because it is not 4-directionally connected to 
the starting pixel.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anyhting. Your task is to complete the function&nbsp;<strong>floodFill()&nbsp;</strong>which takes image, sr, sc and newColor as input paramater and returns the image after flood filling.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Compelxity:&nbsp;</strong>O(n*m)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(n*m)</span><br>
&nbsp;</p>

<div><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n &lt;= m &lt;= 100<br>
0 &lt;= pixel values &lt;= 10</span></div>

<div><span style="font-size:18px">0 &lt;= sr &lt;= (n-1)</span></div>

<div><span style="font-size:18px">0 &lt;= sc &lt;= (m-1)</span></div>
 <p></p>
            </div>