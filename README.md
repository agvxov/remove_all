# remove\_all
> C replication of `std::filesystem::remove_all` of C++17.

## SYNOPSIS

    #include <remove_all.h>

    int remove_all(const char * const p);

## DESCRIPTION
Deletes the contents of `p` (if it is a directory)
and the contents of all its subdirectories, recursively,
then deletes `p` itself as if by repeatedly applying the POSIX remove.
Symlinks are not followed (symlink is removed, not its target).

## RETURN VALUE
On success, zero is returned.
On error, -1 is returned, and errno is set  to  indicate the error.

## ERRORS
The errors that occur are those for unlink(2) and rmdir(2).

## ATTRIBUTES
For an explanation of the terms used in this section, see attributes(7).

| Interface | Attribute | Value |
| :---: |  :---: | :---: |
| rename\_all() | Thread safety | MT-Safe |

## BUGS
Infelicities in  the protocol underlying NFS
can cause the unexpected disappearance of files
which are still being used.

## SEE ALSO
`remove`(2),
`unlink`(2),
`rmdir`(2),

## NOTES
The C++ `remove_all` returns the number of deleted files,
we instead copy the return value schema of POSIX (and `remove(3)`).
