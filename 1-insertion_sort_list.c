#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: Double pointer to the list
 * Return: Sorted list
 */
void insertion_sort_list(listint_t **list)
{
   
    listint_t *current, *temp;
    for (current = (*list)->next; current != NULL; current = current->next) {
        temp = current;
        while (temp->prev != NULL && temp->n < temp->prev->n) {
           
            temp->prev->next = temp->next;
            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            }
            temp->next = temp->prev;
            temp->prev = temp->prev->prev;
            temp->next->prev = temp;

            if (temp->prev == NULL) {
                *list = temp;
            } else {
                temp->prev->next = temp;
            }
            
            
            print_list(*list);
        }
    }
}
