#include <stdio.h>

int main() {
    int choice;
     /* code */
    
  
    printf("==========MENU CHUONG TRINH LAB3==========\n");
    printf("1. Bai 1: Chuc nang tinh hoc luc sinh vien\n");
    printf("2. Bai 2: Giai phuong trinh bac nhat\n");
    printf("3. Bai 3: Chuc nang tinh tien dien tieu thu hang thang\n");
    printf("4. Thoat chuong trinh\n");
    printf("=======================================\n");
    printf("Nhap lua chon cua ban (1-4): ");
    scanf("%d", &choice);

    // Cấu trúc switch-case để điều khiển1
    
    switch (choice) {
        case 1:
            printf("Ban da chon chuc nang 1 tinh hoc luc sinh vien\n");
            // Gọi code bài 1 của bạn vào đây
            break;
        case 2:
            printf("Ban da chon chuc nang 2 Giai phuong trinh bac nhat\n");
            // Gọi code bài 2 của bạn vào đây
            break;
        case 3:
            printf("Ban da chon chuc nang 3 Chuc nang tinh tien dien tieu thu hang thang\n");
            // Gọi code bài 3 của bạn vào đây
            break;
        case 4:
            printf("Tam biet!\n");
            break;
        default:
            printf("Lua chon khong hop le!\n"); 
    switch (choice) {
        case 1: {
            printf("\n--- BAN DA CHON CHUC NANG 1 : TINH HOC LUC SINH VIEN ---\n");
            float diem;
            printf("Moi ban nhap diem (0 - 10): ");
            scanf("%f",&diem);
           
        
            if (diem >= 0 && diem <= 10) {
                if (diem >= 9) {

                    printf("Hoc luc: Xuat sac\n");
                } else if (diem >= 8 && diem<9) {
                    printf("Hoc luc: Gioi\n");
                } else if (diem >= 6.5 && diem<8) {
                    printf("Hoc luc: Kha\n");
                } else if (diem >= 5 && diem<6.5) {
                    printf("Hoc luc: Trung binh\n");
                } else if (diem >= 3.5 && diem <5) {
                    printf("Hoc luc: Yeu\n");
                } else {
                    printf("Hoc luc: Kem\n");
                }
            } else {
                printf("Diem so khong hop le! Vui long nhap trong khoang 0 - 10.\n");
            }
            break;
        }

        case 2:
            printf("\nBan da chon chuc nang 2: Giai phuong trinh bac nhat\n");
            // Đặt code Bài 2 của bạn vào đây
            break;

        case 3:
            printf("\nBan da chon chuc nang 3: Tinh tien dien tieu thu hang thang\n");
            // Đặt code Bài 3 của bạn vào đây
            break;

        case 4:
            printf("\nTam biet!\n");
            break;

        default:
            printf("\nLua chon khong hop le!\n");
            break;
    }
 }
}


  

    
  

      

    