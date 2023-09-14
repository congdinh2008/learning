#include <stdio.h>

const float PI = 3.14F; // Khai bao hang so va gan gia tri. Khong the thay doi duoc gia tri sau khi khai bao

int main(int argc, char const *argv[])
{
    int number1; // Khai bao bien
    number1 = 9; // Gan gia tri cho bien

    int num = 10; // Vua khai bao va gan gia tri
    printf("num = %d\n", num);
    num = 20;
    printf("num = %d\n", num);

    // Tinh dien tich hinh tron
    float r = 2.5;

    float area = r * r * PI;
    printf("Area = %f\n", area);

    printf("Hello world\n");
    printf("\tHello world\n");
    printf("C:\\User\\Admin\\source\n");
    return 0;
}
