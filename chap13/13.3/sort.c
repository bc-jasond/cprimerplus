void sort(int array[], int limit)
{
    int top, search, pos, highest, temp;

    for (top = 0; top < limit - 1; top++) {
        highest = array[top];
        for (search = top + 1; search < limit; search++) {
            if (array[search] > highest) { 
                pos = search;
                highest = array[search];
            }
        }
        temp = highest;
        array[pos] = array[top];
        array[top] = temp;
    }
}
