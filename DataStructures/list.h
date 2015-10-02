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
    }
    
    void setNext(T* nextNode) {
        this->next = nextNode;
    }
    
    T* getNext() {
        return this->next;
    }
    
    T getValue() {
        return this->value;
    }
    
private:
    T value;
    T* next;
    T* previous;
};


template <typename T>
class List {
public:
    List(T) {
        numElems = 0;
        last = last = NULL;
    }
    
    T getFront() {
        return front;
    }
    
    T getLast() {
        return last;
    }

    void AddFront(T value);
    void AddLast(T value);
    T RemoveFront();
    T RemoveLast();
    
    int count() {
        return numElems;
    }
private:
    T* front;
    T* last;
    int numElems;
};

#endif /* defined(__DataStructures__list__) */
