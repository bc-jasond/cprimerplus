#define MAXSIZE 10
extern int getarray(int ar[], int n);
extern void sort(int ar[], int n);
extern void print(int ar[], int n);
int main(void)
{
    int numbers[MAXSIZE];
    int size;

    size = getarray(numbers, MAXSIZE);
    sort(numbers, size);

    print(numbers, size);
    return 0;
}

