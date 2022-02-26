# Pairs violating BST property
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:20px">You are given a Binary tree. You are required to find the number of pairs violating the BST property. In BST every element in left subtree must be less than every element in the right subtree.&nbsp;You are required to complete the function&nbsp;<strong>pairsViolatingBST(Node *root, int N).</strong></span></p>

<p>&nbsp;</p>

<p><span style="font-size:20px"><strong>Input:</strong></span></p>

<p><span style="font-size:20px">The first line consists of an integer T denoting the number of test cases. Each test case consists of two lines. The first line of each test case consists of a single integer N, denoting the number of edges in the&nbsp;Binary&nbsp;tree.&nbsp;The next line contains the edges of the binary tree. Each edge consists of two integers and one character first of whose is parent node, second is child node and character "L" representing Left child and "R" representing the right child.&nbsp;</span><br>
&nbsp;</p>

<p><span style="font-size:20px"><strong>Output:</strong></span></p>

<p><span style="font-size:20px">You are required to complete the function <strong>pairsViolatingBST(Node *root, int N)&nbsp;</strong>which takes the root of the tree and the number of edges N as the arguments. The function returns the required number of pairs. As the results can be large, return your result modulo 10^9 + 7&nbsp; </span></p>

<p><span style="font-size:20px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:20px">1 &lt;= T &lt;= 1000 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</span></p>

<p><span style="font-size:20px">1 &lt;= N &lt; 10^5 &nbsp; &nbsp;&nbsp;</span></p>

<p>&nbsp;</p>

<p><span style="font-size:20px"><strong>Example:</strong></span></p>

<p><span style="font-size:20px"><strong>Input:</strong></span></p>

<p><span style="font-size:20px">2</span></p>

<p><span style="font-size:20px">6</span></p>

<p><span style="font-size:20px">50 30 L 50 60 R 30 20 L 30 25 R 60 10 L 60 40 R</span></p>

<p><span style="font-size:20px">2</span></p>

<p><span style="font-size:20px">4 5 L 4 6 R</span></p>

<p><span style="font-size:20px"><strong>Output:</strong></span></p>

<p><span style="font-size:20px">7</span></p>

<p><span style="font-size:20px">1</span></p>

<p><span style="font-size:20px"><strong>Explanation:</strong></span></p>

<p><span style="font-size:20px">The binary tree for <strong>1<sup>st</sup> test case</strong> is-</span></p>

<p><span style="font-size:20px">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 50</span></p>

<p><span style="font-size:20px">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp; \</span></p>

<p><span style="font-size:20px">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 30&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 60</span></p>

<p><span style="font-size:20px">&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; \ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;/&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;\</span></p>

<p><span style="font-size:20px">20 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 25&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; 10 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;40</span></p>

<p><span style="font-size:20px">The pairs violating the BST property are: (20, 10), (25, 10), (30, 25), (30, 10), (50, 10), (50, 40), (60, 40). Hence, the result is 7.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:20px">The binary tree for <strong>2<sup>nd</sup> test case</strong> is-</span></p>

<p><span style="font-size:20px">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 4</span></p>

<p><span style="font-size:20px">&nbsp;&nbsp;&nbsp;&nbsp; / &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;\</span></p>

<p><span style="font-size:20px">5&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 6</span></p>

<p><span style="font-size:20px">The pair violating the BST property is: (5, 4). Hence, the result is 1.</span></p>

<p><span style="font-size:20px"><strong>Note:</strong>The <strong>Input/Ouput</strong> format and <strong>Example</strong> given are used for system's internal purpose, and should be used by a user for <strong>Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span><br>
&nbsp;</p>
 <p></p>
            </div>