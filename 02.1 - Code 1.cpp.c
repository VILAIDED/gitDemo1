#include<stdio.h>
#include<conio.h>

int KiemTraSoHoanHao(int n)
{
    int num = 0;
    for (int i = 1; i <= (n/2); i++) if (n % i == 0) num += i;

    if (num == n) return 1; else return 0;
}

int main()
{
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    // In ra la so hoan hao hay khong.
    for (int i = 0; i < n; i++) if (KiemTraSoHoanHao(n) == 1) printf("%d ", a[i]);

    // Lenh tam dung man hinh.
    getch();
}
