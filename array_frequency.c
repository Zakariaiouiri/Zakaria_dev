#include <stdio.h>
#include <stdbool.h>

bool exist(int tab[], int size, int x);
void printtimes(int y, int times);

int main()
{
    int array[] = {1, 3, 4, 1, 2, 1, 1, 2, 7, 2};
    int sub[20];
    int target, times, m = 0;
    int taille = sizeof(array) / sizeof(array[0]);

    for (int j = 0; j < taille; j++)
    {
        if (!exist(sub, m, array[j]))
        {
            target = array[j];
            sub[m] = target;
            m++;
            times = 0;
            for (int k = 0; k < taille; k++)
            {
                if (array[k] == target)
                {
                    times += 1;
                }
            }
            printtimes(target, times);
        }
    }
    return 0;
}

bool exist(int tab[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (tab[i] == x)
        {
            return true;
        }
    }
    return false;
}

void printtimes(int y, int times)
{
    printf("The number %d appears %d times.\n", y, times);
}
