# Search Pattern (KMP-Algorithm)
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two strings, one is a text string,&nbsp;<strong>txt</strong> and other is a pattern string, <strong>pat</strong>. The task is to print the indexes of all the occurences of pattern&nbsp;string in the text string. For printing, Starting Index of a string should be taken as&nbsp;1.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
txt = "batmanandrobinarebat", pat = "bat"
<strong>Output:</strong> 1 18
<strong>Explanation</strong>: The string "bat" occurs twice
in txt, one starts are index 1 and the other
at index 18. </span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
txt = "abesdu", pat = "edu"
<strong>Output:</strong> -1
<strong>Explanation</strong>: There's not substring "edu"
present in txt.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>search()&nbsp;</strong>which takes the string txt&nbsp;and the string pat as inputs and returns an array denoting the start indices (1-based)&nbsp;of substring pat in the string txt.&nbsp;<br>
<strong>Note: </strong>Return an empty list incase of no occurences of pattern. Driver will print -1 in this case.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|txt|).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(|txt|).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |txt| ≤ 10<sup>5</sup><br>
1 ≤ |pat| &lt; |S|</span></p>
 <p></p>
            </div>