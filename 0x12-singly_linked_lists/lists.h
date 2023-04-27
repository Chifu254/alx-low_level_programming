#ifndef LISTS_HEADER
#define LISTS_HEADER

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


typedef struct list_s //struct list_s - singly linked list
{
char *str; //string - (malloc'ed string)
unsigned int len; //length of the string
struct list_s *next; //points to the next node
} list_t;


#endif
