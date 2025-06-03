#ifdef BST_H
#define BST_H
#include <iostream>
#include <vector>
#include <string>

namespace bst {

struct Node {
    std::string word;
    std::vector<int> documentIds;
    Node* parent;
    Node* left;
    Node* right;
    int height;    // usado na AVL
    int isRed;     // usado na RBT
};

struct BinaryTree {
    Node* root;
    Node* NIL;  // usado na RBT (Opcional)
};


struct InsertResult {
    int numComparisons;
    double executionTime;
    // Additional variables can be added here if needed, such as metadata or debug information.
};

struct SearchResult {
    int found;
    std::vector<int> documentIds;
    double executionTime;
    int numComparisons;
    // Additional variables can be added here, such as metadata or statistics related to the search.
};

BinaryTree* create();
InsertResult insert(BinaryTree* tree, const std::string& word, int documentId);
SearchResult search(BinaryTree* tree, const std::string& word);
void destroy(BinaryTree* tree);


}


#endif // BST_H