/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
int main(){
    
    // Khai báo biến
    int chon;
    
    // Nhập dữ liệu
    printf("Menu chhuowng trình:\n");
    printf("1. Bài 1: Xây dựng chương trình tính học lực\n");
    printf("2. Bài 2: Xây dựng chương trình giải phương trình\n");
    printf("3. Bài 3: Xây dựng chương trình tính tiền điện\n");
    printf("Nhập lựa chọn của bạn (1-3): ");
    scanf("%d",&chon);

    // Xử lý, tính toán VÀ Hiển thị kết quả
   switch (chon) {
        case 1:
            printf("Bạn đã chọn bài 1: Xây dựng chương trình tính học lực\n");
            break;
        case 2:
            printf("Bạn đã chọn bài 2: Xây dựng chương trình giải phương trình\n");
            
            break;
        case 3:
            printf("Bạn đã chọn bài 3: Xây dựng chương trình tính tiền điện\n");
            break;
    }
    return 0;
}
