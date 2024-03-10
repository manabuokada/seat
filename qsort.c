#include <stdio.h>

int main(){
    int start_list[]={0,1,2,3,4,5,6,7,8,9};

    qsort(start_list,10);


    return 0 ;
}


int* qsort(int* list,int length){
    return _qsort(list,0,length);
}


int* _qsort(int* list , int l , int r){

    if ( l-r < 2 )
    {
        return list;
        /* code */
    }
    
    //ピポット設定
    list[0]=list[0];
    //カウンター
    int _l=l , _r=r; 

    while ( 1 )
    {
        while (  list[0] < list[++_l] )
        {
            break;
        }

        while (  list[0] > list[--_r] )
        {
            break;
        }
        
        if ( _r <= _l )
        {
            break;
        } else
        {
            int tmp = list[_l];
            list[_l] = list[_r];
            list[_r] = tmp;
        }
    }
    //
        int tmp = list[_r];
        list[_r] = list[0];
        list[0] = tmp;
        _qsort(list,0,_r);
        _qsort(list,_l,r);
        return list;

}
