/*
 * -------------------------
 *     ��Ŭ���� ȣ����     *
 * -------------------------
 */

#include <stdio.h>

int main(void)
{
    int a,b,m,n;

    printf("�� ������ �Է��ϼ���. : ");
    scanf("%d %d",&a,&b);

    m=a; n=b;
    while (m!=n){
        if (m>n)
            m=m-n;
        else
            n=n-m;
    }
    printf("�ִ����� = %d\n",m);

    return 0;
}