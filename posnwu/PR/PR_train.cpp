#include <bits/stdc++.h>
using namespace std;

typedef struct node {
  int data;
  struct node* next;
  node() {}
  node(int value) {
    data = value;
    next = nullptr;
  }
} node;

node* head = new node(999);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string cmd;
  int x, n;
  cin >> n;
  node* temp = head;
  while(n--) {
    cin >> cmd;
    if(cmd == "head") {
      temp = head;
    } else if(cmd == "next") {
      if(temp->next != nullptr) {
        temp = temp->next;
      }
    } else if(cmd == "add") {
      cin >> x;
      if(temp->next == nullptr) {
        temp->next = new node(x);
      } else {
        node* n = new node(x);
        n->next = temp->next;
        temp->next = n;
      }
    } else if(cmd == "remove") {
      if(temp->next != nullptr) {
        temp->next = temp->next->next;
      }
    } else if(cmd == "call") {
      cout << temp->data << '\n';
    } else if(cmd == "list") {
      while(temp->next != nullptr) {
        cout << temp->data << ' ';
        temp = temp->next;
      }
      cout << temp->data << '\n';
    } else if(cmd == "tail") {
      while(temp->next != nullptr) {
        temp = temp->next;
      }
    }
  }
  return 0;
}
