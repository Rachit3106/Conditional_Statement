<h1>Conditional Statements – If-Else, Switch, Break, Continue, Return</h1>

<h2>Aim</h2>
<p>To study and understand the working of conditional statements (<b>if-else</b>, <b>switch</b>) and control statements (<b>break</b>, <b>continue</b>, <b>return</b>) in programming.</p>

<hr>

<h2>Theory</h2>

<h3>1. Introduction</h3>
<p>
Conditional statements are <b>control structures</b> that guide the flow of execution in a program based on certain conditions.  
They allow the program to make <b>decisions</b> and perform different actions depending on whether conditions are <b>true or false</b>.  
Additionally, loop control statements like <b>break</b>, <b>continue</b>, and <b>return</b> allow altering the normal flow inside loops or functions.
</p>

<h3>2. If-Else Statements</h3>
<p>
The <b>if-else</b> statement is the most commonly used conditional statement.<br>
- The <b>if</b> block executes when the condition evaluates to <b>true</b>.<br>
- The <b>else</b> block executes when the condition evaluates to <b>false</b>.<br>
- <b>Else-if ladder</b> is used when there are multiple conditions to check.
</p>

<p><b>Working:</b></p>
<ol>
  <li>The given condition is evaluated.</li>
  <li>If true → the corresponding block executes.</li>
  <li>If false → either another condition is checked (else-if) or the final else executes.</li>
  <li>After execution, control moves to the next part of the program.</li>
</ol>

<h3>3. Switch Statement</h3>
<p>
The <b>switch</b> statement provides a multi-way branching mechanism. It is useful when there are <b>multiple constant values</b> to compare.
</p>

<p><b>Working:</b></p>
<ol>
  <li>The expression inside the switch is evaluated.</li>
  <li>The value is compared with each <b>case</b>.</li>
  <li>When a matching case is found, its block is executed.</li>
  <li><b>Break</b> is used to stop further case checking; without it, execution continues to the next cases (fall-through).</li>
  <li>If no case matches, the <b>default</b> block executes.</li>
</ol>

<h3>4. Difference Between If-Else and Switch</h3>
<table>
  <tr>
    <th>Basis</th>
    <th>If-Else</th>
    <th>Switch</th>
  </tr>
  <tr>
    <td>Usage</td>
    <td>Best for complex conditions and range checking</td>
    <td>Best for checking equality with fixed constants</td>
  </tr>
  <tr>
    <td>Data Types</td>
    <td>Works with all data types and logical expressions</td>
    <td>Mostly works with integers, characters, enums</td>
  </tr>
  <tr>
    <td>Readability</td>
    <td>Can become lengthy for many conditions</td>
    <td>Cleaner and more readable for multiple options</td>
  </tr>
  <tr>
    <td>Execution</td>
    <td>Conditions are checked sequentially</td>
    <td>Jumps directly to the matching case</td>
  </tr>
</table>

<h3>5. Break Statement</h3>
<p>
The <b>break</b> statement is used to <b>immediately terminate</b> the execution of a loop or a switch block.<br>
It transfers control to the first statement after the loop or switch. Commonly used in <b>switch</b> to prevent execution of multiple cases.
</p>

<h3>6. Continue Statement</h3>
<p>
The <b>continue</b> statement is used inside loops to <b>skip the remaining statements</b> of the current iteration and move to the <b>next iteration</b>.<br>
Useful when you want to ignore some specific cases within a loop but continue looping.
</p>

<h3>7. Return Statement</h3>
<p>
The <b>return</b> statement is used to <b>exit from a function</b> and optionally send a <b>value back</b> to the function that called it.<br>
In main(), <b>return 0;</b> often indicates that the program executed successfully.
</p>

<hr>

<h2>Conclusion</h2>
<ul>
  <li>Conditional statements are essential for <b>decision-making</b> in programs.</li>
  <li><b>If-else</b> is best suited for complex conditions and range-based checks.</li>
  <li><b>Switch</b> is efficient for multiple constant comparisons.</li>
  <li><b>Break</b> allows early exit from loops or switch.</li>
  <li><b>Continue</b> skips unnecessary loop iterations.</li>
  <li><b>Return</b> ends the execution of a function and can return values to the calling function.</li>
</ul>
