<h1 class="gap">0x1B. C - Sorting algorithms &amp; Big O</h1>
<article id="description" class="gap formatted-content">
    <p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/248/willy-wonka.png" /><br />
<br /></p>
<h2>Background Context</h2>

<p>This project is meant to be done by groups of two students. Each group of two should <a href="/rltoken/QcXizPyNa4DTAMLNzCwdHg" title="pair program" target="_blank">pair program</a> for at least the mandatory part.</p>

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/tmzgO7xhCpNgPUxVhLKibw" title="Sorting algorithm" target="_blank">Sorting algorithm</a> </li>
<li><a href="/rltoken/XrLMaOhUMHfwsFEz15TVow" title="Big O notation" target="_blank">Big O notation</a> </li>
<li><a href="/rltoken/kJ7rgWoqdLnxSnSEoAiFCQ" title="Sorting algorithms animations" target="_blank">Sorting algorithms animations</a> </li>
<li><a href="/rltoken/RdvoGNMTJ6Hq34aJ_HmCqA" title="15 sorting algorithms in 6 minutes" target="_blank">15 sorting algorithms in 6 minutes</a> (<em><b>WARNING</b>: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms</em>)</li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/03JBpl8AIIRD3G2gUzXVew" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>At least four different sorting algorithms</li>
<li>What is the Big O notation, and how to evaluate the time complexity of an algorithm</li>
<li>How to select the best sorting algorithm for a given input</li>
<li>What is a stable sorting algorithm</li>
</ul>
<h2>More Info</h2>

<h3>Data Structure and Functions</h3>

<ul>
<li>For this project you are given the following <code>print_array</code>, and <code>print_list</code> functions:</li>
</ul>

<pre><code>#include &lt;stdlib.h&gt;
#include &lt;stdio.h&gt;

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array &amp;&amp; i &lt; size)
    {
        if (i &gt; 0)
            printf(&quot;, &quot;);
        printf(&quot;%d&quot;, array[i]);
        ++i;
    }
    printf(&quot;\n&quot;);
}
</code></pre>

<pre><code>#include &lt;stdio.h&gt;
#include &quot;sort.h&quot;

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i &gt; 0)
            printf(&quot;, &quot;);
        printf(&quot;%d&quot;, list-&gt;n);
        ++i;
        list = list-&gt;next;
    }
    printf(&quot;\n&quot;);
}
</code></pre>
<ul>
<li>Our files <code>print_array.c</code> and <code>print_list.c</code> (containing the <code>print_array</code> and <code>print_list</code> functions) will be compiled with your functions during the correction.</li>
<li>Please declare the prototype of the functions <code>print_array</code> and <code>print_list</code> in your <code>sort.h</code> header file</li>
<li>Please use the following data structure for doubly linked list:</li>
</ul>

<pre><code>/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
</code></pre>

<h4 class="task">
    0. Bubble sort
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

<p>Write a function that sorts an array of integers in ascending order using the <a href="/rltoken/fCItpIfgmE07fFbHBUToeg" title="Bubble sort" target="_blank">Bubble sort</a> algorithm</p>

<h4 class="task">
    1. Insertion sort
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>
<p>Write a function that sorts a doubly linked list of integers in ascending order using the <a href="/rltoken/4ueB1I1MkNypoTBXR0YX3g" title="Insertion sort" target="_blank">Insertion sort</a> algorithm</p>

<h4 class="task">
    2. Selection sort
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

<p>Write a function that sorts an array of integers in ascending order using the <a href="/rltoken/_DodgdySm5bPerpQm1LhwQ" title="Selection sort" target="_blank">Selection sort</a> algorithm</p>

<h4 class="task">
    3. Quick sort
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  <p>Write a function that sorts an array of integers in ascending order using the <a href="/rltoken/VoeZ2Hwp4Q0piTJ3OODY3w" title="Quick sort" target="_blank">Quick sort</a> algorithm</p>

