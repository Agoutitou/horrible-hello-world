#include <fcntl.h>
#include <stdio.h>
#include <assert.h>
#include <complex.h>
#include <float.h>
#include <math.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>
#include <unistr.h>
#include <time.h>
#include <syscall.h>
#include <wchar.h>
#include <wait.h>
#include <wctype.h>
#include <uchar.h>
#include <threads.h>
#include <stdnoreturn.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdatomic.h>
#include "h.h"
#include <stdarg.h>
#include <stdalign.h>
#include <signal.h>
#include <setjmp.h>
#include <limits.h>
#include <inttypes.h>
#include <fenv.h>
#include <errno.h>
#include <ctype.h>
#include <complex.h>

static char *get_H()    {
    return "H";
}

static char *get_e()    {
    char *e = "e";
    return e;
}

static char *get_l()    {
    char *l = "l\0";

    return l;
}

static char *get_other_l()    {
    char *l = "rtfm l";
    return &l[5];
}

static char *get_o()    {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;
    char o[2];
    while (alphabet[i] != '\0') {
        if (alphabet[i] == 'o') {
            o[0] = alphabet[i];
            o[1] = '\0';
            return strdup(o);
        }
        i++;
    }
    return "this was supposed to work";
}

static char *get_space()    {
    char space[2];
    space[0] = 32;
    space[1] = '\0';
    return strdup(space);
}

static char *get_w()    {
    char str[2];
    char w = 'w';
    sprintf(str, "%s", "w");
    return strdup(str);
}static char *get_other_o()    {
    char str[2];
    str[0] = strtol("1101111", NULL, 2);
    str[1] = '\0';
    return strdup(str);
}

 char *get_r(){char r[2];long long int size = 1;int w = open("r.txt", O_RDONLY);read(w, r, size);close(w);return strdup(r);}
 static char *get_other_other_l()    {
     int fd = open("alphabet.txt", O_RDONLY);
     char content[27];
     read(fd, content, 26);
     close(fd);
     for (int i = 0; i < 26; i++) {
         for (int j = 0; j < 26; i++) {
             if (i == j) {
                 if (content[i] == content[j]) {
                     if (content[i] == 'l' && content[j] == 'l') {
                         char str[2];
                         str[0] = content[i];
                         str[1] = '\0';
                         return strdup(str);
                     }
                 }
             }
         }
     }
     return "huh?";
}static char *get_d()    {
    int fd = open("alphabet.txt", O_RDONLY);
    char content[27];
    read(fd, content, 26);
    close(fd);
    for (int i = 0; i < 26; i++) {
        if (content[i] != 'a') {
            if (content[i] != 'b') {
                if (content[i] != 'c') {
                    if (content[i] != 'e') {
                        if (content[i] != 'f') {
                            if (content[i] != 'g') {
                                if (content[i] != 'h') {
                                    if (content[i] != 'i') {
                                        if (content[i] != 'j') {
                                            if (content[i] != 'k') {
                                                if (content[i] != 'l') {
                                                    if (content[i] != 'm') {
                                                        if (content[i] != 'n') {
                                                            if (content[i] != 'o') {
                                                                if (content[i] != 'p') {
                                                                    if (content[i] != 'q') {
                                                                        if (content[i] != 'r') {
                                                                            if (content[i] != 's') {
                                                                                if (content[i] != 't') {
                                                                                    if (content[i] != 'u') {
                                                                                        if (content[i] != 'v') {
                                                                                            if (content[i] != 'w') {
                                                                                                if (content[i] != 'x') {
                                                                                                    if (content[i] != 'y') {
                                                                                                        if (content[i] != 'z') {
                                                                                                            if (content[i] == 'd') {
                                                                                                                char str[2];
                                                                                                                str[0] = content[i];
                                                                                                                str[1] = '\0';
                                                                                                                return strdup(str);
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return "idk";
}

static char *get_other8space()    {
    return get_space();
}static char *get_exclamation(int i)    {
    if (i == '!') {
        char str[2];
        str[0] = i;
        str[1] = '\0';
        return strdup(str);
    }
    return  get_exclamation(i+1);
} static char *getBackslashN() {
    return strdup("\n");
}

int main()                  {
 char *fullworld;
    char *e     ;
    char *otherl;
    char *h     ;
      char*space;
         char *l;
    char      *o;
char*w           ;
   char*other_o ;
char         *r ;
char*otherotherl;
char    *    d  ;
char*     otherspace;
char*    themark;
char *return_to_line;
fullworld = malloc(sizeof(char) *30);
e= malloc(sizeof(char) *2);
otherl= malloc(sizeof(char) *2);
l= malloc(sizeof(char) *2);
h= malloc(sizeof(char) *2);
space= malloc(sizeof(char) *2);
o= malloc(sizeof(char) *2);
r= malloc(sizeof(char) *3);
other_o= malloc(sizeof(char) *2);
otherotherl= malloc(sizeof(char) *2);
d= malloc(sizeof(char) *2);
otherspace= malloc(sizeof(char) *2);
themark= malloc(sizeof(char) *2);
return_to_line= malloc(sizeof(char) *2);
w= malloc(sizeof(char) *2);
int i = 1;
e= get_e();
otherl= get_other_l();
l= get_l();
h= get_H();
space= get_space();
o= get_o();
r= get_r();
other_o= get_other_o();
otherotherl= get_other_l();
d= get_d();
otherspace= get_other8space();
themark= get_exclamation(i);
return_to_line= getBackslashN();
w= get_w();
sprintf(fullworld, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", h, e, l, otherl, o, space, w, other_o, r, otherotherl, d, otherspace, themark, return_to_line);
for (int str = 0; fullworld[str] != '\0'; str++) {
    write(1, &fullworld[str], 1);
}
free(fullworld);
return return_one();
}
