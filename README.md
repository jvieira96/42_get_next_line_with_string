# Get Next Line (using strings only) - 42 Project

This version of **Get Next Line** reads a file descriptor line by line using only **strings and static buffers** for storage, avoiding dynamic data structures.

---

## Features

- Reads from file descriptors and returns one line at a time  
- Manages leftover buffer data using static variables and string manipulation  
- Supports **bonus** functionality: handles multiple file descriptors at once  
- Simple and efficient for fixed buffer sizes  
- Adheres to 42 coding norm  

---

## Why only strings?

Using static buffers and string functions keeps the implementation simple and effective without relying on linked lists, while still handling multiple file descriptors safely.
