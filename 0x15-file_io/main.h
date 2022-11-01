/**
 * @Author: bentalla
 * @Date:   2022-10-31T19:30:54+00:00
 * @Last modified by:   bentalla
 * @Last modified time: 2022-10-31T19:33:39+00:00
 */

#ifndef FILE_IO
#define FILE_IO

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
