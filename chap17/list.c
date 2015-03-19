#include <stdio.h>
#include <stdlib.h>
#include "list.h"

static void CopyToNode(Item item, Node * pnode);

void InitializeList(List * plist)
{
    *plist = NULL;
}

BOOLEAN EmptyList(List l)
{
    if (l == NULL)
        return True;
    else
        return False;
}

BOOLEAN FullList(List l)
{
    Node * pt;
    BOOLEAN full;

    pt = (Node *) malloc(sizeof(Node));
    if (pt == NULL)
        full = True;
    else
        full = False;
    free(pt);
    return full;
}

unsigned int ListItmes(List l)
{
    unsigned int count = 0;

    while (l != NULL)
    {
        ++count;
        l = l->next;
    }
    return count;
}

BOOLEAN AddItem(Item item, List * plist)
{
    Node * pnew;
    Node * scan = *plist;

    pnew = (Node *) malloc(sizeof(Node));
    if (pnew == NULL)
        return False;

    CopyToNode(item, pnew);
    pnew->next = NULL;
    if (scan == NULL)
        *plist = pnew;
    else
    {
        while (scan->next != NULL)
            scan = scan->next;
        scan->next = pnew;
    }
    return True;
}

void Traverse(List l, void (* pfun)(Item item))
{
    while (l != NULL)
    {
        (*pfun)(l->item);
        l = l->next;
    }
}

static void CopyToNode(Item item, Node * pnode)
{
    pnode->item = item;
}
