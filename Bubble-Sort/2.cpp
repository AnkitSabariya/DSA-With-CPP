#include <iostream>
using namespace std;
int main()
{
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  int arr[size];

  cout << "Enter " << size << " elements:\n";
  // Create Array

  for (int i = 0; i < size; i++)
  {
    cout << "array" << "[" << i << "] :";
    cin >> arr[i];
  }
  // Sorting Array
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1]) // Swap condition
      {
        int temp = arr[j];   //  Store arr[j] in temp And Now arr[j] is empty !!
        arr[j] = arr[j + 1]; //  Move arr[j + 1] into arr[j] Now arr[j+1] is empty
        arr[j + 1] = temp;   //  Move temp (original arr[j]) into arr[j + 1]
      }
    }
    cout << "\n";
  }
  // Printing Array

  cout << "Array elements are: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " "; 
  }
}
