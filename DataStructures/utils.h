//
//  utils.h
//  DataStructures
//
//  Created by Meena Balakrishnan on 10/2/15.
//  Copyright (c) 2015 Meena Balakrishnan. All rights reserved.
//

#ifndef __DataStructures__utils__
#define __DataStructures__utils__

#include <stdio.h>
#include <vector>
#include "list.h"
#include "stack.h"
#include "tree.h"

template <typename T>
class Utils {
public:
    static void printVector(std::vector<T> vec);
    static void printList(List<T>* listItems);
    static void printStack(Stack<T>* stackItems);
};

#include "utils.cpp"

#endif /* defined(__DataStructures__utils__) */
