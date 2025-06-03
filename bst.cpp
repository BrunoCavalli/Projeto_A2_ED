#include "bst.h"
#include <iostream>
#include <chrono>
#include <algorithm>

namespace bst {
    static Node* createNode(const std::string& word, int documentId, Node* parent = nullptr) {
        Node* node = new Node;
        node->word = word;
        node->documentIds.push_back(documentId);
        node->parent = parent;
        node->left = nullptr;
        node->right = nullptr;
        node->height = 0;
        node->isRed = 0;
        return node;
}

}