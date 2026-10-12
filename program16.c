#include "Header.h"
#include <assert.h>

int mai()
{
    assert(Addition(10,11)== 21);

    assert(Addition(-10,11)== 10);

    assert(Addition(-10,-11)== -30);


    return EXIT_SUCCESS;
}