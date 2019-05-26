#include "wnodes.h"
#include <stdio.h>


void cb(struct WNode* self, int a)
{
    printf("Here: %d\n", a);
}

int
main()
{
    struct WNode* nn = W_NEW(WNet);
    struct WNode* a = W_NEW(WInput, .prompt = "a> ");
    struct WNode* b = W_NEW(WInput, .prompt = "b> ");

    W_OBJECT_SIGNAL_TYPE* handle;

    W_CONNECT(a,on_data,cb,handle);
    W_EMIT(a,on_data,2);
}

