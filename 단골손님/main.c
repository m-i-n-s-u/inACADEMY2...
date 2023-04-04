

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int price,money,need,coupon1=0,coupon2=0; //°¡°İ, ¾µ µ·, ÇÊ¿äÇÑ ÄíÆù, ÁÖ´Â ÄíÆù
    int guest=0, special=0,cnt1=0,cnt2=0; //´Ü°ñx, ´Ü°ñ

    scanf("%d %d %d",&price, &money, &need);
    //´Ü°ñx

    while(guest<money){
        guest=guest+price;
        coupon1++;
        cnt1++;
        if(coupon1==need){
            cnt1++;
            coupon1=0;
        }
    }

    while(special<money){
        special=special+price;
        coupon2++;
        cnt2++;
        if(coupon2==need){
            cnt2++;
            coupon2=1;
        }

    }
    printf("%d"cnt2-cnt1);

        return 0;
}

