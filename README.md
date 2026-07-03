<h1># Problem-Solving-816A.-Karen-and-Morning-</h1>
<h4>With the name of Almighty.</h4> 
<p>It's a palindrom string problem. Karen loves palindrom and she belives that to woke up from bed is good luck for her when the time is palindrom. Now helps karen what is the minimum minitues she should sleep to face palindromic time.</p>
<P><u>To solve this problem we can go through the following procedure</u>:</P>
<p>>Let the string is <strong>"H<sub>1</sub>H<sub>2</sub>:M<sub>1</sub>M<sub>2</sub>.</strong> Time will be palindrom if H<sub>1</sub>==M<sub>2</sub> AND H<sub>2</sub>==M<sub>1</sub></p
<p>So for this 1<sup>st</sup> Build a funtion for h and m that will return <strong>(H/10==M%10 && H%10==M/10)</strong> boolean value <b>(True or False)</b></p>
<pre>Now:
  apply a continuous loop
  ans=0
  while(true)
    if(palindrom) 
      print ans=0
      break the loop
    ans++
    M++
    if M=60 M=0 H++
    if H=23 H=0
</pre>
<p><strong>In the description i have added the source code of (Codeforces) 816A. Karen And Morning problem.</strong></p>
