#include<stdio.h>
#include<conio.h>
#include <string.h> 

const int MAX = 4;

int ChuyenKiTuXauThanhSo(char *c) {
    if (strlen(c) > 1 | strlen(c) <= 0) return -1;
    int i, j, kq = -1;
    for (i = 0; i < 10; i++) if (c[0] == i + 48)
    {
        kq = i;
        break;
    }
    return kq;
}

int main() {
    int i = 0, j, k, l, mang[MAX], temp, count = 0, trung = 0;
    char s[1000];

    while (i < MAX)
    {
        trung = 0;
        printf("Nhap so thu %d: ", i + 1);
        scanf("%s", &s);
        temp = ChuyenKiTuXauThanhSo(s);
        if (temp > -1)
        {
            for (j = 0; j < i; j++) if (mang[j] == temp) trung = 1;
            if (trung == 0)
            {
                mang[i] = temp;
                i += 1;
            }
            else printf("\nBan da nhap chu so giong voi chu so ban da nhap o truoc.\nVui long nhap lai.\n");
        }
        else printf("\nBan da nhap sai.\nChi duoc phep nhap chu so tu 0 -> 9.\nVui long nhap lai.\n");
    }
    printf("\n\n");
    
    for (i = 0; i < MAX; i++)
    {
        if (mang[i] != 0) for (j = 0; j < MAX; j++)
        {
            if (mang[i] != mang[j]) for (k = 0; k < MAX; k++)
            {
                if ((mang[i] != mang[k]) & (mang[j] != mang[k])) for (l = 0; l < MAX; l++)
                {
                    if ((mang[i] != mang[l]) & (mang[j] != mang[l]) & (mang[k] != mang[l]))
                    {
                        printf("%d%d%d%d\t", mang[i], mang[j], mang[k], mang[l]);
                        count += 1;
                        if (mang[l] != 0)
                        {
                            printf("%d.%d%d%d\t", mang[i], mang[j], mang[k], mang[l]);
                            printf("%d%d.%d%d\t", mang[i], mang[j], mang[k], mang[l]);
                            printf("%d%d%d.%d\t", mang[i], mang[j], mang[k], mang[l]);
                            count += 3;
                        }
                    }
                }
            }
        }
    }
    printf("\n=> Co tat ca %d so.\n", count);

    getch();
}
