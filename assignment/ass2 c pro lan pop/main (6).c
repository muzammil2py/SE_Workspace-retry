#include <stdio.h>
int main() {
    int a[5]={1,2,3,4,5}, sum=0;
    int b[3][3], i, j;

    for(i=0;i<5;i++)
        printf("%d ", a[i]);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++) {
            scanf("%d", &b[i][j]);
            sum += b[i][j];
        }

    printf("Sum = %d", sum);
    return 0;
}
