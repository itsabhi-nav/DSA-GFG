<h2><a href="https://www.geeksforgeeks.org/problems/mirror-tree/1?page=1&category=Tree&difficulty=Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions">Mirror Tree</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a Binary Tree, convert it into its mirror.<br>
<img alt="MirrorTree1" class="aligncenter size-full wp-image-663" src="https://contribute.geeksforgeeks.org/wp-content/uploads/mirrortrees.jpg" style="height:338px; width:591px" title="MirrorTree1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>      1
&nbsp;   /  \
&nbsp;  2    3
<strong>Output: </strong>3 1 2<strong>
Explanation: </strong>The tree is
&nbsp;&nbsp; 1&nbsp;&nbsp;  (mirror)  1
 /&nbsp;&nbsp;\&nbsp;&nbsp;  =&gt;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp; \
2&nbsp;&nbsp;&nbsp; 3&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3&nbsp;&nbsp;  2
The inorder of mirror is 3 1 2</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>      10
&nbsp;    /  \
&nbsp;   20   30
&nbsp;  /  \
&nbsp; 40  60
<strong>Output: </strong>30 10 60 20 40<strong>
Explanation: </strong>The tree is
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10
&nbsp;&nbsp;  /&nbsp;&nbsp;&nbsp;&nbsp;\&nbsp;&nbsp;(mirror) /&nbsp;&nbsp;&nbsp; \
&nbsp;  20&nbsp;&nbsp;&nbsp; 30&nbsp;&nbsp;&nbsp; =&gt; &nbsp; 30&nbsp;&nbsp;&nbsp; 20
&nbsp; /&nbsp;&nbsp;\&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    /&nbsp;&nbsp;&nbsp;\
&nbsp;40&nbsp; 60&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 60&nbsp;&nbsp;&nbsp;40
The inroder traversal of mirror is
30 10 60 20 40.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Just complete the <strong>function mirror()&nbsp;</strong>that takes <strong>node </strong>as <strong>paramter&nbsp; </strong>and convert it into its mirror. The printing is done by the driver code only.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ Number of nodes ≤ 10<sup>5</sup><br>
1 ≤ Data of a node ≤ 10<sup>5</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>VMWare</code>&nbsp;<code>Morgan Stanley</code>&nbsp;<code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Ola Cabs</code>&nbsp;<code>Walmart</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<code>SAP Labs</code>&nbsp;<code>Myntra</code>&nbsp;<code>Belzabar</code>&nbsp;<code>eBay</code>&nbsp;<code>PropTiger</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;