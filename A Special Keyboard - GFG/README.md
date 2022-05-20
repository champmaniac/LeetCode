# A Special Keyboard
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Imagine you have a special keyboard with all keys in a single row. The layout of characters on a keyboard is denoted by a string <strong>S1</strong> of length 26. S1 is indexed from 0 to 25. Initially, your finger is at index 0.<br>
To type a character, you have to move your finger to the index of the desired character. The time taken to move your finger from index i to index j is |j-i|, where || denotes absolute value.Find the time taken to type the string <strong>S2 </strong>with the given keyboard layout.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
S1 = "abcdefghijklmnopqrstuvwxyz"
S2 = "cba"
<strong>Output</strong>: 
4
<strong>Explanation</strong>:
Initially we are at index 0. To type 'c',
it will take a time of abs(0-2) = 2. To, type
'b' next, it will take abs(2-1) = 1. And, for
'a', it will take abs(1-0) = 1 unit time.
So, total time = 2+1+1 = 4.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
S1 = "zyxwvutsrqponmlkjihgfedcba"
S2 = "a"
<strong>Output</strong>: 
25
<strong>Explanation</strong>:
'a' is at index 25. So, the time taken
to type 'a' will be abs(0-25) = 25.</span>
</pre>

<p><br>
<strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't need to read input or print anything.&nbsp;You only need to complete the function<strong> findTime()&nbsp;</strong>that takes two strings S1, and S2 as input and returns an integer denoting time taken to type the string S2.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> &nbsp;O(|S2|)<br>
<strong>Expected Auxilliary Space:</strong> O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 &lt; |S2| &lt; 10<sup>5</sup><br>
Length of S1 is 26<br>
S1 contains all 26 alphabets in lower case</span></p>
 <p></p>
            </div>