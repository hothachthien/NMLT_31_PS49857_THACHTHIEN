#include <stdio.h>

int main() {
    int toan, ly, hoa;
    float diemTrungBinh;

    printf("Nhap diem Toan: ");
    scanf("%d", &toan);

    printf("Nhap diem Ly: ");
    scanf("%d", &ly);

    printf("Nhap diem Hoa: ");
    scanf("%d", &hoa);

    diemTrungBinh = (toan * 3 + ly * 2 + hoa) / 6.0;

    printf("Diem trung binh 3 mon (Toan he so 3, Ly he so 2, Hoa he so 1): %.2f\n", diemTrungBinh);

    return 0;
}