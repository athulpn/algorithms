#include<stdlib.h>
#include <stdio.h>
#define SIZE 500000

void insertionSort(int arr[])
{
    for(int i=1;i<=SIZE;i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int array[SIZE];
    for (int i = 0; i < SIZE; i++) 
        array[i] = rand()%1000;
    insertionSort(array);

    

}
