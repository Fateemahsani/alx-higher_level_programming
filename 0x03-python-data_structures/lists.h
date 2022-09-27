#ifndef LISTS_H
#define LISTS_H

<<<<<<< HEAD
=======
#include <stdlib.h>

>>>>>>> 7ff2f827c2b5c7de4b1c64f0313ad6785bc2fa07
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
<<<<<<< HEAD
 * 
 * Description: singly linked list node structure
 * for project
 */

=======
 * Description: singly linked list node structure
 */
>>>>>>> 7ff2f827c2b5c7de4b1c64f0313ad6785bc2fa07
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
<<<<<<< HEAD

int is_palindrome(listint_t **head);

#endif /* LISTS_H */
=======
int is_palindrome(listint_t **head);

#endif /* LISTS_H */
>>>>>>> 7ff2f827c2b5c7de4b1c64f0313ad6785bc2fa07
