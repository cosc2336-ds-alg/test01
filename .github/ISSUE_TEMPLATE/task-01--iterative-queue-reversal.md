---
name: 'Task 01: Implement reversal of a queue using temporary stack'
about: Task 01 for Students
title: 'Task 01: Implement reversal of a queue using temporary stack'
labels: enhancement, good first issue
assignees: ''

---

**Description**

Implement an iterative version of reversing a queue in place.  The function will be 
a regular C/C++ function named `reverseQueueIterative()`.  This function will be
a template function.  This function should take a reference to a `Queue<T>` as its
input parameter.  This function will be a `void` function.

**Suggested Solution**

1. Create a local temporary stack.
2. Iterate over the queue, removing all items from the queue and pushing
   all items onto the temporary stack.
3. Then once all items have been pushed to the stack, reverse them by
   iterating over the stack, and removing the top item and putting it
   back on the end of the original queue.

**Additional Requirements**

- You are required to create a regular C/C++ template function for this task.
- You are required to create and demonstrate using a local temporary stack.
- You are required to iterated over the queue and stack using the queue and
  stack API methods (e.g. `isEmpty()`, `getSize()`, `top()`, `front()`, 
  `push()`, `enqueue()`, etc.).
