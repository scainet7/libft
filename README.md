<h1 align=center>
	<b><img src=img/book.jpg width=40px>  Libft</b>
</h1 align=center>

<h1>
	<b><img src=img/succes.jpeg width=150px></b>
</h1>

## Language
* [English](#Content)
* [Русский(Russian)](#Содержание)

## Content
* [What is libft](#What-is-libft)
* [What is it_?](#What-is-it_?) 
* [Function description](#Function-description)
* [Instructions](#Instructions)
* [Using libft in projects](#Using-libft-in-projects)
<!--- [List of functions](#List-of-functions) --->
## What is libft

### [The task](https://github.com/scainet7/libft/blob/master/subject/subject_libft_en.pdf)

Libft is an project that requieres us to re-create some standard C library functions for future projects, and have a deeper understanding of data structures and basic algorithms. We are not allowed to use some standard libraries on our projects, so we have to keep growing this libary with our own functions as we go farther in the program.

## What is it_?

* [Part1](#Part1): Some of the standard C functions.
* [Part1](#Part1): Functions that will be useful for later projects.
* [Bonus Part](#Bonus-Part): Functions that will be useful for linked list manipulation.
* [Other and Personal](#Other-and-Personal): Functions I believe will be useful later.

<!--- ## List of functions

Part 1 | Part 2| Bonus part | Other and personal
:----------- | :-----------: | :-----------: | -----------:
[ft_isalpha](#ft_isalpha)	|[ft_substr](#ft_substr)	|[ft_lstnew](#ft_lstnew)		|[ft_freelst](#ft_freelst)
[ft_isdigit](#ft_isdigit)	|[ft_strjoin](#ft_strjoin)	|[ft_lstadd_front](#ft_lstadd_front)	|[ft_getword_mod](#ft_getword_mod)
[ft_isalnum](#ft_isalnum)	|[ft_strtrim](#ft_strjoin)	|[ft_lstsize](#ft_lstsize)		|[ft_isspace](#ft_isspace)
[ft_isascii](#ft_isascii)	|[ft_split](#ft_split)		|[ft_lstlast](#ft_lstlast)		|[ft_strcat](#ft_strcat)
[ft_isprint](#ft_isprint)	|[ft_itoa](#ft_itoa)		|[ft_lstadd_back](#ft_lstadd_back)	|[ft_strcdup](#ft_strcdup)
[ft_strlen](#ft_strlen)		|[ft_strmapi](#ft_strmapi)	|[ft_lstdelone](#ft_lstdelone)		|[ft_strstr](#ft_strstr)
[ft_memset](#ft_memset)		|[ft_strtriteri](#ft_striteri)	|[ft_lstclear](#ft_lstclear)		|[get_next_line](#get_next_line)
[ft_bzero](#ft_bzero)		|[ft_putchar_fd](#ft_putchar_fd)|[ft_lstiter](#ft_lstiter)		|
[ft_memcpy](#ft_memcpy)		|[ft_putstr_fd](#ft_putstr_fd)	|[ft_lstmap](#ft_lstmap)		|	
[ft_memmove](#ft_memmove)	|[ft_putendl_fd](#ft_putendl_fd)||	
[ft_strlcpy](#ft_strlcpy)	|[ft_putnbr_fd](#ft_putnbr_fd)	|| 
[ft_strlcat](#ft_strlcat)	||| 
[ft_toupper](#ft_toupper)	||| 
[ft_tolower](#ft_tolower)	||| 
[ft_strchr](#ft_strchr)		||| 
[ft_strrchr](#ft_strrchr)	||| 
[ft_strncmp](#ft_strncmp)	||| 
[ft_memchr](#ft_memchr)		||| 
[ft_memcmp](#ft_memcmp)		||| 
[ft_strnstr](#ft_strnstr)	|||
[ft_atoi](#ft_atoi)		||| 
[ft_calloc](#ft_calloc)		||| 
[ft_strdup](#ft_strdup)		||| 
--->

## Function description

### Part1

* [ft_isalpha](Part1/ft_isalpha.c)	- checks  for  an  alphabetic  character
* [ft_isdigit](Part1/ft_isdigit.c)	- checks for a digit (0 through 9).
* [ft_isalnum](Part1/ft_isalnum.c)	- checks for an alphanumeric character
* [ft_isascii](Part1/ft_isascii.c)	- checks whether c fits into the ASCII character set
* [ft_isprint](Part1/ft_isprint.c)	- checks for any printable character
* [ft_strlen](Part1/ft_strlen.c)	- calculate the length of a string
* [ft_memset](Part1/ft_memset.c)	- fill memory with a constant byte
* [ft_bzero](Part1/ft_bzero.c)	- zero a byte string
* [ft_memcpy](Part1/ft_memcpy.c)	- copy memory area
* [ft_memmove](Part1/ft_memmove.c)	- copy memory area
* [ft_strlcpy](Part1/ft_strlcpy.c)	- copy string to an specific size
* [ft_strlcat](Part1/ft_strlcat.c)	- concatenate string to an specific size
* [ft_toupper](Part1/ft_toupper.c)	- convert char to uppercase
* [ft_tolower](Part1/ft_tolower.c)	- convert char to lowercase
* [ft_strchr](Part1/ft_strchr.c)	- locate character in string
* [ft_strrchr](Part1/ft_strrchr.c)	- locate character in string
* [ft_strncmp](Part1/ft_strncmp.c)	- compare two strings
* [ft_memchr](Part1/ft_memchr.c)	- scan memory for a character
* [ft_memcmp](Part1/ft_memcmp.c)	- compare memory areas
* [ft_strnstr](Part1/ft_strnstr.c)	- locate a substring in a string 
* [ft_atoi](Part1/ft_atoi.c)		- convert a string to an integer
* [ft_calloc](Part1/ft_calloc.c)	- allocates memory and sets its bytes' values to 0
* [ft_strdup](Part1/ft_strdup.c)	- creates a dupplicate for the string passed as parameter

### Part2

* [ft_substr](Part2/ft_substr.c)	- returns a substring from a string
* [ft_strjoin](Part2ft_strjoin.c)	- concatenates two strings
* [ft_strtrim](Part2ft_strtrim.c)	- trims the beginning and end of string with specific set of chars
* [ft_split](Part2ft_split.c)	- splits a string using a char as parameter
* [ft_itoa](Part2ft_itoa.c)	- converts a number into a string
* [ft_strmapi](Part2ft_strmapi.c)	- applies a function to each character of a string
* [ft_striteri](Part2ft_striteri.c)	- applies a function to each character of a string
* [ft_putchar_fd](Part2ft_putchar_fd.c)	- output a char to a file descriptor
* [ft_putstr_fd](Part2ft_putstr_fd.c)	- output a string to a file descriptor
* [ft_putendl_fd](Part2ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line
* [ft_putnbr_fd](Part2ft_putnbr_fd.c)	- output a number to a file descriptor

### Bonus Part

* [ft_lstnew](Bonus_Part/ft_lstnew.c)	- creates a new list element
* [ft_lstadd_front](Bonus_Part/ft_lstadd_front.c)	- adds an element at the beginning of a list
* [ft_lstsize](Bonus_Part/ft_lstsize.c)	- counts the number of elements in a list
* [ft_lstlast](Bonus_Part/ft_lstlast.c)	- returns the last element of the list
* [ft_lstadd_back](Bonus_Part/ft_lstadd_back.c)	- adds an element at the end of a list
* [ft_lstclear](Bonus_Part/ft_lstclear.c)	- deletes and free list
* [ft_lstiter](Bonus_Part/ft_lstiter.c)	- applies a function to each element of a list
* [ft_lstmap](Bonus_Part/ft_lstmap.c)	- applies a function to each element of a list

### Other and Personal

* [ft_freelst](Other_and_Personal/ft_freelst)	- frees the memory space pointed to by list
* [ft_getword_mod](Other_and_Personal/ft_getword_mod)	- the ft_getword() function takes a string and a delimiter and returns a string with the letters between the start point of the string and the next delimiter
* [ft_isspace](Other_and_Personal/ft_isspace)	- checks if a given character is a space character
* [ft_strcat](Other_and_Personal/ft_strcat)	- the strcat() function adds the string str to the string dest, overwriting the `\0' character at the end of dest and adding the `\0' ending character to the string. The strings cannot overlap, and the dest string must have enough free space to accommodate the concatenated strings
* [ft_strcdup](Other_and_Personal/ft_strcdup)	- allocates a specific amount of memory to copy a string until the occurence of c
* [ft_strstr](Other_and_Personal/ft_strstr)	- locate substring. Finds the first occurrence of the substring 'needle' in the string 'haystack'. The terminating null bytes ('\0') are not compared
* [get_next_line](Other_and_Personal/get_next_line)	- Function that returns a line, read from a file descriptor

## Instructions

Clone this repository in your local computer:

```sh
git clone https://github.com/scainet7/libft.git
```
```sh
cd libft
```
```sh
make
```

## Using libft in projects

### [ft_printf](https://github.com/scainet7/ft_printf)

### [so_long](https://github.com/scainet7/So_long)

### [minishell](https://github.com/scainet7/Minishell)

### [cub3D](https://github.com/scainet7/Cub3D)

******

## Содержание
* [Что такое libft](#Что-такое-libft)
* [Разделы](#Разделы)
* [Описание функции](#Описание-функций)
* [Инструкция](#Инструкция)
* [Использование libft в проектах](#Использование-libft-в-проектах)
<!--- * [Список функций](#Список-функций) --->

## Что такое libft

### [Задание](https://github.com/scainet7/libft/blob/master/subject/subject_libft_ru.pdf)

Libft — это проект, который требует от нас воссоздания некоторых стандартных функций библиотеки C для будущих проектов и более глубокого понимания структур данных и основных алгоритмов. Нам не разрешено использовать некоторые стандартные библиотеки в наших проектах, поэтому мы должны продолжать расширять эту библиотеку своими собственными функциями по мере продвижения в программе.

## Разделы

* [Часть1](#Часть1): стандартные функции C.
* [Часть2](#Часть2): функции, которые будут полезны для последующих проектов.
* [Бонусная часть](#Бонусная-часть): функции, которые будут полезны для работы со связанными списками.
* [Остальные и индивидуальные функции](#Остальные-и-индивидуальные-функции): Функции, которые, как мне кажется, пригодятся позже.

<!--- ## Список функций

Часть 1. | Часть 2.| Бонусная часть. | Остальные и индивидуальные функции.
:----------- | :-----------: | :-----------: | -----------:
[ft_isalpha](#ft_isalpha)	|[ft_substr](#ft_substr)	|[ft_lstnew](#ft_lstnew)		|[ft_freelst](#ft_freelst)
[ft_isdigit](#ft_isdigit)	|[ft_strjoin](#ft_strjoin)	|[ft_lstadd_front](#ft_lstadd_front)	|[ft_getword_mod](#ft_getword_mod)
[ft_isalnum](#ft_isalnum)	|[ft_strtrim](#ft_strjoin)	|[ft_lstsize](#ft_lstsize)		|[ft_isspace](#ft_isspace)
[ft_isascii](#ft_isascii)	|[ft_split](#ft_split)		|[ft_lstlast](#ft_lstlast)		|[ft_strcat](#ft_strcat)
[ft_isprint](#ft_isprint)	|[ft_itoa](#ft_itoa)		|[ft_lstadd_back](#ft_lstadd_back)	|[ft_strcdup](#ft_strcdup)
[ft_strlen](#ft_strlen)		|[ft_strmapi](#ft_strmapi)	|[ft_lstdelone](#ft_lstdelone)		|[ft_strstr](#ft_strstr)
[ft_memset](#ft_memset)		|[ft_strtriteri](#ft_striteri)	|[ft_lstclear](#ft_lstclear)		|[get_next_line](#get_next_line)
[ft_bzero](#ft_bzero)		|[ft_putchar_fd](#ft_putchar_fd)|[ft_lstiter](#ft_lstiter)		|
[ft_strdup](#ft_strdup)		|[ft_putstr_fd](#ft_putstr_fd)	|[ft_lstmap](#ft_lstmap)		|	
[ft_strcpy](#ft_strcpy)		|[ft_putendl_fd](#ft_putendl_fd)||	
[ft_memcpy](#ft_memcpy)		|[ft_putnbr_fd](#ft_putnbr_fd)	|| 
[ft_memmove](#ft_memmove)	||| 
[ft_strlcpy](#ft_strlcpy)	||| 
[ft_strlcat](#ft_strlcat)	||| 
[ft_toupper](#ft_toupper)	||| 
[ft_tolower](#ft_tolower)	||| 
[ft_strchr](#ft_strchr)		||| 
[ft_strrchr](#ft_strrchr)	||| 
[ft_strncmp](#ft_strncmp)	||| 
[ft_memchr](#ft_memchr)		||| 
[ft_memcmp](#ft_memcmp)		||| 
[ft_strnstr](#ft_strnstr)	|||
[ft_atoi](#ft_atoi)		||| 
[ft_calloc](#ft_calloc)		||| 
[ft_strdup](#ft_strdup)		||| 
--->

## Описание функции

### Часть1

* [ft_isalpha](Part1/ft_isalpha.c) - проверяет буквенный символ
* [ft_isdigit](Part1/ft_isdigit.c) — проверяет наличие цифры (от 0 до 9).
* [ft_isalnum](Part1/ft_isalnum.c) — проверяет буквенно-цифровой символ
* [ft_isascii](Part1/ft_isascii.c) — проверяет, соответствует ли c набору символов ASCII
* [ft_isprint](Part1/ft_isprint.c) — проверяет любой печатный символ
* [ft_strlen](Part1/ft_strlen.c) - вычислить длину строки
* [ft_memset](Part1/ft_memset.c) - заполнить память постоянным байтом
* [ft_bzero](Part1/ft_bzero.c) - обнулить байтовую строку
* [ft_memcpy](Part1/ft_memcpy.c) - копировать область памяти
* [ft_memmove](Part1/ft_memmove.c) - копировать область памяти
* [ft_strlcpy](Part1/ft_strlcpy.c) - скопировать строку определенного размера
* [ft_strlcat](Part1/ft_strlcat.c) — объединение строк определенного размера
* [ft_toupper](Part1/ft_toupper.c) - преобразовать char в верхний регистр
* [ft_tolower](Part1/ft_tolower.c) - преобразовать char в нижний регистр
* [ft_strchr](Part1/ft_strchr.c) - найти символ в строке
* [ft_strrchr](Part1/ft_strrchr.c) - найти символ в строке
* [ft_strncmp](Part1/ft_strncmp.c) - сравнить две строки
* [ft_memchr](Part1/ft_memchr.c) - сканирование памяти на наличие персонажа
* [ft_memcmp](Part1/ft_memcmp.c) - сравнение областей памяти
* [ft_strnstr](Part1/ft_strnstr.c) — найти подстроку в строке
* [ft_atoi](Part1/ft_atoi.c) - преобразовать строку в целое число
* [ft_calloc](Part1/ft_calloc.c) - выделяет память и устанавливает значения ее байтов в 0
* [ft_strdup](Part1/ft_strdup.c) — создает дубликат для строки, переданной в качестве параметра

### Часть2

* [ft_substr](Part2/ft_substr.c) - возвращает подстроку из строки
* [ft_strjoin](Part2/ft_strjoin.c) — объединяет две строки
* [ft_strtrim](Part2/ft_strtrim.c) - обрезает начало и конец строки определенным набором символов
* [ft_split](Part2/ft_split.c) - разбивает строку, используя char в качестве параметра
* [ft_itoa](Part2/ft_itoa.c) - преобразует число в строку
* [ft_strmapi](Part2/ft_strmapi.c) - применяет функцию к каждому символу строки
* [ft_striteri](Part2/ft_striter.c) — применяет функцию к каждому символу строки
* [ft_putchar_fd](Part2/ft_putchar_fd.c) - вывести char в файловый дескриптор
* [ft_putstr_fd](Part2/ft_putstr_fd.c) - вывести строку в дескриптор файла
* [ft_putendl_fd](Part2/ft_putendl_fd.c) - вывести строку в дескриптор файла, за которой следует новая строка
* [ft_putnbr_fd](Part2/ft_putnbr_fd.c) - вывод числа в дескриптор файла

### Бонусная часть

* [ft_lstnew](Bonus_Part/ft_lstnew.c) - создает новый элемент списка
* [ft_lstadd_front](Bonus_Part/ft_lstadd_front.c) — добавляет элемент в начало списка
* [ft_lstsize](Bonus_Part/ft_lstsize.c) - подсчитывает количество элементов в списке
* [ft_lstlast](Bonus_Part/ft_lstlast.c) - возвращает последний элемент списка
* [ft_lstadd_back](Bonus_Part/ft_lstadd_back.c) — добавляет элемент в конец списка
* [ft_lstclear](Bonus_Part/ft_lstclear.c) - удаляет и освобождает список
* [ft_lstiter](Bonus_Part/ft_lstiter.c) — применяет функцию к каждому элементу списка
* [ft_lstmap](Bonus_Part/ft_lstmap.c) — применяет функцию к каждому элементу списка

### Остальные и индивидуальные функции

* [ft_freelst](Other_and_Personal/ft_freelst) — освобождает место в памяти, на которое указывает список
* [ft_getword_mod](Other_and_Personal/ft_getword_mod) — функция ft_getword() принимает строку и разделитель и возвращает строку с буквами между начальной точкой строки и следующим разделителем
* [ft_isspace](Other_and_Personal/ft_isspace) — проверяет, является ли данный символ пробелом
* [ft_strcat](Other_and_Personal/ft_strcat) - функция strcat() добавляет строку str к строке dest, перезаписывая символ `\0' в конце dest и добавляя завершающий символ `\0' к строке. Строки не могут перекрываться, а в строке назначения должно быть достаточно свободного места для размещения объединенных строк
* [ft_strcdup](Other_and_Personal/ft_strcdup) — выделяет определенный объем памяти для копирования строки до появления c
* [ft_strstr](Other_and_Personal/ft_strstr) - найти подстроку. Находит первое вхождение подстроки "игла" в строку "стог сена". Завершающие нулевые байты ('\0') не сравниваются
* [get_next_line](Other_and_Personal/get_next_line) — функция, возвращающая строку, прочитанную из дескриптора файла

## Инструкция

Клонируйте этот репозиторий на свой локальный компьютер:

```sh
git clone https://github.com/scainet7/libft.git
```
```sh
cd libft
```
```sh
make
```

## Использование libft в проектах

### [ft_printf](https://github.com/scainet7/ft_printf)

### [so_long](https://github.com/scainet7/So_long)

### [minishell](https://github.com/scainet7/Minishell)

### [cub3D](https://github.com/scainet7/Cub3D)
