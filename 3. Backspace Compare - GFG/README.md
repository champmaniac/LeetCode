# 3. Backspace Compare
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two&nbsp;strings <strong>S</strong>&nbsp;and <strong>T</strong>,&nbsp;return if they are equal when both are typed into empty text editors.&nbsp;<code>#</code>&nbsp;means a backspace character.</span></p>

<p><span style="font-size:18px"><strong>Note: </strong>After&nbsp;backspacing an empty text, the text will remain empty.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
S = ab#c
T = ad#c
<strong>Output:</strong>&nbsp;1
<strong>Explanation</strong>: After backspacing both 
the strings become, "ac"
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = #a#c
T = a##c
<strong>Output:&nbsp;</strong>1
<strong>Explanation</strong>: If there no characters 
to backspace, nothing changes.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>backSpace</strong><strong>()</strong>&nbsp;which takes the strings <strong>s</strong> and <strong>t</strong>&nbsp;as input parameters&nbsp;and returns <strong>1&nbsp;</strong>if they are equal after backspace, otherwise <strong>0</strong>.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |S| , |T|&nbsp;≤ 10<sup>6</sup><br>
String contains only lowercase alphabets or #.&nbsp;</span></p>
 <p></p>
            </div>