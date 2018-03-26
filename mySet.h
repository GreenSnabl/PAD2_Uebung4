/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   templateClass04.h
 * Author: stud
 *
 * Created on 26. M�rz 2018, 16:59
 */

#ifndef TEMPLATECLASS04_H
#define TEMPLATECLASS04_H
#include <algorithm>

template <typename T, unsigned int MAX>
class Set {
private:
    typedef T value_type;
    typedef unsigned int size_type;
    value_type m_data[MAX];
    size_type m_size;
    size_type m_max_size;

public:
    Set<value_type, MAX>() : m_max_size{MAX}, m_size{0}
    {
    }

    bool insert(value_type elem) {
        if (m_size < m_max_size && !find(elem)) {
            for (int i = 0; i < m_size; ++i) {
                if (elem < m_data[i]) {
                    value_type temp = m_data[i];
                    m_data[i] = elem;
                    for (int j = m_size; j > i + 1; j--) {
                        m_data[j] = m_data[j - 1];
                    }
                    m_data[i + 1] = temp;
                    ++m_size;
                    return true;
                }
            }
            m_data[m_size] = elem;
            ++m_size;
            return true;
        }
        return false;
    }
    bool erase(value_type elem);

    void clear() {
        m_size = 0;
    };

    size_type size() const {
        return m_size;
    }

    size_type max_size() const {
        return m_max_size;
    }

    bool empty() const {
        return m_size == 0;
    }

    bool find(value_type elem) const {
        for (int i = 0; i < m_size; ++i) {
            if (m_data[i] == elem) return true;
        }
        return false;
    }

    value_type operator[](size_type index) const {
        return m_data[index];
    }

    value_type& operator[](size_type index) {
        return m_data[index];
    }


    class Iterator;

    Iterator begin() {
        return Iterator(*this, 0);
    }

    Iterator end() {
        return Iterator(*this, m_size);
    }

    class Iterator {
    public:
        Iterator(Set& is) : m_set{is}, m_index{0}
        {
        }
        Iterator(Set& is, int index) : m_set{is}, m_index{index}
        {
        }


        friend Iterator Set<value_type, MAX>::begin();
        friend Iterator Set<value_type, MAX>::end();

        Iterator operator++(int) {
            Iterator copy(m_set, m_index);
            ++m_index;
            return copy;
        }

        Iterator& operator++() {
            ++m_index;
            return *this;
        }

        bool operator!=(const Iterator& rhs) const {
            return m_index != rhs.m_index;
        }

        value_type& operator*() {
            return m_set[m_index];
        }

    private:
        int m_index;
        Set<value_type, MAX>& m_set;


    };

};


#endif /* TEMPLATECLASS04_H */

