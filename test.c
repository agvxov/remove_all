// @BAKE gcc -o $*.out $@ filesystem_remove.c -ggdb
#include "filesystem_remove.h"

signed main(void) {
    return !filesystem_remove("testdir/");
}
