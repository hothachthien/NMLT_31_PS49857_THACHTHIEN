#include <stdio.h>
#include <string.h>

int main() {
    // Khai báo các biến lưu trữ thông tin sinh viên
    char mssv[50];
    char ho_ten[100];
    int nam_sinh;
    int tuoi;
    float diem_tb;

    // --- LUỒNG NHẬP DỮ LIỆU ---
    printf("Nhap Ma so sinh vien (MSSV): ");
    scanf("%s", mssv);
    
    // Xóa bộ nhớ đệm để tránh bị trôi lệnh khi nhập chuỗi có khoảng trắng
    while (getchar() != '\n'); 

    printf("Nhap Ho va Ten: ");
    fgets(ho_ten, sizeof(ho_ten), stdin);
    // Xóa ký tự xuống dòng '\n' do fgets tự động nhận vào
    ho_ten[strcspn(ho_ten, "\n")] = '\0'; 

    printf("Nhap Nam Sinh: ");
    scanf("%d", &nam_sinh);

    printf("Nhap Diem Trung Binh: ");
    scanf("%f", &diem_tb);

    // Tự động tính toán số tuổi dựa trên năm 2026
    tuoi = 2026 - nam_sinh;

    // --- LUỒNG XUẤT DỮ LIỆU (Đúng định dạng mẫu) ---
    printf("\nMa so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", ho_ten);
    printf("Nam sinh: %d\n", nam_sinh);
    printf("Tuoi: %d\n", tuoi);
    // In điểm trung bình với 2 chữ số thập phân cho đẹp (hoặc dùng %g nếu muốn tự động gọn)
    printf("Diem Trung Binh: %.2f\n", diem_tb); 

    return 0;
}