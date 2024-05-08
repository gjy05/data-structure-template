#include "queue.h"
#include <iostream>

// TODO: Queue 클래스 구현 작성
void Queue::push(int data)
{
    LinkedList::insert(size_, data);
}
int Queue::pop()
{
    int data = peek();
    LinkedList::remove(0);
    return data;
}
int Queue::peek()
{
    return LinkedList::get(0);
}
void Queue::operator+=(int n)
{
    push(n);
}