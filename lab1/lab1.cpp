#include <stdio.h> // แก้ไข stduio.h เป็น stdio.h

int main() {
    char Name[50];
    int Age = 0;
    
    printf("Enter your name: "); // เพิ่ม ; ท้ายบรรทัด
    scanf("%s", Name);
    
    printf("Enter your age: ");
    scanf("%d", &Age); // เพิ่ม & หน้าตัวแปร Age
    
    printf("- - - - - -\n");
    printf("Hello %s\n", Name); // ใส่ตัวแปร Name
    printf("Age = %d\n", Age); // ใส่ตัวแปร Age
    
    return 0; // เพิ่ม return 0; เพื่อบอกว่าโปรแกรมทำงานเสร็จสมบูรณ์
} //end main function