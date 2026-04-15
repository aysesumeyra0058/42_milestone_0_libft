*This project has been created as part of the 42 curriculum by aykesim*

## Description
Libft is the foundational project of the 42 Network curriculum, serving as a deep dive into the inner workings of the C programming language. The goal of this project is to re-code a set of standard C library functions (libc) and additional utility tools from scratch, creating a personal static library that will be used throughout the entire curriculum.

By moving beyond high-level abstractions, this project challenges students to master low-level mechanics such as manual memory management on the heap, precise pointer manipulation, and the implementation of complex data structures like linked lists. Building libft requires not only writing logic but also ensuring extreme robustness against edge cases and memory leaks. This library represents the first step in building a reliable and self-made toolkit for professional-grade software development.

## Instructions
This section provides details on how to compile the library using the provided Makefile and how to integrate it into your own C projects.
### Compilation
The project is managed by a `Makefile` that supports the following rules:

- `make`: Compiles the mandatory part and creates `libft.a`.
- `make clean`: Removes the object files (`.o`).
- `make fclean`: Removes object files and the `libft.a` library.
- `make re`: Performs a full re-compilation.
### Usage
To integrate this library into a project:
1. Copy `libft.a` and `libft.h` to your project folder.
2. Include the header in your C files: `#include "libft.h"`.
3. Link the library during compilation: `gcc main.c -L. -lft`.

## Resources
- man command on Linux/macOS for detailed function specifications.
- Oceano (YouTube): An invaluable resource for visual learners. His detailed diagrams and step-by-step breakdowns of memory management and linked list logic were instrumental in understanding the underlying mechanics of this project.
### AI Usage
In this project, I used AI tools such as Google Gemini and ChatGPT as strategic learning assistants rather than simple code generators. My approach was focused entirely on my personal development; instead of resorting to "copy-paste" methods, I specifically tasked the AI to provide conceptual instructions and structural guidance for the most challenging functions. I intentionally refrained from requesting direct code solutions, as I believed doing so would be detrimental to my learning progress. Instead, I used the AI for architectural advice and edge-case brainstorming. This ensured that every line of code was implemented by me, preserving the integrity of my learning process and ensuring that the technology served to enhance, rather than hinder, my growth.

