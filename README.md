*This project has been created as part
of the 42 curriculum by **jmbolana**.*

# 📝DESCRIPTION
The <span style = "color = #00BFFF">**Libft**</span> project is a foundational milestone in the 42 curriculum. It consists of creating a personal library of standard C functions, effectively building a custom ***"toolbox"*** that will be utilized in almost all subsequent C projects within the school.

## 🎯 Goal
The primary objective of this project is to master **the fundamental mechanics of C programming**. By re-coding standard library functions from scratch, we gain a deep understanding of:  
* **Memory Management:** Manual allocation and deallocation on the heap, and precise manipulation of the stack.
* **Pointers & Data Structures:** Navigating memory addresses and implementing complex structures like singly linked lists.
* **Algorithm Logic:** Replicating the exact behavior of system functions (handling edge cases, null pointers, and overflows).

## 🔍 Brief Overview
The library is structured into three distinct parts:
1. **Libc Functions:** Recoding of standard functions (e.g., `strlen`, `memcpy`, `atoi`) to match their man-page specifications.
2. **Additional Functions**: Utility functions that facilitate string manipulation (e.g., `ft_split`, `ft_strjoin`) and numerical conversions (`ft_itoa`).
3. **List manipulation Functions:** A set of tools designed to manage dynamic lists, allowing for efficient data storage and manipulation beyond static arrays.

# 🛠️ INSTRUCTIONS
## Compilation & Installation
This project uses a **Makefile** to automate the build process. To compile the library, navigate to the project root and use the following commands:

* To compile the library:
```bash
	make
```
This will generate the `libft.a` static library file.

* To remove object files (`.o`):
```bash
	make clean
```

* To remove object files (`.o`) and library file (`.a`):
```bash
	make fclean
```

* To perform a full re-compile:
```bash
	make re
```

## Execution & Usage
To use the library in your own C projects, you need to include the header and link the library during the compilation of your program.

1. **Include the header** in your C files:
```c
	#include "libft.h"
```

1. **Compile your program** by linking the `libft.a`:
```bash
	cc main.c -L. -lft -o my_program
```
*(note `-L.` tells the compiler to look for the library in the current directory, and `-lft` links the `libft.a` file.)*

# 📚 RESSOURCES
## Classic References & Tutorials
* **[C Programming For Dummies (Dan Gookin)](https://hlevkin.com/hlevkin/92usefulBooks/C/For%20Dummies%20-%20C.pdf),** Used to consolidate core syntax and basic C programming logic.
* **[Bro Code (YouTube)](https://youtube.com/@brocodez?si=sn05QonqsIa2B04u),** Consulted for clear visual explanations regarding pointers and arrays.
* **[Neso Academy (YouTube)](https://youtube.com/@nesoacademy?si=fhj_lmC3FsqGYI3_),** Used to deepen understanding of memory organization (Stack vs Heap) and data structures.
* **[Portfolio Courses](https://youtube.com/@portfoliocourses?si=6hV098Xdm7ICNqmZ),** Referenced for practical implementation examples of standard functions.
* **[Linux Man Pages](https://linux.die.net/man/),** The primary technical authority used to verify the expected behavior and specifications of each libc function (Using the `man` command).

## 🤖 Use of AI
In accordance with the project requirements, here is a detailed description of how AI ([Gemini](https://gemini.google.com/app?hl=fr)) was utilized as a technical collaborator:
| Tasks performed with AI | Part of the project impacted |
| :--- | :--- |
| **Logic Auditing** | Verification of edge cases for complex functions such as `ft_split` and `ft_strtrim`. |
| **Memory Safety** | Validating allocation and deallocation (`free`) management in the bonus list functions, specifically `ft_lstmap` and `ft_lstclear`. |
| **Technical Subtleties** | Clarifying nuances like pointer arithmetic and linked list traversal conditions (e.g., `while(lst)` vs `while(lst->next)`). |
| **Structuring** | Assistance in organizing the documentation and formatting this README to meet all curriculum requirements. |

## 📚 DETAILED LIBRAIRY DESCRIPTION

The library is a collection of functions that can be categorized into **three** main sections based on their technical purpose and origin.

### 1. Re-implementation of Libc Functions
These functions are designed to mimic the exact behavior of standard functions found in the `<ctype.h>`, `<string.h>`, and `<stdlib.h>` headers. 
* **Character Checks**: Functions like `ft_isalpha`, `ft_isdigit`, and `ft_isprint` to validate character types.
* **Memory Management**: Core tools for handling memory blocks, including `ft_memset`, `ft_memcpy`, `ft_memmove`, and `ft_calloc`.
* **String Analysis**: Standard tools to calculate length, find characters, or compare strings (`ft_strlen`, `ft_strchr`, `ft_strncmp`).

### 2. Additional Utility Functions
These are functions that are not part of the standard C library but are essential for higher-level string and data manipulation in future projects.
* **Dynamic String Formatting**: Tools like `ft_substr`, `ft_strjoin`, and `ft_strtrim` for precise string editing.
* **Data Conversion**: The `ft_itoa` function to convert integers to strings and `ft_split` to transform a string into an array of strings based on a delimiter.
* **Output to File Descriptors**: A set of `_fd` functions (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`) allowing output to specific streams.

### 3. Linked List Manipulation (Bonus)
The bonus part introduces a custom data structure called `t_list` to manage dynamic data sets.
* **Node Creation**: Initializing new nodes with `ft_lstnew`.
* **Stack/Queue Operations**: Adding nodes to the beginning or end of the list using `ft_lstadd_front` and `ft_lstadd_back`.
* **Memory Cleanup**: Robust deletion of list contents through `ft_lstdelone` and `ft_lstclear`.
* **Iteration & Transformation**: Applying functions to every element of the list via `ft_lstiter` and `ft_lstmap`.
