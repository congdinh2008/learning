#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    printf("Chuong trinh so sanh 3 so nhap tu ban phim: \n");
    printf("Moi ban nhap vao so a: \n");
    int a;
    scanf("%d", &a);

    printf("Moi ban nhap vao so b: \n");
    int b;
    scanf("%d", &b);

    printf("Moi ban nhap vao so c: \n");
    int c;
    scanf("%d", &c);

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    // Tim ra so lon nhat trong 3 so a, b, c
    // Voi toan tu && thi:
    //      true && true = true
    //      true && false = false
    //      false && true = false
    //      false && false = false
    // Voi toan tu || thi:
    //      true || true = true
    //      true || false = true
    //      false || true = true
    //      false || false = false
    // Step 1: So sanh a vs b, a vs c. Neu a > b va a > c => a lon nhat
    if (a > b && a > c)
    {
        printf("a = %d is the largest number\n", a);
    }
    // Step 2: So sanh b vs c, b vs a. Neu b > a va b > c => b lon nhat
    else if (b > a && b > c)
    {
        printf("b = %d is the largest number\n", b);
    }
    // Step 3: So sanh c vs a, c vs b. Neu c > a va c > b => c lon nhat
    else
    {
        printf("c = %d is the largest number\n", c);
    }

    // if-else => Neu dieu kien trong if dung thi toi thuc thi cau lenh trong if. Nguoc lai thi thuc thi cau lenh trong else

    if (3 > 4)
    {
        printf("Hello\n");
    }
    return 0;
}