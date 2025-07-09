# 📄 Get Next Line - Using Strings

## 📚 Project Overview

This project implements the **Get Next Line** function in C, which reads from a file descriptor and returns one line at a time. Instead of using linked lists, this implementation manages the buffer and leftover data by manipulating **strings** dynamically, handling variable-length lines efficiently.

---

## 💡 What I Learned

- 🧩 Handling dynamic string buffers and resizing them as needed.
- 🔄 Managing leftover data between calls using static string buffers.
- 🗂 Efficiently searching and extracting lines terminated by newline characters.
- ⚙️ Working with C string functions (`strchr`, `strdup`, `strjoin`, etc.).
- 🧹 Proper memory management and avoiding leaks with dynamic strings.
- 🛠 Reading from file descriptors with `read()` and assembling complete lines.
- 📏 Handling edge cases like empty lines, end-of-file, and partial reads.
- Writing clean, modular, and Norm-compliant C code.

---

## 🛠 Technical Concepts Used

- Dynamic allocation and manipulation of **null-terminated strings**.
- Buffering input read from the file descriptor into a static string.
- Searching for newline characters within strings.
- Splitting strings to extract the next line and keep leftover data.
- Using helper functions to concatenate and duplicate strings safely.
- Managing memory carefully to prevent leaks and dangling pointers.
- Using static variables to preserve buffer state across function calls.

---

## 🚀 Functionality

- Reads from any file descriptor (files, standard input, etc.).
- Returns a single line per call, including the newline character if present.
- Efficiently handles lines of arbitrary length.
- Continues reading until end-of-file is reached.
- Returns `NULL` when no more lines are available or on errors.

---

## ⚠️ Challenges Overcome

- Correctly handling leftover buffer content between calls.
- Avoiding buffer overflows and off-by-one errors with strings.
- Managing memory allocation and freeing dynamically created strings.
- Handling various edge cases like files without newline at EOF.
- Ensuring the function is reentrant and safe for multiple calls.

---

## 🧠 Key Takeaways

This project improved my skills in:

- Dynamic string manipulation and memory management in C.
- Understanding buffering strategies for input/output.
- Writing robust, reusable C functions with careful resource handling.
- Debugging complex pointer and memory-related bugs.
