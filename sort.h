#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>


/**
* struct listint_s - the doubly linked lists node
*
* @n: Int stored in the node
* @prev: previous element of the lists pointer
* @next: next element of the lists pointer
*/
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void swap(int *a, int *b);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int partition(int *array, size_t size, int left, int right);
void qsort_recursive(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swap_behind_node(listint_t **list, listint_t **tail, listint_t **current);
void swap_ahead_node(listint_t **list, listint_t **tail, listint_t **current);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void max_heapify(int *array, size_t size, size_t first, size_t parent_index);

#endif
