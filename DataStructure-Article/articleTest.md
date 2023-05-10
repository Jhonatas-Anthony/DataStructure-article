# Analysis: Is there a difference between the sorting algorithms?

Sorting algorithms are computational routines that allow a set of data to be arranged in a specific order. They are widely used in various applications such as sorting web search results, processing large datasets, organizing information into databases, and much more.

To choose the appropriate sorting algorithm, it is important to consider the size of the data and the complexity of the list to be sorted, as well as the efficiency required to complete the task. Simpler algorithms like Bubble Sort and Selection Sort are more efficient for smaller datasets, while more complex algorithms like Merge Sort and Quick Sort are better suited for larger datasets.

## Introduction: The world of ordination.

Imagine how difficult it would be to live in a chaotic world where there is no alphabetical order, numerical order, order of magnitudes or any other logic, and any action is laborious, as if we were looking for a needle in a haystack, imagine how difficult it would be to look for a name in a phone book, a word in a dictionary, or your favorite snack from a huge supermarket.

That's where ordering comes in, living in an ordered world is much more beautiful, easier and more organized, all tasks automatically become lighter and less costly because it would be easier to find anything and get anywhere.

Our computer thinks the same way, sorting is one of the most important processes in computing, as it allows data to be manipulated and accessed more efficiently. In addition to facilitating the search for information in dictionaries and other types of lists, ordering is fundamental in several areas of computing. For example, in databases and files, organizing data in a specific order can make it easier to find information. When performing a query on a database, the system can use the binary search algorithm to quickly find the records that meet the query criteria, taking advantage of organizing the data in a certain order. In addition, sorting can also be used to reduce data access time on storage systems such as hard disks and SSDs. By organizing the data in a specific order, it is possible to reduce the time to search and read the data, making data access faster and more efficient.

There are several sorting algorithms, each with its own characteristics, complexity and efficiency, in addition to the purpose of each one, in this article we will discuss the six most used and known algorithms in computing. The choice of the best sorting algorithm has a direct impact on the sorting performance and the use of computational resources.

## Description: A presentation of algorithms and Big(O) notation.

**If you already know, feel free to skip this part**

Before starting to talk about sorting algorithms, there is a term in which it is necessary to have knowledge to talk about the complexity of the algorithms and the execution time of each one.

### Big(O)

The big(O) notation (or big O) is a notation used in computer science to describe the asymptotic performance of an algorithm (asymptotic means for all sufficiently large values). It is a way of measuring the time an algorithm takes to run in relation to the size of the input to the problem.

**What does this mean?** The Big(O) notation represents the worst-case complexity of an algorithm. The maximum time it can take to resolve an issue. This notation describes how time will increase if the problem size also increases. Naturally, knowing this is useful as we can compare algorithms with different complexities and choose the most suitable one for a specific task and ensure that the execution time is optimized. See more about [Big(O)](https://www.khanacademy.org/computing/computer-science/algorithms/asymptotic-notation/a/big-o-notation) on Khan Academy.

### The algorithms:

The codes referring to the algorithms presented below can be easily found in my [personal repository](https://github.com/Jhonatas-Anthony/DataStructure), where they are available in the C++ language.

1. **Bubble sort:**
    This is one of the simplest sorting algorithms to implement. It has the idea of traversing a list several times and each time making the largest value in the sequence go to the end of the list.

    Imagine that a bubble goes through a list always checking a number with its successor, if the number is greater than its successor, the algorithm makes a switch, that way it will always guarantee that the highest value will be at the end of the list.

    The bubble sort has complexity O(n²) since it has a loop inside the other, the first loop will go through the entire list repeatedly while the second will do the proper sorting.

    In this way, an algorithm with this complexity grows in quadratic time, which means that its performance deteriorates rapidly as the list size increases.
2. **Selection sort:**
    The selection sort works similarly to the one presented above, however, despite the complexity being the same, O(n²), this algorithm always seeks to place the smallest value at the beginning of the list.

    The algorithm goes through the list several times, comparing the elements with each other and selecting the smallest element on each pass. On the first pass, it finds the smallest element and places it in the first position. On the second pass, it finds the next smallest element and places it in the second position, and so on until all the content is in order.

    This algorithm also grows in quadratic time, it is also easy to implement and can be useful for sorting small lists or as an initial step in more complex algorithms.

3. **Insertion sort:**
    Before talking more about this algorithm, know that compared to the previous ones, this algorithm is very efficient for almost ordered lists, drastically improving its performance, in the worst case insertion sort will also have O(n²) complexity.
    It works by building a sorted list one element at a time, comparing each new element with the already sorted elements and inserting it in the correct position in the list.

    The insertion sort algorithm traverses the list from left to right and, for each element, compares it with the previous elements in the sorted list. If the element is smaller than the compared element, it is moved to the correct position. This process is repeated until all elements are inserted into the sorted list.

4. **Shell sort:**
    At this point we will start working with the idea of "divide and conquer", the shell sort is an extension of the previously presented algorithm, the insertion sort.

    It works by splitting the list to be sorted into smaller sub-lists and applying insertion sort to each sub-list. The idea behind shell sort is that by applying insertion sort to smaller sublists, we can reduce the number of shifts needed to sort the list.

    The shell sort algorithm starts by dividing the list into smaller sublists with a range of k elements. It applies insertion sort to each sublist, then halves the range and repeats the process until the range is 1, at which point it applies standard insertion sort to finish sorting the list, remember that the Is insertion sort very good for nearly sorted lists? Then! This is the strength of this algorithm.

    Shell sort is a more efficient sorting algorithm than insertion sort is for larger lists, but its time complexity is difficult to determine due to range variation. However, its time complexity is generally considered to be somewhere between O(n) and O(n²).

5. **Merge sort:**
    I advance that this is the most complex algorithm shown so far, the merge sort also has the philosophy of "divide and conquer", as well as the quick sort that will be presented below.

    Merge sort is a divide-and-conquer sorting algorithm that splits a list into two equal halves, sorts each half recursively, and then combines the two sorted halves into a single sorted list.

    The merge sort algorithm is efficient for large lists because its time complexity is O(n log n), where n is the number of elements in the list. It is also a stable algorithm, which means that it preserves the relative order of elements with equal values.
    To understand merge sort, let's break it down into three main steps:

    1. Divide the list to be sorted into two equal halves, recursively, until each sublist has only one element.
    2. Sort each half recursively, again using merge sort.
    3. Finally, the algorithm combines the two sorted halves into a single list, merging the two sublists in ascending order and sorting the algorithm.
6. **Quick sort:**
    Quick sort, when we disregard the choice of the term pivot (you'll understand why), can be considered the ideal algorithm to deal with the process of sorting large lists, as it uses recursion as its greatest ally in this process.

    This algorithm works by choosing a term like "pivot" and dividing the list into two parts: elements less than the pivot and elements greater than the pivot. Then the algorithm repeats the process recursively for the two sub-lists until the list is fully sorted.

    Choosing the pivot is the most important step in quick sort, otherwise this algorithm will go to the worst case and will have complexity 0(n²) and not complexity O(n log n) - To understand how a complexity log n influences, see more on Khan Academy about [logarithms](https://www.khanacademy.org/math/algebra2/x2ec2f6f830c9fb89:logs/x2ec2f6f830c9fb89:log-intro/a/intro-to-logarithms).

    The quick sort algorithm can also be divided into three steps:

    1. The algorithm chooses a pivot among the elements in the list.
    2. The algorithm splits the list into two sub-lists, one containing the elements smaller than the pivot and the other containing the elements larger than the pivot.
    3. The algorithm recursively sorts the two sublists using the same process, choosing a new pivot in each sublist and partitioning the list again until each sublist contains only one element. It then combines the sub-lists to get the sorted list.

## Comparison: What is the difference between these algorithms?
Now that the algorithms have been properly presented, we can start to discuss the difference between them, seeking a verdict on the question: "What is the difference between these algorithms?".

In order to compare sorting algorithms, it is important to define a common metric to evaluate the performance of each one. For this, metrics are used, initially, the execution time was the chosen metric. These measures make it possible to quantify the time and resources required to sort a data set, allowing an objective assessment of the efficiency of each algorithm.

As in computing, everything happens in a fraction of a second, I realized that using time as a measure was inefficient, as it was necessary to work with huge lists with more than 1 million items to feel the difference between one and the other.

When evaluating the performance of sorting algorithms, I chose the number of operations performed as the most efficient metric for calculating the running time of each algorithm. Although I didn't use a timed metric, I got a numerical measure of the number of steps performed by each algorithm. To ensure that all algorithms were evaluated under the same conditions, I created an algorithm in C++ that generated a random list with 10, 100 and 1000 elements, which were used as input for all algorithms. I then created a global variable called 'counter', which was incremented by 1 at the end of each loop and at the start of each conditional, allowing it to calculate the number of steps for each algorithm.

It is essential to note that, due to the use of recursion in Merge Sort and Quick Sort, the terminal showed several outputs of the number of steps for each part of the code. For example, when Merge Sort worked with a list of 1000 values, more than 200 rows of results were generated. To minimize human errors and make the analysis more accurate, the [ChatGPT](https://chat.openai.com/) tool was used to calculate these values.

After running the tests with each algorithm, the collected data were put in a table in order to compare each one of them:

| Size | Bubble sort | Selection sort | Insertion sort | Shell sort | Merge sort |Quick sort |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| 10 | 88 | 67 | 47 | 35 | 96 | 33 |
| 100 | 7779 | 5405 | 2856 | 987 | 986 | 523 | 
| 1000 | 747485 | 505675 | 248307 | 15413 | 13014 | 3197 |

## Conclusion: What were the results obtained?
When analyzing the results obtained, the difference in performance between the sorting algorithms is evident. To illustrate this disparity, just compare Bubble Sort with Quick Sort in the task of sorting a list with 1000 values. While Bubble Sort performed approximately 750,000 steps, Quick Sort needed approximately 3200 steps, resulting in a percentage reduction of about 99.57%. When comparing Quick Sort with Merge Sort, we noticed a percentage reduction of around 98.27%. The table presented above shows how each algorithm does with the same problems, revealing how algorithms with complexity O(n²) grow rapidly in number of steps, while the last three start to divide the problem to simplify the resolution and the growth is well smaller.

Early sorting algorithms such as Bubble Sort and Selection Sort have a simpler implementation and are great for educational purposes and for dealing with small data sets. However, as data size increases, the complexity of these algorithms quickly becomes a performance bottleneck, making them unsuitable for large-scale applications. On the other hand, more complex algorithms, such as Merge Sort and Quick Sort, are more efficient in dealing with large amounts of data, which makes them ideal for applications that demand high performance. Choosing the right sorting algorithm is crucial to ensure that solutions are scalable and efficient.

It is concluded, therefore, that the choice of the appropriate algorithm can make a big difference in the performance of the classification routine, especially when dealing with large data sets.