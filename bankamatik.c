#include <stdio.h>

int main()
{
    char name[20];
    int secim;
    int kur;
    int cekilen;
    int toplamPara = 1000;
    int dolarBazli = toplamPara/20;
    int euroBazli = toplamPara/25;
    int yatirilan;
    int yinelemeSecim;
    int guncelPara;
    int tlGuncelPara;

    printf("Bankamatiğimize hoşgeldiniz.\n");
    printf("Lütfen isminizi giriniz: ");
    scanf("%s", name);

    printf("Sayın %s, bakiyeniz %d₺.\nPara çekmek için 1, para yatırmak için 2 tuşuna tıklayınız.",name, toplamPara);
    scanf(" %d", &secim);






    if(secim==1) {
        printf("Çekmek istediğiniz kur türünü seçiniz: \n");
        printf("1-₺TL\n2-$Dolar(20)\n3-€Euro(25)");
        scanf("%d", &kur);


        if(kur == 1){
            printf("Çekmek istediğiniz tutar: ");
            scanf("%d", &cekilen);
            if(cekilen > toplamPara) {
                printf("İstediğiniz kadar paranız hesabınızda bulunmamaktadır.");
            } else {
                printf("Çektiğiniz Tutar: %d₺\n",cekilen);
                int guncelPara = toplamPara-cekilen;
                printf("Kalan Tutarınız: %d₺", tlGuncelPara= guncelPara*1);
            }

        } else if(kur==2){
            printf("Dolar kurundan paranız: %d$\n", dolarBazli);
            printf("Çekmek istediğiniz tutar: ");
            scanf("%d", &cekilen);
            if(cekilen>dolarBazli) {
                printf("İstediğiniz kadar paranız hesabınızda bulunmamaktadır.");
            } else {
                printf("Çektiğiniz Tutar: %d$\n",cekilen);
                int guncelPara = dolarBazli-cekilen;
                printf("Kalan Tutarınız: %d₺", tlGuncelPara=guncelPara*20);
            }

        } else if (kur==3){
            printf("Euro kurundan paranız: %d€\n", euroBazli);
            printf("Çekmek istediğiniz tutar: ");
            scanf("%d", &cekilen);
            if(cekilen>euroBazli) {
                printf("İstediğiniz kadar paranız hesabınızda bulunmamaktadır.");
            } else {
                printf("Çektiğiniz tutar: %d€\n",cekilen);
                int guncelPara = euroBazli-cekilen;
                printf("Kalan Tutarınız: %d₺", tlGuncelPara=guncelPara*25);
            }

        } else {
            printf("Geçersiz tuşlama.");
        }
            










    } else if(secim==2) {
        printf("Yatırmak istediğiniz kur türünü seçiniz: \n");
        printf("1-₺TL\n2-$Dolar(20)\n3-€Euro(25)");
        scanf("%d", &kur);
        if (kur==1) {
            printf("Yatırmak istediğiniz tutar: ");
            scanf("%d", &yatirilan);
            printf("Yatırdığınız tutar: %d₺", yatirilan);
            printf("\nToplam Tutarınız: %d₺", tlGuncelPara= toplamPara+yatirilan);
        } else if (kur==2) {
            printf("Dolar kurundan paranız: %d$\n", dolarBazli);
            printf("Yatırmak istediğiniz tutar: ");
            scanf("%d", &yatirilan);
            printf("Yatırdığınız tutar: %d$", yatirilan);
            printf("\nTL kurundan paranız: %d₺", tlGuncelPara= (dolarBazli+yatirilan)*20);
        } else if (kur==3) {
            printf("Euro kurundan paranız: %d€\n", euroBazli);
            printf("Yatırmak istediğiniz tutar: ");
            scanf("%d", &yatirilan);
            printf("Yatırdığınız tutar: %d€", yatirilan);
            printf("\nTL kurundan paranız: %d₺", tlGuncelPara= (euroBazli+yatirilan)*25);
        } else {
            printf("Geçersiz tuşlama");
        }
    } else {
        printf("Geçersiz tuşlama.");
    }



    printf("\nBaşka işlem yapmak için 7'ye, çıkmak için 8'e basınız.");
    scanf("%d", &yinelemeSecim);
    if(yinelemeSecim==7) {
        printf("Lütfen yeni işlem seçiniz:\nSayın %s, yeni bakiyeniz: %d₺\nPara çekmek için 1, para yatırmak için 2 tuşuna tıklayınız.", name, tlGuncelPara);
    } else if(yinelemeSecim==8) {
        printf("İyi günler dileriz.");
    } else {
        printf("Geçersiz tuşlama.");
    }
}