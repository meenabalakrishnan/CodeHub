//
//  list.h
//  DataStructures
//
//  Created by Meena Balakrishnan on 9/27/15.
//  Copyright (c) 2015 Meena Balakrishnan. All rights reserved.
//

#ifndef __DataStructures__list__
#define __DataStructures__list__

#include <stdio.h>
#include <vector>

using namespace std;

template <typename T>
class ListNode {
public:
    ListNode(T value) {
        this->value = value;
        this->next = NULL;
        this->previous = NULL;
    }
    
    ~ListNode() {
        next = NULL;
        previous = NULL;
    }

    void setNext(ListNode<T>* nextNode) {
        this->next = nextNode;
    }
    
    void setPrevious(ListNode<T>* nextNode) {
        this->previous = nextNode;
    }
    
    ListNode<T>* getNext() {
        return this->next;
    }
    
    ListNode<T>* getPrevious() {
        return this->previous;
    }
    
    T getValue() {
        return this->value;
    }
    
private:
    T value;
    ListNode<T>* next;
    ListNode<T>* previous;
};


template <typename T>
class List {
public:
    List() {
        numElems = 0;
        last = last = NULL;
    }
    
    ~List() {
        delete front;
        delete last;
        
        front = NULL;
        last = NULL;
    }
    
    ListNode<T>* getFront() {
        return front;
    }
    
    ListNode<T>* getLast() {
        return last;
    }

    void setFront(ListNode<T>* node) {
        this->front = node;
    }
    
    void setLast(ListNode<T>* node) {
        this->last = node;
    }
    
    void AddFront(T value);
    void AddLast(T value);
    ListNode<T>* RemoveFront();
    ListNode<T>* RemoveLast();
    
    int count() {
        return numElems;
    }
private:
    ListNode<T>* front;
    ListNode<T>* last;
    int numElems;
};

#include "list.cpp"

#endif /* defined(__DataStructures__list__) */
