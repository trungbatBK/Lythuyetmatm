//-----------Bai 1b: Euclidean mở rộng ----------------//
#include <stdio.h>
main(){
    int a,b,r,r1,r2,s,s1,s2,t,t1,t2,q;
    printf("Nhap 2 so a,b: ");
    scanf("%d%d",&a,&b);
    r1=a;r2=b;
    s1=1;s2=0;
    t1=0;t2=1;
    while(r2>0){

        q=r1/r2;

        r=r1-q*r2;
        r1=r2; r2=r;

        s=s1-q*s2;
        s1=s2; s2=s;

        t=t1-q*t2;
        t1=t2; t2=t;
    }
    printf("Vay  : a= %d, b= %d\n",a,b);
    printf("Ta co: %dxa + %dxb = %d",s1,t1,r1);
    getch();
}
