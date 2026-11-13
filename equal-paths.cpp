#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)

#endif

#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here

bool checkPaths(Node* root, int depth, int& leafDepth) {
  if (root == nullptr) {
    return true;
  }

  if (root->left == nullptr && root->right == nullptr) {
    if (leafDepth == -1) {
      leafDepth = depth;
    }
    return depth == leafDepth;
  }

  return checkPaths(root->left, depth+1, leafDepth) && checkPaths(root->right, depth+1, leafDepth);
}
 
bool equalPaths(Node * root)
{
  int leafDepth = -1;
  return checkPaths(root, 0, leafDepth);

}

