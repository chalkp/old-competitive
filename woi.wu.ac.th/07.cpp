#include <bits/stdc++.h>
using namespace std;

const int N = 5;
int a[N], b[N], c[N];
char d[N];

void inputarr(int arr[]) {
  for(int i=0; i<N; i++) {
    cin >> arr[i];
  }
  return;
}

void addarr(int arr1[], int arr2[], int arr3[]) {
  for(int i=0; i<N; i++) {
    arr3[i] = arr1[i] + arr2[i];
  }
  return;
}

void printarr(auto arr[]) {
  for(int i=0; i<N; i++) {
    cout << arr[i] << ' ';
  }
  cout << '\n';
  return;
}

void checkeo(int arr[], char ch[]) {
  for(int i=0; i<N; i++) {
    (arr[i] & 1)? ch[i]='o' : ch[i]='e';
  }
  return;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  inputarr(a);
  inputarr(b);
  addarr(a, b ,c);
  printarr(c);
  checkeo(c, d);
  printarr(d);

  return 0;
}
