/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: snbl
 *
 * Created on February 28, 2018, 4:48 PM
 */

#include <iostream>
#include <iomanip>
#include <set>
#include "RBTree.h"
#include "BST.h"

using namespace std;

int main(){
    bst_t bst;
    bst.insert(5);
    bst.insert(12);
    bst.insert(54);
    cout << bst.exists(5) << endl;
    
    return 0;
}


/*int main() {
    int ch, y = 0;
    RBtree obj;
    do {
        cout << "\n\t RED BLACK TREE ";
        cout << "\n 1. Insert in the tree ";
        cout << "\n 2. Delete a node from the tree";
        cout << "\n 3. Search for an element in the tree";
        cout << "\n 4. Display the tree ";
        cout << "\n 5. Exit ";
        cout << "\nEnter Your Choice: ";
        cin>>ch;
        switch (ch) {
            case 1: obj.insert();
                cout << "\nNode Inserted.\n";
                break;
            case 2: obj.del();
                break;
            case 3: obj.search();
                break;
            case 4: obj.disp();
                break;
            case 5: y = 1;
                break;
            default: cout << "\nEnter a Valid Choice.";
        }
        cout << endl;

    } while (y != 1);
    return 1;
}*/
