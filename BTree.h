#ifndef BTree_H
#define BTree_H
#include "BTreeNode.h"

class BTree{
private:
  BTreeNode* root = NULL;
  int T;
  string printString;

public:
  BTree();
  BTree(int);
  BTreeNode* getRoot();
  void sort(BTreeNode*);
  void insert(Key*);
  void split(BTreeNode*);
  BTreeNode* getLeaf(BTreeNode*, string);
  void printPrevious();
  void printPrevious(BTreeNode*);
  int findIndex(string);
  int findIndex(BTreeNode*, string);
  string getPrintString();
};
#endif
