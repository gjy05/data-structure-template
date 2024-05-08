#include "linked_list.h"
#include <iostream>

// TODO: LinkedList 클래스 구현 작성

LinkedList::LinkedList()
{
    head_ = new Node(0);
    size_ = 0;
}

LinkedList::~LinkedList()
{
    while (size_ != 0)
    {
        remove(0);
    }
    delete head_;
}

void LinkedList::print()
{
    Node* tmp = head_;
    for (int i = 0; i < size_; i++)
    {
        tmp = tmp->next_;
        std::cout << tmp->value_ << " ";
    }
    std::cout << std::endl;
}

void LinkedList::insert(int index, int value)
{
    Node *new_node = new Node(value);
    Node *tmp = head_; // 한 칸 전 노드 가리킬 것
    for (int i = 0; i < index; i++)
    {
        tmp = tmp->next_;
    }
    new_node->next_ = tmp->next_;
    tmp->next_ = new_node;
    size_++;
}

int LinkedList::get(int index)
{
    Node *tmp = head_; // 한 칸 전 노드 가리킬 것
    for (int i = 0; i < index; i++)
    {
        tmp = tmp->next_;
    }
    return tmp->next_->value_;
}

void LinkedList::remove(int index)
{
    Node *del_node; // 지울 노드 가맄리 것
    Node *tmp = head_; // 한 칸 전 노드 가리킬 것
    for (int i = 0; i < index; i++)
    {
        tmp = tmp->next_;
    }
    del_node = tmp->next_;
    tmp->next_ = tmp->next_->next_;
    delete del_node;
    size_--;
}