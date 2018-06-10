#include "BTreeNode.h"

void BTreeNode::split(){
  int nodeCount = t/2;
  List<int> nKeys;
  List<int> nKeys2;
  List<BTreeNode*> nChildren1;
  List<BTreeNode*> nChildren2;

  for (int i = 1; i < nodeCount; i++) {
    nKeys.insert(keys[i]);
  }

  int promote = keys[nodeCount];

  for (int i = nodeCount + 1; i <= t; i++) {
    nKeys2.insert(keys[i]);
  }

  parent->removeChildren(this);

  BTreeNode* child = new BTreeNode(nKeys);
  BTreeNode* child2 = new BTreeNode(nKeys2);

  child->setChildren(nChildren1);
  child2->setChildren(nChildren2);
  child->setKeys(nKeys);
  child2->setKeys(nKeys2);

  parent->addKey(promote);
}

void BTreeNode::addKey(int nData){
  keys.insert(nData);

  if (keys.size >= t) {
    this.split();
  }
}
