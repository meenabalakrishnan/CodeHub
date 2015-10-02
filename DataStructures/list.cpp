//
//  list.cpp
//  DataStructures
//
//  Created by Meena Balakrishnan on 9/27/15.
//  Copyright (c) 2015 Meena Balakrishnan. All rights reserved.
//

#include "list.h"

template<typename T> void List<T>::AddFront(T value) {
    ListNode<T> *newNode = new ListNode<T>(value);
    if(front != NULL)  {
        newNode->next = front;
        front->previous = newNode;
    }
    numElems++;
    front = newNode;
}
   

template<typename T> void List<T>::AddLast(T value) {
    ListNode<T> *newNode = new ListNode<T>(value);
    if(last != NULL) {
        last->next = newNode;
        newNode->previous = last;
    }
    numElems++;
    last = newNode;
}

template<typename T> T* List<T>::RemoveFront() {
    ListNode<T> *frontNode = front;
    if(front != NULL) {
        front->next->previous = NULL;
        front = front->next;
        numElems--;
    }
    
    return frontNode;
}

template<typename T> T* List<T>::RemoveLast() {
    ListNode<T> *lastNode = last;
    if(last != NULL) {
        last->previous->next = NULL;
        last = last->previous;
        numElems--;
    }
    return lastNode;
}