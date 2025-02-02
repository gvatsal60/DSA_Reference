/***************************************************************************************
 * File: ll_insertion.cpp
 * Author: @gvatsal60
 * Date: 02-Feb-2025
 * Description: Brief description of the file's purpose.
 **************************************************************************************/

/***************************************************************************************
 * Includes
 **************************************************************************************/

#include "base.hpp"

/***************************************************************************************
 * Global Functions Definitions
 **************************************************************************************/
struct Node {
  int data{};
  struct Node *next{};
  Node() = default;
  Node(int x) {
    data = x;
    next = nullptr;
  }
};

class Solution {
public:
  Node *insertAtEnd(Node *head, int x) {
    if (head == nullptr) {
      return nullptr;
    }

    Node *real = head;

    while (real->next != nullptr) {
      real = real->next;
    }

    real->next = new Node(x);

    return head;
  }

  Node printList(Node *head) {
    Node *real = head;
    while (real != nullptr) {
      std::cout << real->data << "->";
      real = real->next;
    }
    return *head;
  }
};

int main(int argc, char const *argv[]) {
  Node ll{};
  ll.data = 1;
  ll.next = new Node(2);
  ll.next->next = new Node(3);

  Solution sol;
  Node *head = sol.insertAtEnd(&ll, 4);
  sol.printList(head);

  return 0;
}
