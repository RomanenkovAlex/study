#ifndef LC_LIST_H
#define LC_LIST_H

typedef struct s_node
{
    void *data;
    struct s_node *next;
} t_node;

t_node *lc_list_create_node(void *data);
t_node *lc_list_last(t_node *head);

t_node* lc_list_find(const t_node *head, void *data, int (*comp)(void *, void *));
void lc_list_foreach(t_node *head, void (*comp)(void *));

void lc_list_push_front(void);
void lc_list_push_back(void);

void lc_list_pop_front(void);
void lc_list_pop_back(void);

void lc_list_insert(void);
void lc_list_remove(void);

#endif