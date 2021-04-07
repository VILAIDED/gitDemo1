#include<stdio.h>
#include<conio.h>
#include<string.h>

const int MAX = 1410065408;

int KiemTraDoiXung(char a[])
{
    long length = strlen(a);
    long result = 1;
    long i;
    for (i = 0; i < (length / 2); i++)
    if (a[i] != a[length - i - 1]) result = 0;
    return result;
}

int main()
{
    printf("Nhap chuoi: ");
    char a[MAX];
    gets(a);
    //scanf("%s", &a);
    if (KiemTraDoiXung(a) == 1) printf("Chuoi doi xung!"); else printf("Chuoi khong doi xung!");
    getch();
}