#include <iostream>
#include <array>

using namespace std;

void array_shift(int arr[], int arr_size, int times)
{
   
    for (int i = 0; i < times; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < arr_size-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[arr_size-1] = temp;
    }

}