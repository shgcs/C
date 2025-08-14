#include <stdio.h>
#include <stdlib.h>
#define Number 3

int main()
{

    printf("file name is %s\n", __FILE__);
    printf("today date is %s\n", __DATE__);
    printf("time now is %s\n", __TIME__);
    printf("line no is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);

    // if ifdef else elif

#if (Number == 2)

    printf("if %d\n", Number);

#elif (Number == 3)
    printf("elif %d\n", Number);

#else
    printf("this is else\n");
#endif

#ifdef Number
    printf("this is define\n");
#endif

    return 0;
}