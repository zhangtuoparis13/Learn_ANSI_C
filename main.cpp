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
void removeblank1(){
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

void removeblank2()
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

// 输入一行最大长度为 nmax 的字符串，并返回其长度
int getline(char line[], int nmax)
{
    int len;
    char c;
    len = 0;
    printf("Enter a string [CR to exit]: ");
    while(((c=getchar())!='\n') && len<nmax-1)
        line[len++]=c;
    line[len]='\0';
    return len;
}
// 将多个连续空格替换为一个空格，并返回替换后的字符串的长度
int compact1(char line[])
{
    int cursor=0;  // 即字符数组的当前下标
    int prevspace = 0;  // 如果上一个位置是字符串则返回true
    int lcv=0;
    if(line[cursor]=='\0')
        return 0;
    do{
        if((line[cursor]==' ')&&prevspace){
            // 如果一个空格前面还有一个空格，那么将后面的字符串左移一个位置
            for(lcv=cursor;line[lcv];lcv++)
                line[lcv]=line[lcv+1];
        }else
            prevspace=(line[cursor++]==' ');
    }while(line[cursor]);
    return cursor;
}
// 将多个连续空格替换为一个空格，并返回替换后的字符串的长度
int compact2(char line[])
{
    int cursor=0;  // 字符数组的当前下标
    int prevspace = 0;  // 如果上一个位置是字符串则返回true
    int lcv = 0;  // 将字符串复制到哪个位置
    do{
        if(!((line[cursor]==' ')&&prevspace)){
            line[lcv++]=line[cursor];
            prevspace=(line[cursor]==' ');
        }
    }while(line[cursor++]);
    return(lcv-1);  // 遇到 '\0' 返回 -1
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