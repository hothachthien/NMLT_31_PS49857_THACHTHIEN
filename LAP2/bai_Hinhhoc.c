#include <stdio.h>

#define PI 3.14159

int main() {
    // Khai báo biến
    int dai, rong;
    float r;
    int chuViHCN, dienTichHCN;
    float chuViHT, dienTichHT;

    // ===== HÌNH CHỮ NHẬT =====
    printf("===== HINH CHU NHAT =====\n");
    printf("Nhap chieu dai: ");
    scanf("%d", &dai);

    printf("Nhap chieu rong: ");
    scanf("%d", &rong);

    chuViHCN = (dai + rong) * 2;
    dienTichHCN = dai * rong;

    printf("\nKet qua hinh chu nhat:\n");
    printf("Chieu dai : %d\n", dai);
    printf("Chieu rong: %d\n", rong);
    printf("Chu vi    : %d\n", chuViHCN);
    printf("Dien tich : %d\n", dienTichHCN);

    // ===== HÌNH TRÒN =====
    printf("\n===== HINH TRON =====\n");
    printf("Nhap ban kinh: ");
    scanf("%f", &r);

    chuViHT = 2 * PI * r;
    dienTichHT = PI * r * r;

    printf("\nKet qua hinh tron:\n");
    printf("Ban kinh  : %.2f\n", r);
    printf("Chu vi    : %.2f\n", chuViHT);
    printf("Dien tich : %.2f\n", dienTichHT);

    return 0;
}