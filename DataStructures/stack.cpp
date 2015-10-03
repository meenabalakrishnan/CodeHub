//
//  stack.cpp
//  DataStructures
//
//  Created by Meena Balakrishnan on 9/27/15.
//  Copyright (c) 2015 Meena Balakrishnan. All rights reserved.
//

#include "stack.h"

template <typename T> void Stack<T>::push(T value) {
    this->elems->AddLast(value);
}

template <typename T> ListNode<T>* Stack<T>::top() {
    return elems->getLast();
}

template <typename T> ListNode<T>* Stack<T>::pop() {
    return elems->RemoveLast();
}