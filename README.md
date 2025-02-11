# ft_printf

## 🚀 Overview
The standard `printf()` function is a staple of C programming. **ft_printf** is a custom implementation that mimics its behavior while reinforcing your understanding of variadic functions and formatted output.

---

## 📜 Function Prototype
```c
int ft_printf(const char *format, ...);
```

| Function | Description |
|----------|-------------|
| `ft_printf` | Custom implementation of `printf()`, handling various format specifiers. |

#### 🛠 **Compilation**
To use, clone my libft into root of this repository.
Compile using:
```sh
make
```

---

## 📌 Supported Format Specifiers
✔ `%c` - Prints a single character  
✔ `%s` - Prints a string  
✔ `%p` - Prints a pointer address in hexadecimal format  
✔ `%d` / `%i` - Prints an integer (decimal)  
✔ `%u` - Prints an unsigned integer  
✔ `%x` - Prints a hexadecimal number (lowercase)  
✔ `%X` - Prints a hexadecimal number (uppercase)  
✔ `%%` - Prints a percent sign  

#### 🚫 Restrictions
- **No use of `printf()` or related functions.**
- **No buffering; output must be written directly.**
- **Only standard C functions (`write`, `malloc`, `free`, `va_start`, `va_arg`, `va_copy`, `va_end`) are allowed.**

---

## ✅ Usage Example
```c
#include "ft_printf.h"

int main(void) {
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Hex: %x, Dec: %d, Char: %c\n", 255, 255, 'A');
    return 0;
}
```

---

## 📜 License
This project is part of the **42 School Curriculum** and is for educational purposes only.

🔥 Happy Coding! 🚀

