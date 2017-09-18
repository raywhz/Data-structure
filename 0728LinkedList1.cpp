//
//  0728LinkedList1.cpp
//  Leetcode_Practice
//
//  Created by Haozhou Wu on 7/28/17.
//  Copyright © 2017 Haozhou Wu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    struct Node{
        int data;
        Node* Link;
    };
    
    Node* A;
    A = NULL;
    
    Node* temp = new Node();
    temp-> data = 2;
    temp-> Link = NULL;
    A = temp;
    
    temp = new Node();
    temp-> data = 4;
    temp-> Link = NULL;
    
    Node* trav = A;
    while(trav-> Link !=NULL){
        trav = trav->Link;
    }
    
    trav->Link = temp;

    cout << trav->data << endl;
    
    
    
    
//    cout << A->data;
    
    return 0;
}
