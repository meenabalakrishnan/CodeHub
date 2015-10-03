//
//  tree.h
//  DataStructures
//
//  Created by Meena Balakrishnan on 9/27/15.
//  Copyright (c) 2015 Meena Balakrishnan. All rights reserved.
//

#ifndef __DataStructures__tree__
#define __DataStructures__tree__

#include <stdio.h>

template <typename T>
class TreeNode {
public:
    TreeNode() {
        this->value = 0;
        this->left = NULL;
        this->right = NULL;
    }
    
    TreeNode(T value, T* left = NULL, T* right = NULL) {
        this->value = value;
        this->left = left;
        this->right = right;
    }
    
    ~TreeNode() {
        left = NULL;
        right = NULL;
    }
    
    T* getRightChild() {
        return right;
    }
    
    T* getLeftChild() {
        return right;
    }
    
    void SetRightChild(T* right) {
        this->right = right;
    }
    
    void SetLeftChild(T* left) {
        this->left = left;
    }
    
    
private:
    T value;
    ListNode<T>* left;
    ListNode<T>* right;
};

template <typename T>
class Tree {
public:
    Tree() {
        this->root = NULL;
    }
    
    ~Tree() {
        delete root;
        
        root = NULL;
    }
    
private:
    T* root;
};
#endif /* defined(__DataStructures__tree__) */
