# 4. Coin Change - Minimum number of coins
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given an amount denoted by <strong>value</strong>. You are also given an array of coins. The <strong>array </strong>contains the<br>
<strong>denominations </strong>of the give coins. You need to find the <strong>minimum number of coins </strong>to make the change for <strong>value </strong>using the coins of given denominations. Also, keep in mind that you have <strong>infinite supply</strong> of the coins.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">value = 5
numberOfCoins = 3
coins[] = {3,6,3}
<strong>Output: </strong>Not Possible<strong>
Explanation:</strong>We need to make the change for
value = 5 The denominations are {3,6,3}
It is certain that we cannot make 5 using
any of these coins.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">value = 10
numberOfCoins = 4
coins[] = {2 5 3 6}
<strong>Output: </strong>2<strong>
Explanation:</strong>We need to make the change for
value = 10 The denominations are {2,5,3,6}
We can use two 5 coins to make 10. So
minimum coins are 2.</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You only need to complete the function <strong>minimumNumberOfCoins()&nbsp;</strong>that take array of coins, size of array, and value as parameters. You need to return the minimum number of coins required. If it is not possible to make the exact value out of the given coin denominations, return -1 ("Not Possible" will be printed by the driver's code in this case).</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(number of coins * value).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(value)</span></p>

<p><strong><span style="font-size:18px">Constraints:</span></strong><br>
<span style="font-size:18px">1 &lt;= value &lt;= 10<sup>3</sup><br>
1 &lt;= numberOfCoins &lt;= 10<sup>3</sup><br>
1 &lt;= coins<sub>i</sub> &lt;= 1000</span></p>
 <p></p>
            </div>