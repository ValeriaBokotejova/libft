*This project has been created as part of the 42 curriculum by vbokotej.*

# Libft

**Description**

Libft is the first project in the 42 curriculum. The goal is to recreate essential C standard library functions and build your own reusable library (libft.a).

---

**The project has three parts:**

- **Libc functions** - Reimplement common C functions like `strlen`, `memcpy`, `atoi`, `isdigit`, all prefixed with ft_.

- **Additional functions** - Useful utilities like `ft_split`, `ft_itoa`, `ft_strjoin`, `ft_substr`, and file descriptor functions.

- **Linked list functions** - Full set of functions to handle singly linked lists using the `t_list` structure.

Libft teaches memory management, pointer handling, and low-level C logic, which are key skills for all 42 projects.

---

## Instructions
Compilation & Makefile

The project includes a Makefile to compile the library.

**Available commands:**

| Command        | Description                                                                 |
| -------------- | --------------------------------------------------------------------------- |
| `make` / `all` | Compile all source files and create the static library `libft.a`            |
| `make bonus`  | Same as `make`; bonus linked-list functions are already included by default |
| `make clean`  | Remove all object files (`*.o`)                                              |
| `make fclean` | Remove object files and the library file `libft.a`                          |
| `make re`     | Run `fclean` followed by `make` (full rebuild)                              |




**This creates:**

`libft.a`

**File Compilation**

- All `.c` files are compiled into `.o` object files using:

```bash
cc -Wall -Wextra -Werror -c ft_*.c
```


- The library is then created from these object files:

```bash
ar rcs libft.a *.o
```

**Bonus Functions**

The `bonus` target compiles additional functions for linked-list management (`ft_lst*` functions).

**File Structure**

All files are at the repository root:

- `libft.h`

- `ft_*.c`

- `Makefile`

---

### Library Overview

**Part 1 - Libc Functions**

Recreated standard C functions:

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`

- String functions: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strncmp`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`

- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`

- Conversions: `ft_atoi`

- Allocations: `ft_calloc`, `ft_strdup`

All functions follow the behavior in the standard C library (`man 3`).

**Part 2 - Additional Functions**

Extra utilities for strings and files:

- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`

- File descriptor functions: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

**Part 3 - Linked List Functions**

Using:

```c
typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Implemented functions:
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

**Resources**

- The C Programming Language - K&R

- `man 3` pages for standard C functions

- GNU Glibc and BSD libc documentation

- 42 documentation on memory and pointers

**AI Use**

AI was used only for non-coding tasks:

- Clarifying project requirements

- Improving README structure and wording

- Formatting explanations

AI was not used to write any project code.

---

### Usage Example

To use `libft.a` in your own C program:

1. Include the header in your source file:

```c
#include "libft.h"
```

2. Compile your program with the library:

```bash
gcc -Wall -Wextra -Werror main.c libft.a -o my_program
```

3. Run your program:

```bash
./my_program
```

4. Example with a simple program using ft_strlen:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, World!";
    printf("Length: %zu\n", ft_strlen(str));
    return (0);
}
```

5. Compile and run:

```bash
gcc -Wall -Wextra -Werror main.c libft.a -o test
./test
```

**Output:**

```bash
Length: 13
```