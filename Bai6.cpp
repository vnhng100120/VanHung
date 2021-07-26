#include<stdio.h>
 
long tinhGiaithua(int n) {
    if (n > 0) {
        return n * tinhGiaithua(n - 1);
    } else {
        return 1;
    }
}
int main() {
    int a = 5;
    int b = 0;
    int c = 10;
    printf("Giai thua cua %d  la: %d \n",  a, tinhGiaithua(a));
    printf("Giai thua cua %d  la: %d \n",  b, tinhGiaithua(b));
    printf("Giai thua cua %d  la: %d",  c, tinhGiaithua(c));
}
