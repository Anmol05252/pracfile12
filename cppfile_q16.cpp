//Write a template function that returns the average of all the elements of an array. The arguments to the function should be the array name and the size of the array (type int). In main(), exercise the function with arrays of type int, long, double, and char.

#include <iostream>

using namespace std;
template <class T>

T avg(T arr[],int size){
    T sum = NULL;
    for(int i =0;i<size;i++){
        sum+=arr[i];
    }

    cout << "\nSum = " << sum;
    return(sum/size);
}
void int_array(){

    cout << "\nEnter the size of the array: ";
    int size;
    cin >> size;

    int array[size];

    for(int i =0;i<size;i++){
        cout << "\nEnter the " <<i+1 <<" element: ";
        cin >> array[i];
    }
    cout << "\nAverage of the given values: "<<avg(array,size);

}

void long_array(){
     cout << "\nEnter the size of the array: ";
    int size;
    cin >> size;

    long array[size];

    for(int i =0;i<size;i++){
        cout << "\nEnter the " <<i+1 <<" element: ";
        cin >> array[i];
    }
    cout << "\nAverage of the given values: "<<avg(array,size);

}

void char_array(){
     cout << "\nEnter the size of the array: ";
    int size;
    cin >> size;

    char array[size];

    for(int i =0;i<size;i++){
        cout << "\nEnter the " <<i+1 <<" element: ";
        cin >> array[i];
    }
    cout << "\nAverage of the given values: "<<avg(array,size);

}
void double_array(){
     cout << "\nEnter the size of the array: ";
    int size;
    cin >> size;

    double array[size];

    for(int i =0;i<size;i++){
        cout << "\nEnter the " <<i+1 <<" element: ";
        cin >> array[i];
    }
    cout << "\nAverage of the given values: "<<avg(array,size);

}

int main()
{
    int_array();
    long_array();
    char_array();
    double_array();
}

