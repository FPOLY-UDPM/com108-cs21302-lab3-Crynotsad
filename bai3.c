/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main(){
    
    // Khai báo biến
    int soDien;
    float tienDien;

    // Nhập dữ liệu
    printf("Nhập số điện tiêu thụ:");
    scanf("%d",&soDien);
    

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if(soDien <= 50) {
        tienDien = soDien * 1000;
    } else if(soDien <= 100) {
        tienDien = 50 * 1000 + (soDien - 50) * 1200;
    } else {
        tienDien = 50 * 1000 + 50 * 1200 + (soDien - 100) * 1500;
    }
    printf("Số tiền điện phải trả là: %.2f\n", tienDien);
    return 0;
}
