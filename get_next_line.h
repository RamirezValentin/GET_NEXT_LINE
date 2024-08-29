#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
#endif

void ft_bzero(void *s, size_t n);
size_t ft_strlen(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strchr(const char *s, int c);
void *ft_memcpy(void *dest, const void *src, size_t n);
char *clean_stash(char *stash);
char *buftostash(int fd, char *stash);
char *extract_line(int i, char **stash);
char *ifstashnotnull(char *stash);
char *get_next_line(int fd);

#endif
