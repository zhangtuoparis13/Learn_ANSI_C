#include <stdio.h>
#include <ctype.h>
/* copy input to output; 1st version */
void filecopy1()
{
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
/* copy input to output; 2nd version */
void filecopy2()
{
    int c;
    while ((c = getchar())!=EOF)
        putchar(c);
}

/* exo 1.6 */
void verifyexpression()
{
    int c;
    while ((c = getchar()) != EOF) {
        printf("%d ", c != EOF);
        putchar(c);
    }
    printf("\n%d\n", c != EOF);
}
/*exo 1.7
 * Program to print the value of EOF.
   EOF is a macro defined in stdio.h
   1. Since EOF is an integer, we can print it with %d format in the printf. 2. EOF value is printed as -1.*/
void valueofEOF()
{
    printf("The value of EOF is %d Assuming senthil is a total cupper",EOF);
}
void countcarecters()
{
    double nc;
    for ( nc = 0; getchar()!=EOF ; ++nc) {

    }
    printf("%.0f\n", nc);
}
/*exo1.8
 * Write a program to count blanks, tabs, and newlines
 * In this program we are going to count the number of Blanks, tabs and new lines present in the input.
 * To do this the program, while reading the characters checks for the
 * condition c = getchar !=EOF which means if the character is
 * not end of file continue counting Blanks tabs and newlines.
 * */
void countblank()
{
    int c, nl, nt, ns;
    nl = 0;
    nt = 0;
    ns = 0;
    while ((c = (getchar()) != EOF)) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++ns;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", ns, nt, nl);
}

void countblank_file()
{
    FILE *fp;
    int c;
    if((fp=fopen("string.txt","rt"))==NULL){
        printf("Cannot open file strike any key exit!");
    }
    int nl, nt, ns;
    nl = 0;
    nt = 0;
    ns = 0;
    c = fgetc(fp);
    while (c!= EOF) {
//         putchar(c);
        c=fgetc(fp);
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++ns;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", ns, nt, nl);
    fclose(fp);
}
void countblank1(){
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ') {
            while ((c = getchar()) == ' ');
            putchar(' ');
            if (c == EOF) break;
        }
        putchar(c);
    }
}

void countblank2()
{
    int c;
    while((c = getchar())!= EOF) {
        if (isblank(c))
        {
            while ((c = getchar()) == ' '){

            }
            putchar(' ');
            if (c == EOF) break;
        }
        putchar(c);
    }

}

int main()
{
//    filecopy1();
//    filecopy2();
//    verifyexpression();
//    valueofEOF();
//    countcarecters();
//    countblank();
//    countblank_file();
    return 0;
}