#include <stdio.h>
void func(int w)
{
    if (w % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
int main()
{
    int w = 0;
    int check = 1;
    while (check==1)
    {
        do
        {
            printf("Nhap can nang qua dua hau: ");
            scanf("%d", &w);
            if (w <= 0 || w > 100)
            {
                printf("Nhap lai w nguyen duong\n");
            }
            func(w);
        } while (w <= 0 || w > 100);
        printf("\nTiep tuc? Co(1) Khong(0):");
        scanf("%d", &check);
    }
    return 0;
}