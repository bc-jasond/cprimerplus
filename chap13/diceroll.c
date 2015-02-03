extern int rand1(void);
int rollem(int sides)
{
    int roll;
    roll = rand1() % sides + 1.0;
    return roll;
}
