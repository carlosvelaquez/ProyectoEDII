#include "BTree.h"

void BTree::insert(T nKey){
  insert(root, nKey);
}

void BTree::insert(BTreeNode* node, T nKey){
  if (node->hasChildren()) {
    List<T> keys = node->getKeys();

    for (int i = 1; i <= keys.size; i++) {
      if (nKey < node) {
        insert(node->getChildren(i));
      }
    }
  }else{
    node->addKey(nKey);
  }
}
