*This project has been created as part of the 42 curriculum by houfqir.*

# ft_printf

## Description

ft_printf is my own version of the C function printf().

The goal is to learn how to use functions that take a different number of arguments each time. The project makes a library called libftprintf.a.

It can print these: ( c , s , p , d , i , u , x , X , % )

## Instructions

Make the library:


    make

Use it in your code:


    cc main.c libftprintf.a


Other commands:

    make clean
    make fclean
    make re

## Algorithm

**Algorithm:**
1. I read the text one letter at a time.
2. If the letter is not %, I print it.
3. If the letter is %, I look at the next letter and call the right function.
4. Each function prints and gives back how many letters it printed.
6. If any function gives back -1, I stop and return -1.
5. At the end, I give back the total.

## Resources

- man printf
- man stdarg
- Google, YouTube and Stack Overflow
- My peers

**How I used AI:** I used AI to learn and understand the ideas of the project. It helped me understand what variadic functions are, and how va_list, va_arg and va_end work.

**How I tested my code:** I tested my code myself. My peers also helped me test it. I also used printf testers to check my code.