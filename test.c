// @BAKE gcc -o $*.out $@ remove_all.c -Wall -Wpedantic -ggdb
#include "remove_all.h"

signed main(void) {
    return (remove_all("testdir/") == -1);
}
