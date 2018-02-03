//-----------Bai 1a: Tìm ước chung lớn nhất 2 số ------------//
#include <stdio.h>
main(){
    int a,b,r1,r2,q,r;
    printf("\nNhap a,b: ");
    scanf("%d%d",&a,&b);
    r1=a;r2=b;
    while(r2>0){
        q=r1/r2;
        r=r1-q*r2;
        r1=r2;r2=r;
    }
    printf("Vay   : a= %d, b= %d\n",a,b);
    printf("Ta co : gcd(a,b)= %d",r1);
    getch();
}
