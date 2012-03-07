#include <stdio.h>

int main(int argc, char **argv){
    int tape[99];
    int *head = tape;
    char curMconfig;

    FILE *fp;
    fp = fopen(argv[1], "r");

    while((curMconfig=fgetc(fp))!=-1){
        switch(curMconfig){
            case '>':
                head++;
                break;
            case '<':
                head--;
                break;
            case '!':
                printf("%d\n", *head);
                break;
            case '?':
                scanf("%d", head);
                break;
            case '+':
                ++*head;
                break;
            case '-':
                --*head;
                break;
        }
    }
    fclose(fp);

}
