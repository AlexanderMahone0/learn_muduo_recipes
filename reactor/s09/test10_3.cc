#include <stdio.h>

class GClass {
public:
    GClass()
    {
        printf("constructing GClass()\n");
    }
};

GClass gclass;

int main()
{
    printf("entered main()\n");

    return 0;
}


