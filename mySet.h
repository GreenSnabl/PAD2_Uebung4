/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mySet.h
 * Author: snbl
 *
 * Created on February 28, 2018, 4:48 PM
 */

#ifndef MYSET_H
#define MYSET_H

template <typename T, unsigned int MAX>
class mySet
{
    public:
    typedef T value_type;
    typedef unsigned int size_type;
    
    // Mit neuer Syntax auch mit "using" möglich:    
    //  using value_type = T;                     // The C++ Programming Language p.676
    //  using size_type = unsigned int;
    
    class Iterator {
    public:
        value_type operator+(const value_type&);
        value_type operator-(const value_type&);
        value_type& operator+=(const value_type&);
        value_type& operator-=(const value_type&);
    private:
        T* current_position;
    };
    bool insert(value_type);
    bool erase(value_type);
    void clear();
    size_type size();
    size_type max_size();
    bool empty();
    bool find(value_type);
    
    Iterator<T> begin();
    Iterator<T> end();
    

    
    
    private:
        T daten[MAX];
};



#endif /* MYSET_H */

