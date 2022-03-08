#include <stdio.h>
int main() {
  int m, n;
  scanf("%d%d", &m, &n);
  int arr1[m][n], arr2[m][n], result[m][n];
  for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
      scanf("%d", &arr1[i][j]);
    }
  }
  for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
      scanf("%d", &arr2[i][j]);
      result[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
  for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
  return 0;
}
