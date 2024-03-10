#include <stdio.h>
int *qsort(int *list, int length);
int *_qsort(int *list, int l, int r);

int main()
{
    int start_list[] = {3, 9, 2, 1, 0, 5, 6, 7, 8, 4};

    qsort(start_list, 10);

    // for (int i=0;i<10;i++)
    //     printf("%d\n",start_list[i]);

    return 0;
}

int *qsort(int *list, int length)
{
    return _qsort(list, 0, length);
}

int *_qsort(int *list, int l, int r)
{

    if (r - l < 2)
    {
        return list;
    }

    // ピポット設定
    list[l] = list[l];
    printf("\t%d\n", list[l]);
    // カウンター
    int _l = l, _r = r;

    while (1)
    {

        while (list[l] > list[++_l])
            ;
        while (list[l] < list[--_r])
            ;

        if (_r < _l)
        {
            break;
        }
        else
        {
            int tmp = list[_l];
            list[_l] = list[_r];
            list[_r] = tmp;
        }
    }

    int tmp = list[_r];
    list[_r] = list[l];
    list[l] = tmp;

    _qsort(list, l, _r);
    _qsort(list, _l, r);
    return list;
}
