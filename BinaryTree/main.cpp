//
//  main.cpp
//  BinaryTree
//
//  Created by adeeb mohammed on 12/12/19.
//  Copyright © 2019 adeeb mohammed. All rights reserved.
//

#include <iostream>
#include <vector>
// for the sake of compilation for this logic adding a binary tree
class BinaryTree{
    public :
    int value;
    BinaryTree *left;
    BinaryTree *right;
    
    // binary search tree constructor
    BinaryTree(int value){
        this->value = value;
        this->left  = NULL;
        this->right = NULL;
    }
};

// function for calculating the branch sum of a binary tree
void calculateBranchSums(BinaryTree *tree, int runningSum ,std::vector<int> &sums){
    if(tree == NULL){
        return;
    }
    if(tree->left == NULL && tree->right == NULL){
        sums.push_back(runningSum+tree->value);
    }
    calculateBranchSums(tree->left, runningSum+tree->value,sums);
    calculateBranchSums(tree->right,runningSum+tree->value,sums);
    return ;
}

std::vector<int> branchSum(BinaryTree *tree){
    std::vector<int> sums;
    calculateBranchSums(tree,0,sums);
    return sums;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "function for branch sum";
    return 0;
}
