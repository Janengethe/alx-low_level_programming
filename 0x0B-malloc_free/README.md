## 0x0B. C - malloc, free


## 0-create_array.c

* The function creates an array of chars, and initializes it with a specific char.
* Prototype: char *create_array(unsigned int size, char c);
* Returns NULL if size = 0
* Returns a pointer to the array, or NULL if it fails


## 1-strdup.c

* The function returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
* Prototype: char *_strdup(char *str);
* The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
* Returns NULL if str = NULL
* On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
* FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.


## 2-str_concat.c

* The function concatenates two strings.
* Prototype: char *str_concat(char *s1, char *s2);
* The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
* if NULL is passed, treat it as an empty string
* The function should return NULL on failure


## 3-alloc_grid.c

* The function returns a pointer to a 2 dimensional array of integers.
* Prototype: int **alloc_grid(int width, int height);
* Each element of the grid should be initialized to 0
* The function should return NULL on failure
* If width or height is 0 or negative, return NULL


## 4-free_grid.c

* The function frees a 2 dimensional grid previously created by alloc_grid function.
* Prototype: void free_grid(int **grid, int height);


## 5-argstostr.c

* The function concatenates all the arguments of the program.
* Prototype: char *argstostr(int ac, char **av);
* Returns NULL if ac == 0 or av == NULL
* Returns a pointer to a new string, or NULL if it fails
* Each argument should be followed by a \n in the new string


## 100-strtow.c

* The function splits a string into words.
* Prototype: char **strtow(char *str);
* The function returns a pointer to an array of strings (words)
* Each element of this array contain a single word, null-terminated
* The last element of the returned array is NULL
* Words are separated by spaces
* Returns NULL if str == NULL or str == ""
* If the function fails, it returns NULL