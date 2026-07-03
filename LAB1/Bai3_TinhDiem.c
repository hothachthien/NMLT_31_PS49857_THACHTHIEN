#include <stdio.h>
#include <string.h>

int main() {
    // Khai báo biến
    char mssv[50];
    char ho_ten[100];
    float diem_toan, diem_ly, diem_hoa;
    float diem_trung_binh;

    // --- 1. LUỒNG NHẬP DỮ LIỆU ---
    printf("Nhap Ma so sinh vien (MSSV): ");
    scanf("%s", mssv);
    
    // Xóa bộ nhớ đệm để tránh lỗi trôi lệnh khi nhập Họ và Tên bằng fgets
    while (getchar() != '\n'); 

    printf("Nhap Ho va Ten: ");
    fgets(ho_ten, sizeof(ho_ten), stdin);
    ho_ten[strcspn(ho_ten, "\n")] = '\0'; // Xóa ký tự xuống dòng thừa ở cuối chuỗi

    printf("Nhap Diem Toan: ");
    scanf("%f", &diem_toan);

    printf("Nhap Diem Ly: ");
    scanf("%f", &diem_ly);

    printf("Nhap Diem Hoa: ");
    scanf("%f", &diem_hoa);

    // --- 2. TÍNH TOÁN ĐIỂM TRUNG BÌNH ---
    // Toán nhân hệ số 2, tổng hệ số là 4
    diem_trung_binh = (diem_toan * 2 + diem_ly + diem_hoa) / 4;

    // --- 3. LUỒNG XUẤT DỮ LIỆU ---
    printf("\nMa so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", ho_ten);
    printf("Diem Trung Binh: %.2f\n", diem_trung_binh); // Làm tròn 2 chữ số thập phân

    return 0;
}