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
#include "mySet.h"
#include <string>

using namespace std;

int main(){

    Set<int, 30> s;
    s.insert(234);
    s.insert(23);
    s.insert(34);
    s.insert(24);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(654);
    s.insert(44);
    s.insert(21);
    s.insert(4324);
    s.insert(534534);
    s.insert(6544);
    s.insert(446);
    s.insert(213);
    s.insert(43324);
    s.insert(5364534);
    s.insert(64);
    s.insert(414);
    s.insert(251);
    s.insert(46324);
    s.insert(5734534);
    s.insert(6544);
    s.insert(448);
    s.insert(2185);
    s.insert(4325564);
    s.insert(5345364);
    
    for(auto& it : s)
        cout << it << endl;
    
    Set<char, 10> sc;
    sc.insert('a');
    sc.insert('c');
    sc.insert('A');
    sc.insert('f');
    sc.insert('G');
    sc.insert('q');
    sc.insert('R');
    sc.insert('g');
    sc.insert('L');
    sc.insert('L');
    sc.insert('S');
    
    for (auto& it: sc)
        cout << it << endl;
    
    cout << sc.find('L') << endl;
    
    
    Set<string, 10> ss;
    ss.insert("float");
    ss.insert("Road");    
    ss.insert("Toad");
    ss.insert("Snow");
    ss.insert("yes");
    ss.insert("no");
    ss.insert("hello");
    ss.insert("goodbye");
    
    for (auto & it: ss)
        cout << it << endl;
    
    
    return 0;
}

