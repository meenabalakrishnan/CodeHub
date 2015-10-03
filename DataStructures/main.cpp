//
//  main.cpp
//  DataStructures
//
//  Created by Meena Balakrishnan on 9/27/15.
//  Copyright (c) 2015 Meena Balakrishnan. All rights reserved.
//

#include <iostream>
#include "utils.h"

int main(int argc, const char * argv[]) {
    List<std::wstring> *myShoppingList = new List<std::wstring>();
    myShoppingList->AddFront(L"Onions");
    myShoppingList->AddLast(L"Bell pepper");
    myShoppingList->AddFront(L"Brocolli");
    
    Stack<std::wstring> *stackOfCards = new Stack<std::wstring>();
    stackOfCards->push(L"Queen of hearts");
    stackOfCards->push(L"King of Spade");
    stackOfCards->push(L"Joker");
    stackOfCards->push(L"Ace of clover");
    
    Utils<std::wstring>::printList(myShoppingList);
    Utils<std::wstring>::printStack(stackOfCards);
    
    return 0;
}
