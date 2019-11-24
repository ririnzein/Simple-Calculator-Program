#include <stdio.h>

int main()
{
    //memilih pilihan menu makanan
    int pilihan;
    printf("Menu:\n");
    printf("1. Pical Ayam\n");
    printf ("2. Nasi Goreng\n");
    printf ("3. Bubur Ayam\n");
    printf ("4. Sate Ayam\n");
    prin ("pilihan");
    scanf("%d", &pilihan);

    //akan tampil ilihan user
    switch(pilihan)
    {
        case 1 :
            printf("Saya memilih pical ayam\n");
            break;
        case 2 :
            printf("Saya memilih nasi goreng\n");
            break;
        case 3 :
            printf("Saya memilih buur ayam\n");
            break;
        case 4 :
            printf("Saya memilih sate ayam\n");
            break;
        default :
            printf("pilihan yang saya daftar tidak terdaftar di menu");
            break;

    }

    return 0;
}
