#ifndef _PUTCHAR
#define _PUTCHAR
int _putchar(char c);
#endif /* _PUTCHAR */

#ifndef FCNTL
#define FCNTL
#include <fcntl.h>
#endif /* FCNTL */

#ifndef STDDEF
#define STDDEF
#include <stddef.h>
#endif /* STDDEF */

#ifndef UNISTD
#define UNISTD
#include <unistd.h>
#endif /* UNISTD */

#ifndef READ_TEXTFILE
#define READ_TEXTFILE
ssize_t read_textfile(const char *filename, size_t letters);
#endif /* READ_TEXTFILE */

#ifndef CREATE_FILE
#define CREATE_FILE
int create_file(const char *filename, char *text_content);
#endif /* CREATE_FILE */
