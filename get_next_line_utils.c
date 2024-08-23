#include "get_next_line.h"

void ft_bzero(void *s, size_t n){
    unsigned char *p = s;
    unsigned char c = '\0';
    unsigned i = 0;

    while(i<n){
        p[i]=c;
        i++;
    }
}

size_t ft_strlen(const char *s){
    size_t i;
    i = 0;
    
    while(s[i])
        i++;
    return i;
}

char *ft_strjoin(char const *s1, char const *s2)
{
    int len;
    int i;
    i = 0;

    if(!s1 || !s2)
        return NULL;
    len = ft_strlen(s1) + ft_strlen(s2);

    char *sjoin = malloc(sizeof(char) * (len) + 1);
    if(sjoin == NULL)
        return NULL;
    ft_bzero(sjoin, len+1);
    while(*s1)
    {
        sjoin[i] = *s1;
        s1++;
        i++;
    }
    while(*s2)
    {
        sjoin[i] = *s2;
        s2++;
        i++;
    }
    return sjoin;
} 

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    unsigned char uc = (unsigned char) c;  // on le fait devenir un unsigned char (char et pas int car c'est + opti et char permet de représenter tous les charactere) et unsigned pour gerer les negatif

    while(s[i]){
        if(s[i] == uc)
            return (char *)&s[i];  //cast pour que ca devinne un pointeur. et regarder la photo pour comprendre pourquoi c'est &s[i]. et char * car c'est ce que la fonction nous demande de routrner
        i++;
    }

    if(s[i] == uc){                //pour que ca fonctionnne aussi avec '\0' (nommé aussi null byte ou the terminator)
        return (char *)&s[i];
    }

    return NULL;                  // si ca ne trouve rien ca retourn NULL
}
