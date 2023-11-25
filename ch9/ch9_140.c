#include <stdio.h>
#include <stdbool.h>

int next_n(int n)
{
    int nextN = 0;
    while (n != 0)
    {
        int now = n % 10;
        nextN += now * now;
        n = n / 10;
    }
    return nextN;
}

bool contains(int *history, int size, int n)
{
    history[size] = n;
    for(int i = 0; i < size; i++){
        if(history[i] == history[size]){
            return true;
        }
    }
    return false;
}

bool isHappy(int n)
{
    int history[1000];
    int size = 0;
    while (true)
    {
        if (n != 1)
        {
            n = next_n(n);
            bool isrepeat = contains(history, size, n);
            size += 1;
            if (isrepeat == true)
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if (isHappy(n))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}