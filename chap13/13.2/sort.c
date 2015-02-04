void sort(float array[], int limit)
{
    int top, search;
    float temp;

    for (top = 0; top < limit - 1; top++)
        for (search = top + 1; search < limit; search++)
            if (array[search] < array[top]) {
                temp = array[search];
                array[search] = array[top];
                array[top] = temp;
            }
}
