#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int array_filling(int arr[], int number_of_elements);
    int show_array(int arr[], int number_of_elements);
    int array_max_search(int arr[], int number_of_elements);
    int array_min_search(int arr[], int number_of_elements);
    int array_min_last_swap(int arr[], int number_of_elements);
    int array_show_array(int arr[], int number_of_elements);

    srand(time(0));
    int const n = 6;
    int B[n];

    array_filling(B, n);

    cout << "Your array" << endl;
    show_array(B, n);

    cout << "Smallest number is " << B[array_min_search(B, n)] << endl;
    cout << "Largest number is " << B[array_max_search(B, n)] << endl;
    cout << "Difference between largest number and smallest number is " << B[array_max_search(B, n)] - B[array_min_search(B, n)] << endl;

    array_min_last_swap(B, n);

    cout << "Your new array: " << endl;

    show_array(B, n);

    return 0;
}

int array_filling(int arr[], int number_of_elements)
{
    for (int i = 0; i < number_of_elements; i++)
    {
        arr[i] = rand() % 101;
    }

    return 0;
}

int show_array(int arr[], int number_of_elements)
{
    for (int i = 0; i < number_of_elements; i++)
    {
        cout.width(4);
        cout << arr[i] ;
    }
    cout << endl;

    return 0;
}

int array_max_search(int arr[], int number_of_elements)
{
    int i_max = 0;

    for (int i = 0; i < number_of_elements; i++)
    {
        if (arr[i] > arr[i_max])
        {
            i_max = i;
        }
    }

    return i_max;
}

int array_min_search(int arr[], int number_of_elements)
{
    int i_min = 0;

    for (int i = 0; i < number_of_elements; i++)
    {
        if (arr[i] < arr[i_min])
        {
            i_min = i;
        }
    }

    return i_min;
}

int array_min_last_swap(int arr[], int number_of_elements)
{
    int min_element = arr[array_min_search(arr, number_of_elements)];

    for (int i = 0; i < number_of_elements; i++)
    {
        if (arr[i] == min_element)
        {
            arr[i] = arr[number_of_elements - 1];
        }
    }

    arr[number_of_elements - 1] = min_element;

    return 0;
}
