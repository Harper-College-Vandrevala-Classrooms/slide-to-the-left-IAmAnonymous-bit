#include <iostream>
#include <array>
#include <vector>

using namespace std;

void array_shift_left(int arr[], int arr_size, int times)
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

void array_shift_right(int arr[], int arr_size, int times)
{
    for (int i = times; i > 0; i--)
    {
        int temp = arr[arr_size-1];
        for (int j = arr_size-1; j > 0; j--)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
}

void vector_shift(vector<int> &vec, int times)
{
    for (int i = 0; i < times; i++)
    {
        int temp = vec[0];
        for (int j = 0; j < vec.size()-1; j++)
        {
            vec[j] = vec[j+1];
        }
        vec[vec.size()-1] = temp;
    }
    
}