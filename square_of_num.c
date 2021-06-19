/*
Calculate square of a number without using *, / and pow()
*/
// Simple solution to calculate square without
// using * and pow()
#include <stdio.h>

int square(int num)
{
    // handle negative input
    if (num < 0) num = -num;

    // Initialize result
    int result = 0, times = num;

    while (times > 0)
    {
        int possibleShifts = 0, currTimes = 1;

        while ((currTimes << 1) <= times)
        {
            currTimes = currTimes << 1;
            ++possibleShifts;
        }

        result = result + (num << possibleShifts);
        times = times - currTimes;
    }

    return result;
}

// Driver code
int main()
{
    // Function calls
    for (int n = 10; n <= 15; ++n)
        printf("%d\n",square(n));
    return 0;
}
