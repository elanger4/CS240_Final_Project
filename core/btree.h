#ifndef BTREE_H_
#define BTREE_H_

#include <iostream>
#include "node.h"
#include <fstream>

template <typename T>
class btree {
    public:
        btree(int d);
        ~btree();
        void insert(T value);
        node<T>* search(T value);
        void printInOrder();
        std::vector<std::string> readFile();
        void writeFile();
		void btreeClean();

    private:
		void rotate(node<T> *nd);
		void btreeClean(node<T> *nd);
        void insert(T value, node<T> *nd);
        node<T>* search(T value, node<T> *nd);
        void printInOrder(node<T> *nd);

        node<T> *root;
        unsigned int degree;
};

#include "btree.cpp"

#endif
