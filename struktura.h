#ifndef STRUKTURA_H_INCLUDED
#define STRUKTURA_H_INCLUDED

typedef struct Szotar {
    char *nyelv1;
    char *nyelv2;
    char szoparok_tomb[2][1000][50+1];
    int szoparok_szama;
} Szotar;

typedef struct Lista {
    Szotar szotar;
    struct Lista *kov;
} Lista;

#endif