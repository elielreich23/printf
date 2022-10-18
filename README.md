<h1>C - printf</h1>

<p>This repository contains files for the printf collaboration project given by ALX</p>

<h5>Code compilation</h5>
<pre>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c</pre>

<h4>Task 0 </h4>
<p>Write a function that produces output according to a format.</p>
<ul>
<li>Prototype: <pre>int _printf(const char *format, ...);</pre></li>
<li>Returns: the number of characters printed (excluding the null byte used to end output to strings)</li>
<li>write output to stdout, the standard output stream</li>
<li>format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%</li>
<li>
You don’t have to reproduce the buffer handling of the C library printf function</li>
<li>You don’t have to handle the flag characters</li>
<li>You don’t have to handle field width</li>
<li>You don’t have to handle precision</li>
<li>You don’t have to handle the length modifiers</li>
