*This project has been created as part of the 42 curriculum by andrefe2.*

# Libft

## Description

**Libft** is the first project of the 42 common core. The goal is to build, from scratch, a static C library (`libft.a`) containing general-purpose functions that will be reused in later projects of the curriculum.

The project is split in three parts:

1. **Libc functions** – re-implementations of standard C library functions, with the same prototypes and behaviour as the originals (prefixed with `ft_`).
2. **Additional functions** – utilities that are not in the libc, or that exist in a different form (string manipulation, conversions, output to a file descriptor).
3. **Linked list functions** – a minimal API to manipulate singly linked lists built on the `t_list` structure.

Rules followed throughout the project: written in C and compliant with the 42 Norm, compiled with `cc -Wall -Wextra -Werror`, no global variables, no memory leaks, library created with `ar` (no `libtool`), and only the external functions allowed by the subject (`malloc`, `free`, `write`).

## Instructions

### Compilation

From the root of the repository:

```bash
make          # builds libft.a
make clean    # removes the object files
make fclean   # removes the object files and libft.a
make re       # fclean + all
```

The Makefile compiles every `.c` file with `-Wall -Wextra -Werror`, archives the objects with `ar rcs`, rebuilds an object when its `.c` file or `libft.h` changes, and does not relink when nothing has changed.

## Library description

The library is made of 43 functions, grouped as in the subject.

### Part 1 – Libc functions

| Function | Description |
|---|---|
| `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Character classification. Return `1` if the character belongs to the class, `0` otherwise. |
| `ft_toupper`, `ft_tolower` | Convert a letter to upper / lower case; any other value is returned unchanged. |
| `ft_strlen` | Length of a string. |
| `ft_memset` | Fills the first `n` bytes of a memory area with a byte value. |
| `ft_bzero` | Sets the first `n` bytes of a memory area to zero. |
| `ft_memcpy` | Copies `n` bytes between two memory areas that do not overlap. |
| `ft_memmove` | Copies `n` bytes between memory areas, correctly handling overlap. |
| `ft_memchr` | Finds the first occurrence of a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas byte by byte. |
| `ft_strlcpy`, `ft_strlcat` | Size-bounded string copy / concatenation; they return the length of the string they tried to create. |
| `ft_strchr`, `ft_strrchr` | Find the first / last occurrence of a character in a string. |
| `ft_strncmp` | Compares at most `n` characters of two strings. |
| `ft_strnstr` | Finds a substring inside the first `len` characters of a string. |
| `ft_atoi` | Converts the beginning of a string to an `int`. |
| `ft_calloc` | Allocates zero-initialised memory for an array. |
| `ft_strdup` | Returns a newly allocated copy of a string. |

### Part 2 – Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a new string extracted from `s`, starting at index `start`, with at most `len` characters. |
| `ft_strjoin` | Returns a new string resulting from the concatenation of two strings. |
| `ft_strtrim` | Returns a copy of a string without the characters of a given set at its beginning and end. |
| `ft_split` | Splits a string using a delimiter character; returns a `NULL`-terminated array of newly allocated strings. |
| `ft_itoa` | Converts an `int` to a newly allocated string (negative numbers included). |
| `ft_strmapi` | Applies a function to each character of a string (with its index) and builds a new string from the results. |
| `ft_striteri` | Applies a function to each character of a string, passing its index and its address. |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write a character, a string, a string followed by a newline, or an integer to a file descriptor. |

### Part 3 – Linked lists

The functions use the following structure, declared in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node holding the given content, with `next` set to `NULL`. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the nodes of the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees the content of a node (with `del`) and the node itself, without touching the next node. |
| `ft_lstclear` | Deletes a node and all its successors, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Builds a new list by applying a function to the content of every node, freeing everything if an allocation fails. |

## Technical choices

- Helper functions are declared `static` so that their scope is limited to their own file.
- Allocating functions return `NULL` on failure and free whatever they had already allocated (relevant for `ft_split` and `ft_lstmap`).
- The Makefile lists the source files explicitly (no wildcards) and uses a pattern rule so that objects depend on both their `.c` file and `libft.h`.

## Resources

### References

- `man 3` pages of the re-implemented functions (e.g. `man 3 memset`, `man 3 strlcpy`) and `man ar`
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- [cppreference – C](https://en.cppreference.com/w/c)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- The 42 Norm (norminette)

### Use of AI

AI (Claude) was used as a tutor and reviewer, not to write the functions of the library. The algorithms and the code of the `ft_*.c` files were written by me. AI was used for:

- Explaining concepts I did not understand: how `make` decides what to rebuild, the difference between compiling and linking, static libraries and `ar`, how memory and `void *` work, and how linked lists and double pointers (`t_list **`) work.
- Reviewing my reasoning and my code, pointing out mistakes (types, precedence of `*` and `->`, ownership of memory) and asking questions so that I could fix them myself.
- Setting up the Git workflow between my home machine and the school.
