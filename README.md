# INET 3101 — Lab 1.5

## Overview
This repository contains my completed work for **Lab 1.5**. It includes several C code examples that demonstrate array usage, dynamic memory allocation, and the use of header files. I have also added a Word document (`inet3101-AbdirahimAbdullahi-lab15.docx`) that shows screenshots of the code running and short paragraphs explaining the concepts and modifications I made.

## Contents
- **Numbered Source Files**  
  - Each file contains instructions at the bottom that I followed. Examples of changes I made include adjusting array sizes, adding error checks, and modifying print statements for clarity.
  
- **`header-examples` Directory**  
  - Contains code illustrating how header files work in C. I explored these examples and added comments explaining how splitting code across `.c` and `.h` files can improve organization.

- **Word Document (`.docx`)**  
  - **`inet3101-AbdirahimAbdullahi-lab15.docx`**: Contains screenshots of code compilation and execution, as well as short paragraphs describing:
    - How arrays and dynamic memory allocation function in the provided examples.
    - The modifications I made to enhance error handling or improve readability.

## Notable Changes I Made
1. **Enhanced Error Handling**  
   - Added checks to ensure `malloc()` and `realloc()` calls succeed, printing an error message and gracefully exiting otherwise.
2. **Improved Readability**  
   - Included extra comments explaining the logic behind certain functions and why I chose to structure the code a specific way.
3. **Adjusted Array / Memory Usage**  
   - In some examples, I changed the initial array sizes or reallocation strategy to test edge cases and confirm that the code behaves correctly when inputs exceed initial capacity.
4. **Refined Output Messages**  
   - Updated prompts and results to be more descriptive, so it’s easier to follow what the program is doing.

## How to Run
1. **Clone or Download** this repository.  
2. **Open** the individual C files in a C-friendly IDE or text editor (Visual Studio Code, for instance).  
3. **Compile** each file using a C compiler (e.g., `gcc file.c -o file.exe` on Windows or `gcc file.c -o file` on Linux/Mac).  
4. **Run** the resulting executable. Some files require command-line arguments (e.g., `./file 5`).

## Submitting
I have created a **new GitHub repository** for this lab work and pushed all changes. This README outlines the final state of my submission, along with instructions on how to compile and run the code.

---
