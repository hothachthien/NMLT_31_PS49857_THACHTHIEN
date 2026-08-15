#include <stdio.h>
int main()
{
    char maSV1[7];
    char tenSV1[20];
    float diemSV1;

    char maSV2[7];
    char tenSV2[20];
    float diemSV2;

    char maSV3[7];
    char tenSV3[20];
    float diemSV3;

    // sinh vien thu 40
    char maSV40[40][7];
    char tenSV40[40][20];
    float dsDiemTB[40];

    struct SinhVien
    {
        char maSV[7];
        char tenSV[20];
        float diemSV;
    } sv1, sv2;
    struct SinhVien sv3;

    struct SinhVien dsSinhVien[40];
    for (int i = 1; i < 3; i++)
    {
        printf("Nhap ma sinh vien [%d]: ", i);
        gets(dsSinhVien[i].maSV);
        printf("Nhap ten sinh vien [%d]: ", i);
        gets(dsSinhVien[i].tenSV);
        printf("Nhap diem sinh vien [%d]: ", i);
        scanf("%f", &dsSinhVien[i].diemSV);
        getchar();
    }
    for (int i = 1; i < 3; i++)
    {
        printf("MaSV:%s\tTenSV:%s\tDiemSV:%.2f\t", dsSinhVien[i].maSV, dsSinhVien[i].tenSV, dsSinhVien[i].diemSV);
    }

    return 0;
}
