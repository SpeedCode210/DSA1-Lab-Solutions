#include <string>
using namespace std;
#ifndef H_RAOUF_SORTING
#define H_RAOUF_SORTING

void selection_sort(int* array, int size);
void insertion_sort(int* array, int size);
void bubble_sort(int* array, int size);

void selection_sort(string &array, int size);
void insertion_sort(string &array, int size);
void bubble_sort(string &array, int size);

#endif