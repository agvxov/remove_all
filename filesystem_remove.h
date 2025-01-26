#ifndef FILESYSTEM_REMOVE
#define FILESYSTEM_REMOVE
#include <stdbool.h>

/* C replication of `std::filesystem::remove` of C++17
 * Unlike standard C remove(3), it can remove recursively.
 */
bool filesystem_remove(const char * const p);

#endif
