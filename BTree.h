#ifndef BTREE_H
#define BTREE_H

#include "BTreeNode.h"

class BTree{
private:
  BTreeNode* root;
public:
  insert(BTreeNode*, int);
};

#endif /* end of include guard: BTREE_H */
