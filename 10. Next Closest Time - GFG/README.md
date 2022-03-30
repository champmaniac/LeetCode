# 10. Next Closest Time
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a&nbsp;<strong><code>time</code></strong>&nbsp;represented in the format&nbsp;<code>"<strong>HH:MM</strong>"</code>, find&nbsp;the next closest time by reusing the current digits. There is no limit on how many times a digit can be reused.</span></p>

<p><span style="font-size:18px">You may assume the given input string is always valid. For example,&nbsp;<code>"<strong>01:34</strong>"</code>,&nbsp;<code>"<strong>12:09</strong>"</code>&nbsp;are all valid.&nbsp;<code>"<strong>1:34</strong>"</code>,&nbsp;<code>"<strong>12:9</strong>"</code>&nbsp;are all invalid.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>time = "19:33"
<strong>Output: </strong>"19:39"
<strong>Explanation:</strong> The next closest time
choosing from digits <strong>1, 9, 3, 4,</strong> is <strong>19:39</strong></span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>time = "10:08"
<strong>Output: </strong>"10:10"
<strong>Explanation: </strong>The next closest time
choosing from digits <strong>1, 0,</strong> is <strong>10:10</strong></span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anyhting. Your task is to complete the function&nbsp;<strong>nextClosestTime()&nbsp;</strong>which takes time as input parameter and returns the next closest timeby resusing the current digits.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(1)<br>
<strong>Expected Auxilary Space:&nbsp;</strong>O(1)&nbsp;</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
0 &lt;= HH &lt;= 23<br>
0 &lt;= MM &lt;= 59</span></p>
 <p></p>
            </div>