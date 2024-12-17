#include <algorithm>
#include <string>
#include "sorting.h"
using namespace std;

void selection_sort(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        int pos = 0;
        int val = __INT32_MAX__;
        for (int j = i; j < size; j++)
        {
            if (array[j] < val)
            {
                pos = j;
                val = array[j];
            }
        }
        swap(array[i],array[pos]);
    }

}

void insertion_sort(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i;
        while (j > 0 && array[j] < array[j - 1])
        {
            swap(array[j], array[j - 1]);
            j--;
        }
    }
}

void bubble_sort(int *array, int size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-1; j++){
            if(array[j] > array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
    }
}

void selection_sort(string &array, int size)
{
    for (int i = 0; i < size; i++)
    {
        int pos = 0;
        int val = __INT32_MAX__;
        for (int j = i; j < size; j++)
        {
            if (array[j] < val)
            {
                pos = j;
                val = array[j];
            }
        }
        swap(array[i],array[pos]);
    }

}

void insertion_sort(string &array, int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i;
        while (j > 0 && array[j] < array[j - 1])
        {
            swap(array[j], array[j - 1]);
            j--;
        }
    }
}
void bubble_sort(string &array, int size){
        for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-1; j++){
            if(array[j] > array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
    }
}