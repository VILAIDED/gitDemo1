#include<stdio.h>
#include<conio.h>
#include<math.h>

const int MAX = 100;

void MaTranVuongXoaHangVaCot(double input[MAX][MAX], int n, int hang, int cot, double output[MAX][MAX]) {
    int h = 0, c = 0;
    for (int i = 0; i < n; i++) {
        if (i != hang) {
            for (int j = 0; j < n; j++) {
                if (j != cot) {
                    output[h][c] = input[i][j];
                    c += 1;
                }
            }
            h += 1; c = 0;
        }
    }
}

double MaTranVuongDinhThuc(double input[MAX][MAX], int n) {
    int i, j;
    double matran[MAX][MAX];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matran[i][j] = input[i][j];
        }
    }
    if (n == 1) {
        return matran[0][0];
    }
    else if (n == 2) {
        return matran[0][0] * matran[1][1] - matran[0][1] * matran[1][0];
    }
    else if (n >= 3) {
        for (i = 1; i < n; i++) {
            double heso = 0;
            heso += matran[i][0];
            heso /= matran[0][0];
            for (j = 0; j < n; j++) {
                matran[i][j] = matran[i][j] - heso * matran[0][j];
            }
        }
        double matran2[MAX][MAX];
        MaTranVuongXoaHangVaCot(matran, n, 0, 0, matran2);
        return pow(-1, 0) * matran[0][0] * MaTranVuongDinhThuc(matran2, n - 1);
    }
    else return 0;
}

// Cach tinh ma tran nghich dao xin xem lai tai day.
// https://vi.wikipedia.org/wiki/Ma_tr%E1%BA%ADn_kh%E1%BA%A3_ngh%E1%BB%8Bch
void MaTranVuongNghichDao(double input[MAX][MAX], int n, double output[MAX][MAX]) {
    double det = MaTranVuongDinhThuc(input, n);
    if (det == 0) printf("\nDinh thuc cua ma tran = 0!\n=> Khong co ma tran nghich dao.\n\n");
    else 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            double mangRG[MAX][MAX];
            MaTranVuongXoaHangVaCot(input, n, i, j, mangRG);
            double dt = MaTranVuongDinhThuc(mangRG, n - 1);
            output[j][i] = 1/det * dt * pow(-1, i + j);
        }
    }
}

int main() {
    int n, i, j;
    printf("Nhap so n (so cot va so hang bang nhau): ");
    scanf("%d", &n);

    printf("Nhap cac bien sau (hang va cot): a[i][j]\n");
    printf("i: hang, j: cot\n");
    double mang[MAX][MAX];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Nhap bien a hang %d cot %d: ", i + 1, j + 1);
            scanf("%lf", &mang[i][j]);
        }
    }


    printf("\nMa tran da nhap:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%lf\t", mang[i][j]);
        }
        printf("\n");
    }

    double mangND[MAX][MAX];
    MaTranVuongNghichDao(mang, n, mangND);
    printf("\nMa tran sau khi bien doi thanh ma tran nghich dao:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%lf\t", mangND[i][j]);
        }
        printf("\n");
    }
    getch();
}