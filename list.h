#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include<stdint.h>


typedef struct _node_ Node;



struct _node_{
int32_t data;       // node def(data and next node address)
Node *next;
};

typedef struct _slist_ Slist;
struct _slist_{
Node *head;
Node *tail;           //head and tail data
uint32_t length;
};




Slist slist_new();
uint32_t slist_length(const Slist *list);
uint32_t slist_lookup(Slist *list,int32_t key);
Slist* slist_add_head(Slist *list,int32_t element);
Slist* slist_add_tail(Slist *list,int32_t element);
Slist* slist_delete_head(Slist *list);
Slist* slist_delete_tail(Slist *list);
int32_t slist_min(Slist *list);
int32_t slist_max(Slist *list);
Slist* slist_spec_ele(Slist *list, int32_t element,int32_t spec_ele);
Slist* slist_spec_ele_delete(Slist *list, int32_t spec_ele);
uint32_t slist_compare(Slist *list1,Slist *list2);
Slist* slist_reverse(Slist *list);
Slist* slist_union(Slist *list1,Slist *list2);
Slist* slist_intersection(Slist *list1,Slist *list2);
Slist* slist_unique(Slist* list,uint32_t element);
#endif
