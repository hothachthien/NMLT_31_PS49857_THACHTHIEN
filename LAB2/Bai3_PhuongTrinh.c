#include <stdio.h>

int main() {
    int a, b;
    float x;
printf("GIAI PHUONG TRINH BAC NHAT ax + b = 0\n");
printf("Nhap he so a (a khac 0): ");
scanf("%d", &a);
printf("Nhap he so b: ");
scanf("%d", &b);
x=(float) -b / a;
printf("Nghiem cua phuong trinh %dx + %d = 0 la x = %.2f\n,a ,b ,x");
return 0; }
