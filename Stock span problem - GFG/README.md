# Stock span problem
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">The stock span problem is a financial problem where we have a series of <strong>n</strong> daily price quotes for a stock and we need to calculate the span of stocks price for all <strong>n</strong> days.&nbsp;<br>
The span <strong>S<sub>i</sub></strong> of the stocks price on a given day <strong>i</strong> is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.<br>
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
N = 7, price[] = [100 80 60 70 60 75 85]
<strong>Output</strong>:
1 1 1 2 1 4 6
<strong>Explanation</strong>:
Traversing the given input span for&nbsp;100 
will be 1, 80 is smaller than 100 so the 
span is 1, 60 is smaller than 80 so the 
span is 1, 70 is greater than 60 so the 
span is 2 and so on. Hence the output will 
be 1 1 1 2 1 4 6.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
N = 6, price[] = [10 4 5 90 120 80]
<strong>Output</strong>:
1 1 2 4 5 1
<strong>Explanation</strong>:
Traversing the given input span for 10 
will be 1, 4 is smaller than 10 so the 
span will be 1, 5 is greater than 4 so 
the span will be 2 and so on. Hence, the 
output will be&nbsp;1 1 2 4 5 1.</span></pre>

<p><span style="font-size:18px"><strong>User Task:</strong><br>
The task is to complete the function&nbsp;<strong>calculateSpan</strong>() which takes two parameters, an array<strong> price[] </strong>denoting the price of stocks, and an integer <strong>N </strong>denoting the size of the array and number of days. This function finds the span of stock's price for all N&nbsp;days and returns an array of length <strong>N</strong> denoting the span for the i-th day.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ C[i] ≤ 10<sup>5</sup></span></p>

<p><span style="font-size:18px"><img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/Stock_span.png" class="img-responsive"></span></p>
 <p></p>
            </div>