/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>
#include <math.h>
int main(){
    // Khai báo biến
    float a,b,c;
    // Nhập dữ liệu
    printf("Nhập a:");
    scanf("%f",&a);
    printf("Nhập b:");
    scanf("%f",&b);
    printf("Nhập c:");
    scanf("%f",&c);
    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (a==0) {
        if(b==0) {
            if(c==0){
                printf("Phương trình có vô số nghiệm\n");
            }else{
                printf("Phương trình vô nghiệm\n");
            }
        }else {
            float x = -c/b;
            printf("Nghiệm của phương trình là:x = %f\n",x);
        }
    }else {
        float delta = b*b - 4*a*c;
        if(delta<0) {
            printf("Phương trình vô nghiệm\n");
        }else if(delta==0){
            float X = -b/(2*a);
            printf("Phương trình có nghiệm kép là:X = %f\n",X);
        }else {
            float x1 = (-b + sqrt((double)delta))/(2*a);
            float x2 = (-b - sqrt((double)delta))/(2*a);
            printf("Phương trình có 2 nghiệm phân biệt là:\n");
            printf("x1 = %f\n",x1);
            printf("x2 = %f\n",x2);
        }
    }
}
