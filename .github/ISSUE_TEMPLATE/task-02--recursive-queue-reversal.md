---
name: 'Task 02: Implement reversal of a queue using recursion'
about: Task 02 for Students
title: 'Task 02: Implement reversal of a queue using recursion'
labels: enhancement
assignees: ''

---

**Description**

Implement a recursive version of reversing a queue in place.  The function will be 
a regular C/C++ function named `reverseQueueRecursive()`.  This function will be
a template function.  This function should take a reference to a `Queue<T>` as its
input parameter.  This function will be a `void` function.

**Suggested Solution**

1. Remove the item from the front of the queue.
2. Reversed the remaining items on the queue by recursive calling this function on
   the smaller queue.
3. Place the item you removed on the end of the (now reversed) queue of items.

**Additional Requirements**

- You must perform the reversal using a recursive solution.
- You must implement the recursion as described, where the base case
  happens for an empty queue and recursion happens for queues of size
  1 or bigger.
- You are required to use the queue API functions to manipulate the queue
  successfully, to remove and put back items on the queue.
