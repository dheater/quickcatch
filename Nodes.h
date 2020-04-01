#pragma once

namespace
{
    struct Node {
        Node *next = nullptr;
        Node *prev = nullptr;
        int value{};
    };
} // namespace

class Stack
{
    Node *head = nullptr;

  public:
    void Push(int value)
    {
        Node *n = new Node;
        n->value = value;

        if(head) { n->next = head; }
        head = n;
    }

    int Pop()
    {
        if(!head) { throw 0; }

        Node *n = head;
        head = n->next;
        int value = n->value;
        delete n;
        return value;
    }

    ~Stack()
    {
        Node *n = head;
        while(n) {
            Node *t = n;
            n = n->next;
            delete t;
        }
    }
};

class Queue
{
    Node *head = nullptr;
    Node *tail = nullptr;

  public:
    void Enqueue(int value)
    {
        Node *n = new Node;
        n->value = value;
        n->next = head;

        if(head) {
            head->prev = n;
        } else {
            tail = n;
        }
        head = n;
    }

    int Dequeue()
    {
        if(!tail) { throw 0; }
        Node *n = tail;
        int rval = n->value;
        tail = n->prev;

        delete n;
        return rval;
    }

    ~Queue()
    {
        Node *n = tail;
        while(n) {
            Node *t = n;
            n = n->prev;
            delete t;
        }
    }
};
