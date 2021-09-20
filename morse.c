#include <stdio.h>
#include <string.h>
#include <ctype.h>

int str(char *w, char x) {
    for (int i = 0; i < strlen(w); ++i) {
        if (x == w[i]) {
            return i;
        }
    }
    return -1;
}

void check(char *g) {
    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char *m[] = {
            ".-",    //a
            "-...",  //b
            "-.-.",  //c
            "-..",   //d
            ".",     //e
            "..-.",  //f
            "--.",   //g
            "....",  //h
            "..",    //i
            ".---",  //j
            "-.-",   //k
            ".-..",  //l
            "--",    //m
            "-.",    //n
            "---",   //o 
            ".--.",  //p
            "--.-",  //q
            ".-.",   //r
            "...",   //s
            "-",     //t 
            "..-",   //u
            "...-",  //v 
            ".--",   //w
            "-..-",  //x
            "-.--",  //y
            "--..",  //z 
            "-----", //0
            ".----", //1
            "..---", //2
            "...--", //3
            "....-", //4
            ".....", //5
            "-....", //6
            "--...", //7
            "---..", //8
            "----."  //9
    };
    for (int i = 0; i < strlen(g); ++i) {
        int x = str(a, (char) toupper(g[i]));
        if (x != -1) {
            printf("%s ", m[x]);
        }
    }
}

int main() {
    char g[100];
    printf("Enter input :");
    scanf("%s",&g);
    check(g);
    return 0;
}