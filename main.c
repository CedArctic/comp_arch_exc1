#include <stdio.h>
#include <stdlib.h>

#define N 10

void sort(int* arr, int n) {
  for (int i = 1; i < n; ++i) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
}

int main() {
  int arr[N];
  for (int i = 0; i < N; ++i) {
    arr[i] = rand() % 100;
  }

  sort(arr, N);

  for (int i = 0; i < N; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
