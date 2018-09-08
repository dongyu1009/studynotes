#include <iostream>

using namespace std;

int main(void)
{
    // -------------------------- pointer 
    int val = 32;
    int *pnt = &val;
    *pnt = 44;
    // cout << *pnt << endl;
    cout << val << endl;


    int **pnt2 = &pnt;
    int *pnt3 = *pnt2;
    cout << *pnt3 << endl;


    // the core of programming is memory-operation. the core of memory-operation is pointer.
    //
    // -------------------------- sizeof 
    int a = 0;
    short b = 1;
    char c = 0;
    unsigned char d = 2;
    unsigned short e = 2;
    float f = .1;
    cout << "size of integer : " << sizeof a << endl;
    cout << "size of short : " << sizeof b << endl;
    cout << "size of char : " << sizeof c << endl;
    cout << "size of unsigned char : " << sizeof d << endl;
    cout << "size of unsigned short: " << sizeof e << endl;
    cout << "size of float: " << sizeof f << endl;
    // cout << sizeof(a) << endl;

    // -------------------------- array

    int days[8] = {1,2,3,4,5,6,10,23};

    for(int i = 0; i < 10; i++) { // out of bound
        cout << "day:" << days[i] << endl;
    }


    int month[5]; // no initailization 
    for(int i = 0; i < 5; i ++) {
        cout << "month:" << month[i] << endl;
    }

    int arr1[8] = {11,22,33}; // the last 5 elements would be set as 0 by compiler.
    // int arr2[8] = {11,22,33,44,55,66,77,88,99}; // this will cause an error.
    int arr2[] = {11,22,33,44,55,66,77,88,99}; 

    int length = 5;
    int arr3[length];

    // ---------------------------- array bound
    //
    int value1 = 55, value2 = 66;

    int array[4];

    cout << "value1:" << value1 << " value2:" << value2 << endl;
    for(int i = -1; i < 5; i++)
    {
        array[i] = 2 * i + 1;
    }

    for(int i = -1; i < 5; i++)
    {
        cout << "i : " << i << " arrayi: " << array[i] << endl;;
    }
    
    cout << "value1:" << value1 << " value2:" << value2 << endl;

    // ----------------------------- multi array
    //
    int marr[3][2] = {{1,3}, {3,5}, {9,4}};
    int marr1[3][2] = {1,3,3,4,5,2};

    // ----------------------------- array and pointer
    //
    // the name of array is the pointer of the first element in the array, which means:
    // arr = &arr[0]
    //
    //
    
    int arr4[10] = {1,3,4,5,6,7,3,4,5,6};

    int *pta = &arr4[0];

    for(int i = 0; i < 10; i++)
    {
        cout << "index : " << i << " value : " << arr4[i] << " value :" << *(pta + i) << endl;
    }


    // ------------------------------ multi-array and pointer
    //

    int arr5[2][5] = {1,2,3,4,5,6,7,8,9,10};

    cout << "arr5[1][1] : " << *(*(&arr5[0] + 1) + 1) << endl;

    // pointer array: int *pt[5] , array pointer : int (*pt)[5]

    int (*ptb)[5] = &arr5[0];

    cout << "arr5[1][0] : " << **ptb << endl;


    return 0;
}
