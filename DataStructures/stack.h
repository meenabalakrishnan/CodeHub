//
//  stack.h
//  DataStructures
//
//  Created by Meena Balakrishnan on 9/27/15.
//  Copyright (c) 2015 Meena Balakrishnan. All rights reserved.
//

#ifndef __DataStructures__stack__
#define __DataStructures__stack__

#include <stdio.h>
#include "list.h"

template <typename T>
class Stack {
public:
    Stack() {
        elems = new List<T>();
    }
    
    ~Stack() {
        delete elems;
    }
    
    void push(T value);
    ListNode<T>* pop();
    ListNode<T>* top();
    int count() {
        return elems->count();
    }
    
private:
    List<T>* elems;
};

#include "stack.cpp"

#endif /* defined(__DataStructures__stack__) */
