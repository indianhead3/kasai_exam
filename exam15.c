/*
 * -----------------------------------------------
 *      연립방정식의 해법 (가우스 - 조던법)      *
 * -----------------------------------------------
 */

#include <stdio.h>

#define N 3     /* 원의 수 */

int main(void)
{                                   /* 계수행렬 */
    static double a[N][N+1]={{2.0  ,3.0  ,1.0  ,4.0  },
                             {4.0  ,1.0  ,-3.0 ,-2.0 },
                             {-1.0 ,2.0  ,2.0  ,2.0  }};
    double p,d;
    int i,j,k;

    for (k=0;k<N;k++) {
        p=a[k][k];                /* 피벗 계수 */
        for (j=k;j<N+1;j++)       /* 피벗행을 p로 나눈다. */
            a[k][j]=a[k][j]/p;
        for (i=0;i<N;i++) {        /* 피벗열 소거 */
            if (i!=k){ 
                d=a[i][k];
                for (j=k;j<N+1;j++)                      /* ① */
                    a[i][j]=a[i][j]-d*a[k][j];
            }       
        }       
    }

    for (k=0;k<N;k++)
        printf("x%d=%f\n",k+1,a[k][N]);

	return 0;
}

