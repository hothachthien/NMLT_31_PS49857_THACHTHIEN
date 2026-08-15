#include <stdio.h>
#include <string.h>

// 1. Định nghĩa Cấu trúc Sinh viên
struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

// 2. Khai báo các Nguyên mẫu hàm (Function Prototypes)
void menu(); // Hàm void chứa cấu trúc switch-case
void nhapXuatSinhVien(struct SinhVien mangSV[], int *n);
void sapXepSinhVien(struct SinhVien mangSV[], int n);
void timKiemSinhVien(struct SinhVien mangSV[], int n);
void xuatHocBong(struct SinhVien mangSV[], int n);
void xoaBoNhoDem();

// --- HÀM MAIN CỰC KỲ GỌN GÀNG ---
int main() {
    menu(); // Gọi hàm menu để chạy toàn bộ chương trình
    return 0;
}

// --- CÁC HÀM XỬ LÝ CHI TIẾT ---

// Hàm xóa bộ nhớ đệm
void xoaBoNhoDem() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Hàm chứa cấu trúc do-while và switch-case điều khiển chương trình
void menu() {
    struct SinhVien mangSV[100];
    int n = 0;
    int luaChon;

    do {
        printf("\n+---------------------------------------------------+\n");
        printf("|         HE THONG QUAN LY SINH VIEN (LAB 8)        |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Nhap va Xuat danh sach sinh vien               |\n");
        printf("| 2. Sap xep sinh vien theo diem TB tang dan        |\n");
        printf("| 3. Tim kiem sinh vien theo Ma so sinh vien (MSSV) |\n");
        printf("| 4. Xuat danh sach sinh vien dat Hoc bong (>= 8.0) |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &luaChon);
        xoaBoNhoDem(); 

        switch (luaChon) {
            case 1:
                nhapXuatSinhVien(mangSV, &n);
                break;
            case 2:
                if (n > 0) {
                    sapXepSinhVien(mangSV, n);
                } else {
                    printf("-> Danh sach dang trong. Vui long nhap sinh vien (Chon so 1)!\n");
                }
                break;
            case 3:
                if (n > 0) {
                    timKiemSinhVien(mangSV, n);
                } else {
                    printf("-> Danh sach dang trong. Vui long nhap sinh vien (Chon so 1)!\n");
                }
                break;
            case 4:
                if (n > 0) {
                    xuatHocBong(mangSV, n);
                } else {
                    printf("-> Danh sach dang trong. Vui long nhap sinh vien (Chon so 1)!\n");
                }
                break;
            case 5:
                printf("\nDa thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("-> Lua chon khong hop le. Vui long chon lai tu 1 den 5!\n");
                break;
        }
    } while (luaChon != 5);
}

// Chức năng 1: Nhập và Xuất danh sách sinh viên
void nhapXuatSinhVien(struct SinhVien mangSV[], int *n) {
    printf("\nNhap so luong sinh vien: ");
    scanf("%d", n);
    xoaBoNhoDem();

    for (int i = 0; i < *n; i++) {
        printf("\n--- Nhap thong tin sinh vien thu %d ---\n", i + 1);
        
        printf("MSSV: ");
        fgets(mangSV[i].mssv, sizeof(mangSV[i].mssv), stdin);
        mangSV[i].mssv[strcspn(mangSV[i].mssv, "\n")] = 0; 
        
        printf("Ho va ten: ");
        fgets(mangSV[i].tenSV, sizeof(mangSV[i].tenSV), stdin);
        mangSV[i].tenSV[strcspn(mangSV[i].tenSV, "\n")] = 0;
        
        printf("Nganh hoc: ");
        fgets(mangSV[i].nganhHoc, sizeof(mangSV[i].nganhHoc), stdin);
        mangSV[i].nganhHoc[strcspn(mangSV[i].nganhHoc, "\n")] = 0;
        
        printf("Diem trung binh: ");
        scanf("%f", &mangSV[i].diemTB);
        xoaBoNhoDem();
    }

    printf("\n%-15s %-25s %-20s %-10s\n", "MSSV", "Ho va Ten", "Nganh Hoc", "Diem TB");
    for (int i = 0; i < *n; i++) {
        printf("%-15s %-25s %-20s %-10.2f\n", mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
}

// Chức năng 2: Sắp xếp sinh viên theo Điểm trung bình tăng dần
void sapXepSinhVien(struct SinhVien mangSV[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mangSV[i].diemTB > mangSV[j].diemTB) {
                struct SinhVien temp = mangSV[i];
                mangSV[i] = mangSV[j];
                mangSV[j] = temp;
            }
        }
    }
    
    printf("\n--- DANH SACH SINH VIEN SAU KHI SAP XEP DIEM TANG DAN ---\n");
    printf("%-15s %-25s %-20s %-10s\n", "MSSV", "Ho va Ten", "Nganh Hoc", "Diem TB");
    for (int i = 0; i < n; i++) {
        printf("%-15s %-25s %-20s %-10.2f\n", mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
}

// Chức năng 3: Tìm kiếm sinh viên theo Mã số sinh viên (MSSV)
void timKiemSinhVien(struct SinhVien mangSV[], int n) {
    char mssvTim[50];
    printf("\nNhap MSSV can tim: ");
    fgets(mssvTim, sizeof(mssvTim), stdin);
    mssvTim[strcspn(mssvTim, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(mangSV[i].mssv, mssvTim) == 0) {
            if (found == 0) {
                printf("\n--- THONG TIN SINH VIEN TIM THAY ---\n");
                printf("%-15s %-25s %-20s %-10s\n", "MSSV", "Ho va Ten", "Nganh Hoc", "Diem TB");
                found = 1;
            }
            printf("%-15s %-25s %-20s %-10.2f\n", mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
        }
    }
    
    if (found == 0) {
        printf("\nKhong tim thay sinh vien co MSSV nay!\n");
    }
}

// Chức năng 4: Xuất danh sách sinh viên đạt Học bổng
void xuatHocBong(struct SinhVien mangSV[], int n) {
    int found = 0;
    
    for (int i = 0; i < n; i++) {
        if (mangSV[i].diemTB >= 8.0) {
            if (found == 0) {
                printf("\n--- DANH SACH SINH VIEN DAT HOC BONG ---\n");
                printf("%-15s %-25s %-20s %-10s\n", "MSSV", "Ho va Ten", "Nganh Hoc", "Diem TB");
                found = 1; 
            }
            printf("%-15s %-25s %-20s %-10.2f\n", mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
        }
    }
    
    if (found == 0) {
        printf("\nHien tai chua co sinh vien nao dat hoc bong (Diem TB >= 8.0).\n");
    }
}