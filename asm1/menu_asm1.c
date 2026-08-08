#include <stdio.h>
#include <math.h>
int main(){  
    int chon, x;
    do
    {
        
        printf("+--------------------------------------------------------------+\n");
        printf("|---------------MENU CHUONG TRINH ASM 1------------------------|\n");
        printf("+...............................................................+\n");
        printf("|1.  Kiểm tra số nguyên                                        |\n");
        printf("|2. Tìm Ước số chung và bội số chung của 2 số                  |\n");
        printf("|3.  Chương trình tính tiền cho quán Karaoke                   |\n");
        printf("|4.Tính tiền điện                                              |\n");
        printf("|5.Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp  |\n");
        printf("|6.Sắp xếp thông tin sinh viên                                 |\n");
        printf("|7. Xây dựng chương trình tính toán phân số                    |\n");
        printf("|8.Thoat chuong trinh                                          |\n");
        printf("+--------------------------------------------------------------+\n");
        printf("Ban hay chon chuc nang 1-8:");
        scanf("%d", &chon);
        switch (chon){
            case 1:
            printf("ban da chon chuc nang 1 kiem tra so nguyen\n");
            printf("Nhap x: ");
            scanf("%d", &x);
            
            
            if (x > 1) {
                printf("%d  la so nguyen duong .\n", x);
                } 
            
            else if(x==0){
                printf("0 khong phai la 1 so nguyen",x);
            }
            else {
                    printf("%d  la so nguyen am.\n", x);
                }
            case 2:
            int a, b, min;
            printf("ban da chon chuc nang 2 Tìm Ước số chung và bội số chung của 2 số \n ");
            printf("Nhap vao so  a va b:");
            scanf("%d %d", &a,&b);
             
            if(a<b){
             min = a;    
            }
            else{
             min = b;
            }
            printf("\n%d và %d co uoc chung la:",a,b );
            for(int i= 1 ; i<= min; i++ ){
                if (a%i==0 && b%1==0)
                {
                  printf("%d, ",i);
                }
            }
            if(a<b>100){
                printf("\n %d và %d vượt ngoai phép tính: ",a,b);
            }
            printf("\n%d và %d co boi chung la:",a,b);
            for(int k =1; k<=100; k++){
                if (k%a==0 && k%b==0)
                {
                  printf("%d,",k);
                }
                
            }
            case 3:
            int tien, giovao,giora,phutvao,phutra,vao,ra;
        printf("ban da chon chuc nang 3 Chương trình tính tiền cho quán Karaoke \n ");   
        printf ("nhap gio vao: ");
        scanf ("%d %d",&giovao,&phutvao);
        printf ("nhap gio ra:  ");
        scanf ("%d %d",&giora, &phutra);
        vao = giovao*60 + phutvao;
        ra =giora*60 + phutra;
        int tientoi =18*60;
   if (ra <= tientoi) {
    tien = ra - vao;
}
else if (vao > tientoi) {
    tien = (ra - vao) * 3;
}
else {
    tien = (tientoi - vao) * 1 + (ra - tientoi) * 3;
}
      printf ("so tien can tinh la %d.000 dong",tien);
       break;

            
            case 4:
            double kwh;
             printf("Ban da chon chuc nang 4: tinh tien dien tieu thu hang thang\n");
            printf("Nhap vao tong so kwh da tieu thu trong thang: ");
            scanf("%lf", &kwh);

            if (kwh <= 0) {
            printf("So kwh khong hop le, vui long nhap so lon hon 0 (so duong)\n");
    } else {
        double Tongtien = 0;

        if (kwh <= 50) {
            Tongtien = kwh * 1678;
        } else {
            if (kwh <= 100) {
                Tongtien = (50 * 1678) + (kwh - 50) * 1734;
            } else {
                if (kwh <= 200) {
                    Tongtien = (50 * 1678) + (50 * 1734) + (kwh - 100) * 2014;
                } else {
                    if (kwh <= 300) {
                        Tongtien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (kwh - 200) * 2536;
                    } else {
                        if (kwh <= 400) {
                            Tongtien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (kwh - 300) * 2834;
                        } else {
                           Tongtien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (100 * 2834) + (kwh - 400) * 2927;
                        }
                    }
                }
            }
        }

        printf("Tong tien dien phai tra: %.0lf VND\n", Tongtien);
    }
break;
           case 5 :
            double vay;
            int x;
            printf("Ban da chon chuc nang 5:tinh lai suat ngan hang vay tra gop\n");
            printf("Ban hay chon khoan vay: ");
            scanf("%lf",&vay);
            if(vay>10000000){
                printf("Khoan vay vuot qua han muc cho phep\n");
            }else{
                if(vay>=500000 && vay<=10000000){
                printf("\nHay chon ki han ban muon vay: 3 6 9 thang: ",x);
                scanf("%d",&x);
                }
            }
                if(x==3){
                double lai=vay*0.043;
                double goc=vay/3;
                double tongtien=goc+lai;
                printf("So tien phai tra trong 1 thang la: %.0lf VND \n",tongtien); 
            }
            if(x==6){
                double lai=vay*0.043;
                double goc=vay/6;
                double tongtien=goc+lai;
                printf("So tien phai tra trong 1 thang la: %.0lf VND \n",tongtien);
            }
            if(x==9){
               double lai=vay*0.043;
                double goc=vay/9;
                double tongtien=goc+lai;
                printf("So tien phai tra trong 1 thang la: %.0lf VND \n",tongtien);
            }
            break;
           
            case 6:
            printf("ban da chon chuc nang 6 sap xep thong tinh sinh vien \n");
            break;
       
            case 7:
            printf("ban da chon chuc nang 7 xay dưng chuong trinh tinh toan phan so\n");
            break;
            case 8:
            printf("ban da chon chuc nang thoat chuong trinh");
            break;
            

        }
    } while ( chon !=8);
    

    
    
}

  
        