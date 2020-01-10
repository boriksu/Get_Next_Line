# Get_Next_Line

* `It is a function that reads from a file descriptor line by line.`

**Prototype:**
* `int get_next_line(const int fd, char **line);`

where the first parameter is the file descriptor that will be used to read; the second parameter is the address of a pointer to a character that will be used to save the line read from the file descriptor.

**Return value:**
* `return 1 when it read a line`
* `return 0 when it finished reading`
* `return -1 when an error occurs`
