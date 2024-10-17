#include <iostream>
#include <array>
#include <assert.h>
#include "slide.cpp"

using namespace std;

int main()
{
    //Test 1
    int arr1[] = {1, 2, 3, 4, 5};
    array_shift_left(arr1, 5, 1); //Array should look like: 2, 3, 4, 5, 1
    assert(arr1[0] == 2);
    assert(arr1[1] == 3);
    assert(arr1[2] == 4);
    assert(arr1[3] == 5);
    assert(arr1[4] == 1);

    //Test 2
    int arr2[] = {1, 2, 3, 4, 5};
    array_shift_left(arr2, 5, 3); //Array should look like: 4, 5, 1, 2, 3
    assert(arr2[0] == 4);
    assert(arr2[1] == 5);
    assert(arr2[2] == 1);
    assert(arr2[3] == 2);
    assert(arr2[4] == 3);

    //Test 3
    int arr3[] = {1, 2, 3};
    array_shift_left(arr3, 3, 1); //Array should look like: 2, 3, 1
    assert(arr3[0] == 2);
    assert(arr3[1] == 3);
    assert(arr3[2] == 1);

    //Test 4
    int arr4[] = {1, 2, 3};
    array_shift_left(arr4, 3, 3); //Array should look like: 1, 2, 3
    assert(arr4[0] == 1);
    assert(arr4[1] == 2);
    assert(arr4[2] == 3);

    //Right Test 1
    int arr5[] = {1, 2, 3, 4, 5};
    array_shift_right(arr5, 5, 1); //Array should look like: 5, 1, 2, 3, 4
    assert(arr5[0] == 5);
    assert(arr5[1] == 1);
    assert(arr5[2] == 2);
    assert(arr5[3] == 3);
    assert(arr5[4] == 4);

    //Right Test 2
    int arr6[] = {1, 2, 3};
    array_shift_right(arr6, 3, 2); //Array should look like: 1, 3, 2
    assert(arr6[0] == 2);
    assert(arr6[1] == 3);
    assert(arr6[2] == 1);

    // Vector Test
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector_shift(vec1, 1); //Array should look like: 2, 3, 4, 5, 1
    assert(vec1[0] == 2);
    assert(vec1[1] == 3);
    assert(vec1[2] == 4);
    assert(vec1[3] == 5);
    assert(vec1[4] == 1);

    // Vector Test
    vector<int> vec2 = {1, 2, 3, 4, 5};
    vector_shift(vec2, 1); //Array should look like: 4, 5, 1, 2, 3
    assert(vec2[0] == 2);
    assert(vec2[1] == 3);
    assert(vec2[2] == 4);
    assert(vec2[3] == 5);
    assert(vec2[4] == 1);

    cout << "Your Code Works Fine!" << endl;

    return 0;
}