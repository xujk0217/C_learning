#include <stdio.h>
int main()
{
    int m;
    int n;
    int temN;
    int is_not_prime = 0;
    int is_inver_not_prime = 0;
    scanf("%d", &m);
    int prime[m];
    int inverseN;
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n);
        is_not_prime = 0;
        if(n==1||n==2){
            printf("%d is prime.\n", n);
            continue;
        }
        for (int j = 2; j < n; j++)
        {
            if (n % j == 0)
            {
                printf("%d is not prime.\n", n);
                is_not_prime = 1;
                break;
            }
        }
        temN = n;
        inverseN = 0;
        is_inver_not_prime = 0;
        if (is_not_prime == 0)
        {
            if(n>10000){
                inverseN +=n/10000;
                n%=10000;
                inverseN +=(n/1000)*10;
                n%=1000;
                inverseN+=(n/100)*100;
                n%=100;
                inverseN+=(n/10)*1000;
                n%=10;
                inverseN+=n*10000;
            }
            else if (n > 1000)
            {
                inverseN += n / 1000;
                n %= 1000;
                inverseN += (n / 100) * 10;
                n %= 100;
                inverseN += (n / 10) * 100;
                n %= 10;
                inverseN += n * 1000;
            }
            else if (n > 100)
            {
                inverseN += (n / 100);
                n %= 100;
                inverseN += (n / 10) * 10;
                n %= 10;
                inverseN += n * 100;
            }
            else if (n > 10)
            {
                inverseN += (n / 10);
                n %= 10;
                inverseN += n * 10;
            }
            else
            {
                inverseN = n;
            }

            //printf(" %d\n", inverseN);

            if (inverseN != temN)
            {
                //printf("%d!=%d\n", n, inverseN);
                for (int j = 2; j < inverseN; j++)
                {
                    if (inverseN % j == 0)
                    {
                        is_inver_not_prime = 1;
                    }
                }
                if (is_inver_not_prime == 1)
                {
                    printf("%d is prime.\n", temN);
                }
                else
                {
                    printf("%d is emirp.\n", temN);
                }
            }
            else
            {
                printf("%d is prime.\n", temN);
            }
        }
    }
}
