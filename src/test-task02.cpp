/** @file test-task02.cpp
 * @brief Unit tests for Test 01
 *
 * @author Derek Harter
 * @note   class: CSci 520, Spring 2022
 * @note   ide  : VSCode Server 3.9.3, Gnu Development Tools
 * @note   assg : Assignment Queues
 * @date   Mar 29, 2022
 *
 * Test 01 Task 02.  Test implementation of first task to write a template
 * function to reverse a queue, this time using recursion for the implementaiton.
 */
#include "AQueue.hpp"
#include "LQueue.hpp"
#include "Queue.hpp"
#include "task02-library.hpp"
#include "catch.hpp"
#include <iostream>
using namespace std;


/** Task 02 tests of reverse queue function
 */
/*
TEST_CASE("Task 02 tests, linked list queue of int values", "[task02]")
{
  SECTION("Test a linked list based queue of int values")
  {
    // reverse a queue of a few values
    int values[4] = {1, 2, 3, 4};
    LQueue<int> queue(4, values);

    reverseQueueRecursive(queue);
    CHECK(queue.str() == "<queue> size: 4 front:[ 4, 3, 2, 1 ]:back");

    // remove front value and reverse it again
    queue.dequeue();
    reverseQueueRecursive(queue);
    CHECK(queue.str() == "<queue> size: 3 front:[ 1, 2, 3 ]:back");

    // reversing a queue of size 1 should have no effect, but should work
    queue.dequeue();
    queue.dequeue();
    reverseQueueRecursive(queue);
    CHECK(queue.str() == "<queue> size: 1 front:[ 3 ]:back");

    // reversing an empty queue should also not crash or cause any problems
    queue.dequeue();
    reverseQueueRecursive(queue);
    CHECK(queue.str() == "<queue> size: 0 front:[ ]:back");    
  }
}
*/

/** Task 02 tests of reverse queue function
 */
/*
TEST_CASE("Task 02 tests, array based queue of string values", "[task02]")
{
  SECTION("Test an array based queue of string values")
  {
    // reverse a queue of a few values
    string values[4] = {"alpha", "bravo", "charlie", "delta"};
    AQueue<string> queue(4, values);

    reverseQueueRecursive(queue);
    CHECK(queue.str() == "<queue> size: 4 front:[ delta, charlie, bravo, alpha ]:back");

    // remove front value and reverse it again
    queue.dequeue();
    reverseQueueRecursive(queue);
    CHECK(queue.str() == "<queue> size: 3 front:[ alpha, bravo, charlie ]:back");

    // reversing a queue of size 1 should have no effect, but should work
    queue.dequeue();
    queue.dequeue();
    reverseQueueRecursive(queue);
    CHECK(queue.str() == "<queue> size: 1 front:[ charlie ]:back");

    // reversing an empty queue should also not crash or cause any problems
    queue.dequeue();
    reverseQueueRecursive(queue);
    CHECK(queue.str() == "<queue> size: 0 front:[ ]:back");    
  }
}
*/
