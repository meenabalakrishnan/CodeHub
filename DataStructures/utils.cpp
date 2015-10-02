//
//  utils.cpp
//  DataStructures
//
//  Created by Meena Balakrishnan on 10/2/15.
//  Copyright (c) 2015 Meena Balakrishnan. All rights reserved.
//

#include "utils.h"
#include <iostream>

template <typename T> void Utils<T>::printVector(std::vector<T> vec) {
    for_each(vec.begin(), vec.end(), [] (const T& item) {
        std::cout<<item<<"\t";
    });
}

template <typename T> void Utils<T>::printList(List<T> items) {
    if (items == NULL) {
        return;
    }
    
    ListNode<T> head = items->front;
    while (head) {
        std::cout<<head->getValue();
        head = head->getNext();
    }
}

template <typename T> void Utils<T>::printStack(Stack<T> items) {
    if (items == NULL) {
        return;
    }
    
    ListNode<T> head = items->top();
    while (head) {
        std::cout<<head->value;
        head = head->previous();
    }
}