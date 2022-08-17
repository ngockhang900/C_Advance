#include <stdio.h>

void nhapMang( int a[], int n)
{
    for(int i= 0 ; i < n; i++)
    {
        printf("Phan tu thu [%d] = ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\n");
}

void xuatMang( int a[], int n)
{
    for(int i= 0 ; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int isEqual(int a1[], int a2[], int m, int n)
{
    int a;
    if(m >= n) a = m;
    else a = n;

    int flat = 1;
    for( int i  = 0; i < a; i++)
    {
        if((sizeof(a1) == sizeof(a2)) && (a1[i] == a2[i]))
        {
            flat = 1;
        }
        else
        {
            flat = 0;
            break;
        }
    }

    if(flat == 1) return 1;
    else return 0;
}


int main()
{
    int n;
    printf("Nhap so luong phan tu mang 1: ");
    scanf("%d", &n);

    int m;
    printf("Nhap so luong phan tu mang 2: ");
    scanf("%d", &m);

    int a1[n];
    int a2[m];

    nhapMang(a1, n);
    nhapMang(a2, m);


    printf("%d",isEqual(a1, a2, n,m));

}
