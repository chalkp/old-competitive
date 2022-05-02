#include <bits/stdc++.h>
using namespace std;

int n, arr[69420];
long long int ans=0;
void mergeSort(int arr[], int l, int r) {
  if(l==r) {
    return;
  }
  int m = (r-l)/2 +l;

  mergeSort(arr,l,m);
  mergeSort(arr,m+1,r);
  
  int L[m-l+1] , R[r-m];
  for(int i=0;i<m-l+1;i++) {
    L[i] = arr[l+i];
  }
  for(int i=0;i<r-m;i++) {
    R[i] = arr[m+i+1];
  }

  int i=0,j=0,k=l;
  while(i < m-l+1 && j < r-m) {
    if(L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      ans += m-l-i+1;
      arr[k] = R[j];
      j++;
    }
    k++;
  }
  while(i < m-l+1) {
    arr[k] = L[i];
    i++;
    k++;
  }
  while(j < r-m) {
    arr[k] = R[j];
    j++;
    k++;
  }
} 

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n;
  for(int i=0;i<n;i++)
    cin >> arr[i];
  mergeSort(arr,0,n-1);
  cout << ans;

  return 0;
}