# Binary Tree to DLL
## Hard 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place. The left and right pointers in nodes are to be used as previous and next pointers respectively in converted DLL. The order of nodes in DLL must be same as Inorder of the given Binary Tree. The first node of Inorder traversal (leftmost node in BT) must be the head node of the DLL.</span></p>

<p><span style="font-size:18px"><img alt="TreeToList" src="http://www.geeksforgeeks.org/wp-content/uploads/TreeToList.png" style="height:242px; width:432px" class="img-responsive"></span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1
 &nbsp;&nbsp;&nbsp;/&nbsp; \
 &nbsp;&nbsp;3&nbsp;&nbsp;&nbsp; 2
<strong>Output:
</strong>3 1 2 </span>
<span style="font-size:18px">2 1 3 <strong>
Explanation:</strong> DLL would be 3&lt;=&gt;1&lt;=&gt;2</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10
 &nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp; \
     20&nbsp;&nbsp; 30
 &nbsp; /&nbsp;&nbsp; \
 &nbsp;40&nbsp;&nbsp; 60
<strong>Output:
</strong>40 20 60 10 30 </span>
<span style="font-size:18px">30 10 60 20 40<strong>
Explanation: </strong> DLL would be 
40&lt;=&gt;20&lt;=&gt;60&lt;=&gt;10&lt;=&gt;30.</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't have to take input. Complete the function <strong>bToDLL()&nbsp;</strong>that takes <strong>root&nbsp;</strong>node of the tree as a parameter and returns the head of DLL . The driver code prints the DLL both ways.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(H).<br>
<strong>Note: </strong>H is the height of the tree and this space is used implicitly for the recursion stack.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ Number of nodes ≤ 10<sup>5</sup><br>
0 ≤ Data of a node ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>