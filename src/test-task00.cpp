/** @file test-task00.cpp
 * @brief Unit tests for Test 01
 *
 * @author Derek Harter
 * @note   class: CSci 520, Spring 2022
 * @note   ide  : VSCode Server 3.9.3, Gnu Development Tools
 * @note   assg : Assignment Queues
 * @date   Mar 29, 2022
 *
 * Test 01 Task 00, examples of data structures usage and ensure
 * needed structures are present and working.
 */
#include "AQueue.hpp"
#include "LQueue.hpp"
#include "Queue.hpp"
#include "AStack.hpp"
#include "LStack.hpp"
#include "Stack.hpp"
#include "catch.hpp"
#include <iostream>
using namespace std;


/** Stack Examples: Examples of testing and using our assignment stacks.
 */
TEST_CASE("Stack Tests", "[task00]")
{
  SECTION("Examples of AStack usage with int types")
  {
    int values[3] = {3, 7, 2};
    AStack<int> stack(3, values);

    CHECK_FALSE(stack.isEmpty());
    CHECK(stack.top() == 3);
    CHECK(stack.str() == "<stack> size: 3 top:[ 3, 7, 2 ]:bottom");

    stack.push(9);
    CHECK(stack.getSize() == 4);
    CHECK(stack.top() == 9);
    CHECK(stack.str() == "<stack> size: 4 top:[ 9, 3, 7, 2 ]:bottom");

    stack.pop();
    stack.pop();
    CHECK(stack.getSize() == 2);
    CHECK(stack.top() == 7);
    CHECK(stack.str() == "<stack> size: 2 top:[ 7, 2 ]:bottom");
    
    stack.pop();
    stack.pop();
    CHECK(stack.isEmpty());
    CHECK(stack.str() == "<stack> size: 0 top:[ ]:bottom");
  }

  SECTION("Examples of LStack usage with string types")
  {
    string values[3] = {"gamma", "delta", "omicron"};
    LStack<string> stack(3, values);

    CHECK_FALSE(stack.isEmpty());
    CHECK(stack.top() == "gamma");
    CHECK(stack.str() == "<stack> size: 3 top:[ gamma, delta, omicron ]:bottom");

    stack.push("alpha");
    CHECK(stack.getSize() == 4);
    CHECK(stack.top() == "alpha");
    CHECK(stack.str() == "<stack> size: 4 top:[ alpha, gamma, delta, omicron ]:bottom");

    stack.pop();
    stack.pop();
    CHECK(stack.getSize() == 2);
    CHECK(stack.top() == "delta");
    CHECK(stack.str() == "<stack> size: 2 top:[ delta, omicron ]:bottom");
    
    stack.pop();
    stack.pop();
    CHECK(stack.isEmpty());
    CHECK(stack.str() == "<stack> size: 0 top:[ ]:bottom");
  }
}

/** Queue Examples: Examples of testing and using our assignment queues.
 */
TEST_CASE("Queue Tests", "[task00]")
{
  SECTION("Example of AQueue usage with int types")
  {
    int values[3] = {3, 7, 2};
    AQueue<int> queue(3, values);

    CHECK_FALSE(queue.isEmpty());
    CHECK(queue.front() == 3);
    CHECK(queue.str() == "<queue> size: 3 front:[ 3, 7, 2 ]:back");

    queue.enqueue(9);
    CHECK(queue.getSize() == 4);
    CHECK(queue.front() == 3);
    CHECK(queue.str() == "<queue> size: 4 front:[ 3, 7, 2, 9 ]:back");
    
    queue.dequeue();
    queue.dequeue();
    CHECK(queue.getSize() == 2);
    CHECK(queue.front() == 2);
    CHECK(queue.str() == "<queue> size: 2 front:[ 2, 9 ]:back");
    
    queue.dequeue();
    queue.dequeue();
    CHECK(queue.isEmpty());;
    CHECK(queue.str() == "<queue> size: 0 front:[ ]:back");
  }

  SECTION("Example of LQueue usage with string types")
  {
    string values[3] = {"gamma", "delta", "omicron"};
    AQueue<string> queue(3, values);

    CHECK_FALSE(queue.isEmpty());
    CHECK(queue.front() == "gamma");
    CHECK(queue.str() == "<queue> size: 3 front:[ gamma, delta, omicron ]:back");

    queue.enqueue("alpha");
    CHECK(queue.getSize() == 4);
    CHECK(queue.front() == "gamma");
    CHECK(queue.str() == "<queue> size: 4 front:[ gamma, delta, omicron, alpha ]:back");
    
    queue.dequeue();
    queue.dequeue();
    CHECK(queue.getSize() == 2);
    CHECK(queue.front() == "omicron");
    CHECK(queue.str() == "<queue> size: 2 front:[ omicron, alpha ]:back");
    
    queue.dequeue();
    queue.dequeue();
    CHECK(queue.isEmpty());;
    CHECK(queue.str() == "<queue> size: 0 front:[ ]:back");
  }
}


