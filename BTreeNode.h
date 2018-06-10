#ifndef BTreeNode_H
#define BTreeNode_H

#include "List.h"

class BintreeNode{

private:
  int t;
  List<BTreeNode*> children;
  List<int> keys;
  BTreeNode* parent;

public:
  void split();

};

#endif /* end of include guard: BTreeNode_H */
