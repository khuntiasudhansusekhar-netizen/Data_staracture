#include<stdio.h>
#include<conio.h>
char text[40];
void main ()
{
    char ch;
    void push(char,int);
    char pop(int);
    int j=39,k;
    printf("enter a string (* to end):");
    while(ch!='*'&&j>=0)
    {
        ch = getch();
        printf("%c",ch);
        push(ch,j);
        j--;
    }
    k=j;
    j=0;
    printf("\n reverse string is :\n");
    while(k!=40){
        ch=pop(k);
        printf("%c",ch);
        k++;
    }
    getch();
}
void push(char c,int j)
{
    if (c!='*')
    text[j]=c;
}
char pop(int j)
{
    char c;
    c = text[j];
    text[j]=text[j+1];
    return c;
}
