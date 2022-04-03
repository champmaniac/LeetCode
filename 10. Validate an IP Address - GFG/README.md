# 10. Validate an IP Address
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Write a program to Validate an IPv4 Address.<br>
<em>According to Wikipedia,&nbsp;<a href="http://en.wikipedia.org/wiki/IP_address" target="_blank">IPv4 addresses&nbsp;</a>are canonically represented in dot-decimal notation, which consists of four decimal numbers, each ranging from 0 to 255, separated by dots, e.g., 172.16.254.1 .</em><br>
A<strong> valid IPv4 Address</strong> is of the form <strong>x1.x2.x3.x4</strong> where <strong>0 &lt;= (x1, x2, x3, x4) &lt;= 255</strong>.<br>
Thus, we can write the generalized form of an IPv4 address as (0-255).(0-255).(0-255).(0-255).<br>
<strong>Note:</strong> Here we are considering numbers only from 0 to 255 and any additional <a href="https://en.wikipedia.org/wiki/Leading_zero#:~:text=A%20leading%20zero%20is%20any,for%20the%20same%20numeric%20value." target="_blank"><em>leading</em> <em>zeroes</em></a> will be considered invalid.</span></p>

<p><span style="font-size:18px">Your task is to complete the function<strong> isValid </strong>which returns 1&nbsp;if the given IPv4 address is valid else returns 0. The function takes the IPv4 address as the only argument&nbsp;in the form of string.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>IPv4 address = 222.111.111.111
<strong>Output: </strong>1
Explanation: Here, the IPv4 address is as
per the criteria mentioned and also all
four decimal numbers lies in the mentioned
range.
</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>IPv4 address = 5555..555
<strong>Output: </strong>0<strong>
Explanation: </strong>5555..555 is not a valid
IPv4 address, as the middle two portions
are missing.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>isValid()</strong> which takes the address in the form of string <strong>s</strong>&nbsp;as an input parameter and returns 1 if this is a valid&nbsp;address otherwise returns 0.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N), N = length of the string.<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)<br>
<br>
<strong>Constraints:</strong><br>
1&lt;=length of string &lt;=50</span><br>
<br>
<span style="font-size:18px"><strong>Note:&nbsp;</strong>The <strong>Input/Output</strong> format and <strong>Example</strong>&nbsp;given are used for the system's internal purpose, and should be used by a user for <strong>Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
 <p></p>
            </div>