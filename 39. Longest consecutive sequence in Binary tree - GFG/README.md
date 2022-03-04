# 39. Longest consecutive sequence in Binary tree
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a Binary Tree find the length of the longest path which comprises of connected nodes with consecutive values in increasing order.&nbsp;</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input :      </strong>
           1                               
         /   \                          
        2     3                      </span>

<span style="font-size:18px"><strong>Output:</strong> 2</span>

<span style="font-size:18px"><strong>Explanation : </strong>Longest sequence is 1, 2.</span></pre>

<p><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :    </strong>
            10                               
         /     \                          
       20       30                      
      /  \      /
     40      60   90    </span>

<span style="font-size:18px"><strong>Output : </strong> -1</span>

<span style="font-size:18px"><strong>Explanation: </strong>For the above test case no 
sequence is possible. So output is -1.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>longestConsecutive()</strong> which takes root node as input parameter and returns the length of the longest consecutive increasing sequence (of at least </span><span style="font-size:18px">length</span><span style="font-size:18px">&nbsp;2) in the given Binary Tree. If such a sequence does not exist, return&nbsp;-1.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(Height of Tree)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10^3</span></p>
 <p></p>
            </div>