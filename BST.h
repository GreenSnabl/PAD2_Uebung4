/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BST.h
 * Author: snbl
 *
 * Created on March 3, 2018, 11:12 PM
 */

#ifndef BST_H
#define BST_H
#include <cassert>
#include <iostream>
 
class bst_t
{
private:
	struct node_t
	{
		node_t * left;
		node_t * right;
		int value;
	};
 
	node_t * root_ = nullptr;
 
	static void delete_node(node_t * node)
	{
		if (node == nullptr) return;
 
		delete_node(node->left);
		delete_node(node->right);
		delete node;
	}
 
	static void insert_node(node_t * & node, int value)
	{
		auto current_pointer = &node;
 
		while (true)
		{
			auto & current = *current_pointer;
 
			if (current == nullptr)
			{
				current = new node_t{nullptr, nullptr, value};
				return;
			}
 
			if (value < current->value) current_pointer = &current->left;
			else if (current->value < value) current_pointer = &current->right;
			else return;
		}
	}
 
	static bool exists_node(node_t * node, int value)
	{
		auto current = node;
 
		while (true)
		{
			if (current == nullptr) return false;
			if (value < current->value) current = current->left;
			else if (current->value < value) current = current->right;
			else return true;
		}
	}
 
public:
	~bst_t()
	{
		delete_node(root_);
	}
 
	void insert(int value)
	{
		insert_node(root_, value);
	}
 
	bool exists(int value)
	{
		return exists_node(root_, value);
	}
};


#endif /* BST_H */

