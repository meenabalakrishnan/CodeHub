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
        newNode->setNext(this->front);
        this->front->setPrevious(newNode);
    } else {
        this->last = newNode;
    }
    numElems++;
    this->front = newNode;
}
   

template<typename T> void List<T>::AddLast(T value) {
    ListNode<T> *newNode = new ListNode<T>(value);
    if(this->last != NULL) {
        this->last->setNext(newNode);
        newNode->setPrevious(this->last);
    } else {
        this->front = newNode;
    }
    numElems++;
    this->last = newNode;
}

template<typename T> ListNode<T>* List<T>::RemoveFront() {
    ListNode<T> *frontNode = this->front;
    if(this->front != NULL) {
        ListNode<T> *nextNode = this->front->getNext();
        nextNode->setPrevious(NULL);
        this->front = nextNode;
        numElems--;
    }
    
    return frontNode;
}

template<typename T> ListNode<T>* List<T>::RemoveLast() {
    ListNode<T> *lastNode = this->last;
    if(this->last != NULL) {
        ListNode<T> *prevNode = this->last->getPrevious();
        prevNode->setNext(NULL);
        this->last = prevNode;
        numElems--;
    }
    return lastNode;
}