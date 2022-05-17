/*
In this challenge, you are given a class called DynamicArray which implements a dynamic array of integers that can grow in size.

This class has the following functions:

void append(int value): Adds a new value at the end of the array.
int get(int index): Returns the value at the given index.
int length(): Returns the current size of the array.
void resize(): Resizes the array when the maximum capacity is reached. The growth factor is two, therefore, it will each time double the capacity of the array.
Your task is to write a derived class called DynamicArrayWithStats which will implement the following functions:

int max(): Returns the maximum element in the dynamic array.
int min(): Returns the minimum element present in the dynamic array.
int mean(): Finds the mean value from the elements in the array and returns it.
Input#
The input will be an integer and it will be given using the append() function. The get() function will be used to print the values in the dynamic array. Then, all functions of the DynamicArrayWithStats class will be called.

Sample Input#
We want to execute the following instructions:

    DynamicArrayWithStats arr = DynamicArrayWithStats();
    arr.append(2);
    arr.append(6);
    arr.append(4);
    arr.append(1);
    arr.append(3);

    cout << "Array: ";
    for(int i = 0; i < arr.length(); i++){
        cout << arr.get(i) << " ";
    }
    cout << endl;

    cout << "Max: " << arr.max() << endl;
    cout << "Min: " << arr.min() << endl;
    cout << "Mean: " << arr.mean() << endl;
Expected Output#
The following is the correct output:

Array: 2 6 4 1 3
Max: 6
Min: 1
Mean: 3
*/
