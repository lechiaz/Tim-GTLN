#include <stdio.h>
int findMaxValue(int arrSoPhanTu[], int soPhanTu)
{
    int max;
    max = arrSoPhanTu[0];
    for (int i = 0; i < soPhanTu; ++i) {
        if (max < arrSoPhanTu[i])
        {
            max = arrSoPhanTu[i];
        }
    }
    return (int)max;
}

int findMinValue(int arrSoPhanTu[], int soPhanTu)
{
    int min = 0;
    min = arrSoPhanTu[0];
    for (int i = 0; i < soPhanTu; ++i) {
        if (min > arrSoPhanTu[i])
        {
            min = arrSoPhanTu[i];
        }
    }
    return (int)min;
}
int main() {
    int soPhanTu;
    printf("nhap so phan tu : ");
    scanf("%d",&soPhanTu);
    if (soPhanTu>10){
        printf("so phan tu phai nho hon hoac bang 10");
        return 0;
    }

    int arrSoPhanTu [soPhanTu];
    for (int i = 0; i <soPhanTu ; ++i) {
        printf(" nhap so phan tu thu %d",i + 1);
        scanf("%d",&arrSoPhanTu[i]);
    }
    printf("Lua chon in ra gia tri \n 1. Gia tri lon nhat\n 2. gia tri nho nhat\n");
    int luachon;
    scanf("%d",&luachon);
    switch (luachon){
        case 1:{
            printf("Phan tu lon nhat la: %d", findMaxValue(arrSoPhanTu, soPhanTu));
            break;
        }
        case 2:{
            printf("Phan tu nho nhat la: %d", findMinValue(arrSoPhanTu, soPhanTu));
            break;
        }
        default:{
            printf("ban nhap sai");
            break;
        }

    }


    return 0;
}