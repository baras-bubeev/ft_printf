# ft_printf
## Task:
Write a library that contains `ft_printf`, a function that will mimic the real `printf`
## Description:
- You have to recode the libc’s `printf` function
- It must **NOT DO** the buffer management like the real `printf`
- It will manage the following conversions: `"cspdiuxX%"`
- It will manage any combination of the following flags: `" +-0.*"` and minimum field width with all conversions
- It will be compared with the real `printf`
### Prototype
```C
int ft_printf(const char *, ...);
```
