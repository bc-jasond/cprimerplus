#define TSIZE 45
struct film
{
	char title[TSIZE];
	int rating;
};

typedef struct film Item;
typedef enum boolean {False, True} BOOLEAN;
typedef struct node
{
	Item item;
	struct node * next;
} Node;
typedef Node * List;

void InitializeList(List * plist);

BOOLEAN EmptyList(List l);

BOOLEAN FullList(List l);

unsigned int ListItems(List l);

BOOLEAN AddItem(Item item, List * plist);

void Traverse(List l, void (* pfun)(Item item));
