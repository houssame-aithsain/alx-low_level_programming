# File I/O Tasks

This repository contains C programs that demonstrate file I/O operations and interactions with the POSIX standard output. The tasks involve reading, writing, and manipulating files. The programs are designed to be compiled and executed from the command line. Below are the details of each task and how to use them.

## Task 0: Tread Lightly, She Is Near

This task involves writing a function that reads a text file and prints its content to the POSIX standard output. The function `read_textfile` takes a filename and the number of letters to read and print. It returns the actual number of letters read and printed. If the file cannot be opened, read, or if any error occurs, the function returns 0.

Usage:
```bash
$ ./a [filename]
```
Output:
```
[File content]
(printed chars: [number of characters printed])
```
GitHub File: [0-read_textfile.c](https://github.com/[username]/[repository]/blob/main/0x15-file_io/0-read_textfile.c)

## Task 1: Under the Snow

This task involves creating a function that creates a file and writes content to it. The function `create_file` takes a filename and a text content string to write to the file. It returns 1 on success and -1 on failure.

Usage:
```bash
$ ./b [filename] [text content]
```
Output:
```
-> [result]
```
GitHub File: [1-create_file.c](https://github.com/[username]/[repository]/blob/main/0x15-file_io/1-create_file.c)

## Task 2: Speak Gently, She Can Hear

This task involves writing a function that appends text to the end of a file. The function `append_text_to_file` takes a filename and text content to add. It returns 1 on success and -1 on failure.

Usage:
```bash
$ ./c [filename] [text content]
```
Output:
```
-> [result]
```
GitHub File: [2-append_text_to_file.c](https://github.com/[username]/[repository]/blob/main/0x15-file_io/2-append_text_to_file.c)

## Task 3: cp

This task involves creating a program that copies the content of one file to another. The program `cp` takes two arguments: `file_from` and `file_to`. It performs the file copying and handles various error cases as specified.

Usage:
```bash
$ ./cp [file_from] [file_to]
```
GitHub File: [3-cp.c](https://github.com/[username]/[repository]/blob/main/0x15-file_io/3-cp.c)

## Task 4: ELF

This advanced task involves writing a program that displays information contained in the ELF header of an ELF file. The program `elf_header` takes an ELF filename as an argument and displays relevant information from the ELF header.

Usage:
```bash
$ ./elf_header [elf_filename]
```
Output:
```
ELF Header:
  Magic:   [magic bytes]
  Class:   [ELF class]
  Data:    [data encoding]
  Version: [version]
  OS/ABI:  [OS/ABI identifier]
  ABI Version: [ABI version]
  Type:    [file type]
  Entry point address: [entry point address]
```
GitHub File: [100-elf_header.c](https://github.com/[username]/[repository]/blob/main/0x15-file_io/100-elf_header.c)

## Repository Information

GitHub Repository: [alx-low_level_programming](https://github.com/[username]/[repository]/tree/main/0x15-file_io)

Feel free to explore the repository for the source code of each task and additional details. Make sure to compile the programs using a C compiler before running them on your system.
