#ifndef STACK_H
#define STACK_H
#include "linked_list.h"

// TODO: Stack 클래스 정의 작성
class Stack : public LinkedList
{
private:
public:
    void push(int data);
    int pop();
    int peek();
    void operator+=(int n);
};

#endif