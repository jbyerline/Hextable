/*-------------------------------------------------------------------
 *    hextable.c    -    assignment 0
 *    xack 03 / hack25
 -------------------------------------------------------------------*/

#include <stdio.h>

int table(int dec)
{
    
    int row,col;
    
    for (row = 1; row < 17; ++row )
    {
        for(col = 1; col < 17; ++col)
        {
            if(dec){
                printf("%03x ", row * col);
            }
            else{
                printf("%03d ", row * col);
            }
        }
        printf("\n");
    }
    return 0;
}

int main(){
    printf("Dec:\n");
    table(0);
    putchar('\n');
    printf("Hex:\n");
    table(1);
    return 0;
}



/*int main() {

    int row,col;
    
    printf("Hex:\n");
    
    for (row = 1; row < 17; ++row )
        {
            for(col = 1; col < 17; ++col)
                {
                    printf("%03x ", row * col);
                    
                }
            printf("\n");
        }
    
    printf("\n");
    printf("Dec:\n");
    
    for (row = 1; row < 17; ++row )
    {
        for(col = 1; col < 17; ++col)
        {
            printf("%03d ", row * col);
            
        }
        printf("\n");
    }
    return 0;
 }*/
