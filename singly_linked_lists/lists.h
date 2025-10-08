#ifndef lists_H
#define lists_H


typedef struct list_s
{
    char *str;
    unsigned int length;
    struct list_s *next;
} list_t;


size_t print_list(const list_t *h);








#endif
