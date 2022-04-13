#include <bits/stdc++.h>
using namespace std;

typedef class node {
public:
  int data;
  class node* next;
  node() {}
  node(int value) {
    data = value;
    next = nullptr;
  }
} node;

void print(node* now) {
  if(now == nullptr) {
    return;
  }
  cout << now->data;
  print(now->next);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  node* head = new node(1);
  node* a = new node(2);
  node* b = new node(3);

  head->next = a;
  a->next = b;
  cout << head->data;

  node* c = new node(3);
  print(head);

  return 0;
}