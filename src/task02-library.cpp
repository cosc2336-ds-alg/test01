/** @file task02-library.cpp
 * @brief Implementation of task 02 functions
 *
 * @author Derek Harter
 * @note   class: CSci 520, Spring 2022
 * @note   ide  : VSCode Server 3.9.3, Gnu Development Tools
 * @note   assg : Test 01
 * @date   Mar 29, 2022
 *
 * File for implementation of task 02 functions.
 */
#include "Stack.hpp"
#include "AStack.hpp"
#include "LStack.hpp"
#include "Queue.hpp"
#include "AQueue.hpp"
#include "LQueue.hpp"

// place implementation of reverseQueueRecursive() here
// don't forget to create function documentation for your function

/**
 * @brief Cause specific instance compilations
 *
 * This is a bit of a kludge, but we can use normal make dependencies
 * and separate compilation by declaring template class Stack<needed_type>
 * here of any types we are going to be instantianting with the
 * template.
 *
 * https://isocpp.org/wiki/faq/templates#templates-defn-vs-decl
 * https://isocpp.org/wiki/faq/templates#separate-template-class-defn-from-decl
 */
// uncomment the following when working on task 2 to implement the reverseQueueRecursive
// template function
/*
template void reverseQueueRecursive<int>(Queue<int>& queue);
template void reverseQueueRecursive<string>(Queue<string>& queue);
*/
