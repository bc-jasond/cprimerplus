#define MAXSIZE 10
extern int getarray(float ar[], int n);
extern void sort(float ar[], int n);
extern void print(float ar[], int n);
int main(void)
{
    float numbers[MAXSIZE];
    int size;

    size = getarray(numbers, MAXSIZE);
    sort(numbers, size);

    print(numbers, size);
    return 0;
}

