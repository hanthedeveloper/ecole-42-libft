*This project has been created as part of the 42 curriculum by haincel.*

# Libft

## Description

Libft is the first C project of the 42 core curriculum. Its goal is to
reimplement a set of standard libc functions from scratch. The result is a small, self-contained static
library (`libft.a`) that can be reused as a foundation in later C projects
throughout the curriculum.

## Instructions

Compile the library from the project root:

```sh
make
```

This builds `libft.a` using `cc` with the `-Wall -Wextra -Werror` flags.

Other available Makefile rules:

```sh
make clean   # remove object files
make fclean  # remove object files and libft.a
make re      # fclean + all
```

To use the library in another project, include the header and link against
the archive:

```c
#include "libft.h"
```

```sh
cc main.c -I. -L. -lft -o main
```

## Library contents

- **Character checks and conversions:** `ft_isalpha`, `ft_isdigit`,
  `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
- **Memory functions:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
  `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- **String functions:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`,
  `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.
- **Conversion and allocation helpers:** `ft_atoi`, `ft_itoa`, `ft_substr`,
  `ft_strjoin`, `ft_strtrim`, `ft_split`.
- **String callbacks and output:** `ft_strmapi`, `ft_striteri`,
  `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
- **Linked-list utilities (`t_list`):** `ft_lstnew`, `ft_lstadd_front`,
  `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`,
  `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Resources

- `man 3` pages for every libc function reimplemented in this project.
- The C standard library documentation at https://man7.org/linux/man-pages/.
- The official 42 project subject and the 42 Norm document.

## AI usage

AI was used to review the project against the 42 Norm after
the implementation was written. AI also was used to fill in the gaps in the subject PDF where it lacked details. 
It was not used to write the function implementations themselves.
