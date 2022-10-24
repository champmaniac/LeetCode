# Account Merge
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a list&nbsp;of <strong>accounts</strong> where each element <strong>accounts [ i ] </strong>is a list&nbsp;of strings, where the first element <strong>account [ i ][ 0 ]&nbsp;</strong> is a<strong> name</strong>, and the rest of the elements are<strong> emails</strong> representing emails of the account.<br>
Now, we should like to merge these accounts. Two accounts definitely belong to the same person if there is some common email to both accounts. Note that even if two accounts have the same name, they may belong to different people as people could have the same name. A person can have any number of accounts initially, but all of their accounts definitely have the same name.<br>
After merging the accounts, return the accounts in the following format: the first element of each account is the name, and the rest of the elements are emails <strong>in</strong> <strong>sorted order</strong>.<br>
Note : Accounts themselves can be returned in <strong>any order</strong>.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 4<br>
accounts [ ] =<br>
[["John","johnsmith@mail.com","john_newyork@mail.com"],<br>
["John","johnsmith@mail.com","john00@mail.com"],<br>
["Mary","mary@mail.com"],<br>
["John","johnnybravo@mail.com"]]<br>
<strong>Output:</strong><br>
[["John","john00@mail.com","john_newyork@mail.com", "johnsmith@mail.com"],<br>
["Mary","mary@mail.com"],<br>
["John","johnnybravo@mail.com"]]<br>
<strong>Explanation:</strong><br>
The first and second John's are the same person as<br>
they have the common email "johnsmith@mail.com".<br>
The third John and Mary are different people as none<br>
of their email addresses are used by other accounts.<br>
We could return these arrays&nbsp;in any order, for example<br>
the answer [['Mary', 'mary@mail.com'],<br>
['John', 'johnnybravo@mail.com'],<br>
['John', 'john00@mail.com', 'john_newyork@mail.com',<br>
'johnsmith@mail.com']]<br>
would still be accepted.</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 5<br>
accounts [ ] =<br>
[["Gabe","Gabe00@m.co","Gabe3@m.co","Gabe1@m.co"],<br>
["Kevin","Kevin3@m.co","Kevin5@m.co","Kevin0@m.co"],<br>
["Ethan","Ethan5@m.co","Ethan4@m.co","Ethan0@m.co"],<br>
["Hanzo","Hanzo3@m.co","Hanzo1@m.co","Hanzo0@m.co"],<br>
["Fern","Fern5@m.co","Fern1@m.co","Fern0@m.co"]]<br>
<strong>Output:</strong><br>
[["Ethan","Ethan0@m.co","Ethan4@m.co","Ethan5@m.co"],<br>
["Gabe","Gabe0@m.co","Gabe1@m.co","Gabe3@m.co"],<br>
["Hanzo","Hanzo0@m.co","Hanzo1@m.co","Hanzo3@m.co"],<br>
["Kevin","Kevin0@m.co","Kevin3@m.co","Kevin5@m.co"],<br>
["Fern","Fern0@m.co","Fern1@m.co","Fern5@m.co"]]<br>
<strong>Explanation:</strong><br>
We don't have any common emails in any of the users.<br>
We just sorted the emails of each person and we return a array of the emails.(The details can be returned in any order).</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>accountsMerge</strong><strong>()&nbsp;</strong>which takes a list of list of strings details representing <strong>accounts</strong>&nbsp;&nbsp;as parameter and returns a&nbsp;list of list of strings denoting the details&nbsp;after merging.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*M*logN) - where N is the size of accounts&nbsp;and M is the size of number of strings for a name.<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N*M) - where N is the size of accounts&nbsp;and M is the size of number of strings for a name.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<ul>
	<li><span style="font-size:18px">1 &lt;= N&nbsp;&lt;= 1000</span></li>
	<li><span style="font-size:18px">2 &lt;= accounts[ i ].size&nbsp;&lt;= 10</span></li>
	<li><span style="font-size:18px">1 &lt;= accounts[ i ][ j ].size&nbsp;&lt;= 30</span></li>
	<li><span style="font-size:18px">accounts[i][0]&nbsp;consists of English letters.</span></li>
</ul>
</div>