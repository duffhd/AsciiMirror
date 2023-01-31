### Ascii Mirror
Simple implementation to mirror ascii art. It doesn't work with every character
as some of them cant be mirrored.

The program works simply by:

1. Splitting the art string by new line characters `\n`.
2. Getting the biggest line from the string.
3. Appending the difference as empty characters `' '` between the biggest line and the current line size into the string.
4. Print each line reversed.

Example of a reversed ASCII cat

```text
  )  /\_/\   /
 (_ ( ^.^ ) /
   )  \"/
    ( | | )
   (__d b__)
```

```text
\   /\_/\  (
 \ ( ^.^ ) _)
     \"/  (
   ( | | )
  (__d b__)
```