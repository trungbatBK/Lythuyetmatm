//---------------Bai2: Tim ngich dao nhan -----------//
#include <stdio.h>
main(){
    int b,b1,n,r,r1,r2,t,t1,t2,q,i;
    printf("Nhap so b,n tuong ung: ");
    scanf("%d%d",&b,&n);
    r1=n;r2=b;
    t1=0;t2=1;
    for(i=2;i<=b;++i){
         if((b%i==n%i)&&(b%i==0)) {
                printf("Khong co nghich dao nhan!\n");
                return 0;
         }
        else break;
    }
    while(r2>0){

        q=r1/r2;

        r=r1-q*r2;
        r1=r2; r2=r;

        t=t1-q*t2;
        t1=t2; t2=t;
    }
    if(r1=1) b1= t1;

    printf("Vay : b= %d, n= %d \n",b,n);
    printf("Ngich dao nhan la b1= %d",b1);
    getch();
}
