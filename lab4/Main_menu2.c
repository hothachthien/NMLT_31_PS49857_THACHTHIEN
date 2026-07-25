#include <stdio.h>
#include <math.h>
int main()
{
    int chon, x;
    do
    {
        printf("+--------------------------------------------------+\n");
        printf("|---------------MENU CHUONG TRINH LAB 4------------|\n");
        printf("+..................................................+\n");
        printf("|1. Tinh trung binh tông các sô chia hêt cho 2     |\n");
        printf("|2.Kiểm tra Số nguyên tố                           |\n");
        printf("|3.Kiểm tra Số chính phương                        |\n");
        printf("|4.Thoat chuong trinh                              |\n");
        printf("+--------------------------------------------------+\n");
        printf("Ban hay chon chuc nang 1-4:");
        scanf("%d", &chon);
        switch (chon){
        
            case 1:{
            int min, max;
            int tong =0;
            int bienDem =0;
            float trungBinh= 0.0;
        printf("Tinh trung binh tong cac so chia het cho 2\n");
        printf("Nhap gia tri min:");
        scanf("%d",&min);
        printf("nhap gia tri max : ");
        scanf("%d",&max);
        if (min > max){
            printf("Loi phep tinh gia tri min(%d) khong duoc lon hon max(%d)\n", min , max);
            break;
        }
            for (int i = min; i <= max; i++)
            {
               if (i % 2==0)
               {
                 tong += i;
                 bienDem++;
               }
               
            }
            if (bienDem >0 ){
                trungBinh = (float)tong / bienDem;
            
        printf("\n--- KẾT QUẢ ---\n");
        printf("Số lượng các số chia hết cho 2: %d\n", bienDem);
        printf("Tổng các số thỏa mãn: %d\n", tong);
        printf("Giá trị trung bình cộng: %.2f\n", trungBinh);
            }
            else{
                printf("\nThông báo: Không có số nào chia hết cho 2 trong khoảng [%d, %d].\n",min, max);
            }
        break;

        }
        case 2:{
            printf("Nhap x: ");
            scanf("%d", &x);
            
            
            if (x < 2) {
                printf("%d khong phai la so nguyen to .\n", x);
            } 
            else {
                int laSoNguyenTo = 1; // Khởi tạo cờ hiệu (thống nhất dùng chữ thường)
                
                // Vòng lặp for phải nằm TRONG khối else này
                for (int i = 2; i <= sqrt(x); i++) {
                    if (x % i == 0) {
                        laSoNguyenTo = 0; // Tìm thấy ước số -> đánh dấu không phải số nguyên tố
                        break;           // Thoát vòng lặp ngay lập tức
                    }
                }
                
                // Phần in kết quả cũng phải nằm TRONG khối else
                if (laSoNguyenTo == 1) {
                    printf("%d la so nguyen to.\n", x);
                } else {
                    printf("%d khong phai la so nguyen to.\n", x);
                }
            }
            break;
        }
        case 3:{
            printf("nhap x");
            scanf("%d",&x);
            for (int  i = 1; i= sqrt(x) ;i++)
            {
               if (i*i==x)
               {
                printf("%d la so chinh phuong \n",x);
                break;
               }
               else{
                printf("%d khong phai la so chinh phuong\n",x);
                break;
                
               }
               
            }
            
           
            
        }
                
    }
    } while (chon !=4 );
}
            
            

        

    

 
             

      
    
    

    


            
        
