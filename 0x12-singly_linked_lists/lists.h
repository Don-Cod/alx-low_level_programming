#ifndef LISTS_H
#define LISTS_H

/**
 * struct lists_s - singly linked lists
 * @str: string - (malloc'ed sting)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: signly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} liata;

size_t prints_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head,const char *str);
void free_list(list_t *head);
int _putchar(char c);

#endif
