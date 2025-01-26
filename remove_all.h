#ifndef REMOVE_ALL_H
#define REMOVE_ALL_H

/* C replication of `std::filesystem::remove` of C++17.
 * Unlike standard C remove(3), it can remove recursively.
 */
int remove_all(const char * const p);

#endif
