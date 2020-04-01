#include "Stack.h"
#include <catch2/catch.hpp>

TEST_CASE("Test stack operations")
{
    Stack stack{};

    stack.Push(1);
    stack.Push(2);
    CHECK(2 == stack.Pop());
    CHECK(1 == stack.Pop());

    // Try to pop from an empty stack
    CHECK_THROWS(stack.Pop());
}

TEST_CASE("Test pop from just created stack throws")
{
    Stack stack;

    CHECK_THROWS(stack.Pop());
}

TEST_CASE("Test queue operations")
{
    Queue queue;

    queue.Enqueue(1);
    queue.Enqueue(2);
    CHECK(1 == queue.Dequeue());
    CHECK(2 == queue.Dequeue());

    // Try to dequeue from an empty queue
    CHECK_THROWS(3 == queue.Dequeue());
}

TEST_CASE("Test dequeu from just created queue throws")
{
    Queue queue;

    CHECK_THROWS(queue.Dequeue());
}

