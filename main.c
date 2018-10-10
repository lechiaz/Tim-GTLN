#include <stdio.h>
int main() {
    int soPhanTu;
    scanf("%d",&soPhanTu);
    int arrSoPhanTu [soPhanTu];
    for (int i = 0; i <soPhanTu ; ++i) {
        printf(" nhap so phan tu thu %d",i + 1);
        scanf("%d",&arrSoPhanTu[i]);
    }
    return 0;
}