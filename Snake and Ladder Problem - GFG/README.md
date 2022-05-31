# Snake and Ladder Problem
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a <strong>5x6</strong>&nbsp;snakes and ladders board, find the minimum number of dice throws required to reach the destination or last cell (<strong>30<sup>th</sup></strong>&nbsp;cell) from the source (1st cell). </span></p>

<p><span style="font-size:18px">You are given an integer&nbsp;<strong>N </strong>denoting&nbsp;the&nbsp;total number of snakes and ladders&nbsp;and an array <strong>arr[]</strong>&nbsp;of <strong>2*N</strong> size where <strong>2*i</strong> and <strong>(2*i + 1)<sup>th</sup></strong>&nbsp;values denote the starting and ending point respectively of <strong>i<sup>th&nbsp;</sup></strong>snake or ladder. The&nbsp;board looks like the following.</span></p>

<p><br>
<span style="font-size:18px">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;<img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/snake-and-ladders.jpg" style="border-style:solid; border-width:4px; height:292px; width:436px" class="img-responsive"></span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 8
arr[] = {3, 22, 5, 8, 11, 26, 20, 29, 
&nbsp;      17, 4, 19, 7, 27, 1, 21, 9}
<strong>Output: </strong>3
<strong>Explanation:</strong>
The given board is the board shown
in the figure. For the above board 
output will be 3. 
a) For 1st throw get a 2. 
b) For 2nd throw get a 6.
c) For 3rd throw get a 2.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>minThrow()</strong> which takes <strong>N</strong> and <strong>arr</strong> as input parameters and returns the minimum number of throws required to reach the end of the game.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<br>
1 ≤ arr[i] ≤ 30&nbsp;&nbsp;</span></p>
 <p></p>
            </div>