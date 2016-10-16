#include <iostream>

using namespace std;

void arrayCreation(int array[], int n) {
  for (auto i = 0; i < n; i++) {
    array[i] = rand() % 23;
  }
}

void selectionSort(int array[], int n) {
  auto i = 0;
  auto j = 0;
  auto minIndex = 0;
  auto temp = 0;

  for (i = 0; i < n - 1; i++) {
    minIndex = i;
    for (j = i + 1; j < n; j++)
      if (array[j] < array[minIndex])
        minIndex = j;
    if (minIndex != i) {
      temp = array[i];
      array[i] = array[minIndex];
      array[minIndex] = temp;
    }
  }
}

void insertionSort(int array[], int n) {
  for (auto i = 1; i < n; i++) {
    auto current = array[i];
    int j;
    for (j = i - 1; j >= 0 && current < array[j]; j--) {
      array[j + 1] = array[j];
    }
    array[j + 1] = current;
  }
}

void selectionSortExecution() {
  const auto arraySize = 5;
  int array[arraySize];

  arrayCreation(array, arraySize);

  for (auto i : array) {
    cout << i << " ";
  }

  cout << endl;

  selectionSort(array, arraySize);

  for (auto i : array) {
    cout << i << " ";
  }

  cout << endl;
}

void insertionSortExecution() {
  const auto arraySize = 5;
  int array[arraySize];

  arrayCreation(array, arraySize);

  for (auto i : array) {
    cout << i << " ";
  }

  cout << endl;

  insertionSort(array, arraySize);

  for (auto i : array) {
    cout << i << " ";
  }

  cout << endl;
}

int main() {
  cout << "Selection Sort:" << endl;
  selectionSortExecution();

  cout << endl;

  cout << "Insertion Sort:" << endl;
  insertionSortExecution();

  return 0;
}
