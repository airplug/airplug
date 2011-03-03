// page.h
#ifndef PAGE_H
#define PAGE_H

#include node.h
#include <vector>
using namespace std;

/**
 * A struct prepresenting a 'page' of information
 * for display by the UI manager. A page consists
 * of a vector of Nodes, and an index pointing to
 * the 'current' node.
 */

struct Page {
  vector<Node> nodes; /**< A list of the nodes in this page */
  int currentNode; /**< An index to the current node */
};

#endif // PAGE_H
