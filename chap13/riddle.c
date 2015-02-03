#include <stdio.h>

int main(void)
{
    for (int one = 0; one <= 9; one++)
        for (int two = 0; two <= 9; two++)
            for (int three = 0; three <= 9; three++)
                for (int four = 0; four <= 9; four++)
                    for (int five = 0; five <= 9; five++)
                        for (int six = 0; six <= 9; six++)
                            if (one == three + 1 
                             && two == four - 1 
                             && five == three - 1 
                             && six == four + 1 
                             && one == two + three 
                             && one + two + three + four + five + six == 30) 
                                printf("%d%d%d%d%d%d\n", one, two, three, four, five, six);

    return 0;
}
