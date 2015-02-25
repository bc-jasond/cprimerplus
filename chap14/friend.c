#include <stdio.h>
#define LEN 20
#define M1 "    Thank you for a wonderful evening, "
#define M2 "You certainly prove that a "
#define M3 "is a special kind of guy. We must get together"
#define M4 "over a delicious "
#define M5 " and have a few laughs."

struct names {
    char first[LEN];
    char last[LEN];
};
struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    static struct guy fellow = {
        { "Egbert", "Snivley" },
        "eggplant",
        "harddisk eraser",
        25435.00
    };

    printf("Dear %s %s, \n\n", fellow.handle.first, fellow.handle.last);
    printf("%s%s.\n", M1, fellow.handle.first);
    printf("%s%s\n", M2, fellow.job);
    printf("%s\n", M3);
    printf("%s%s%s\n\n", M4, fellow.favfood, M5);
    printf("%40s%s\n", " ", "See you soon,");
    printf("%40s%s\n", " ", "Shalala");
    return 0;
}
