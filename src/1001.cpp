#include <math.h>
#include <iostream>
#include <stdio.h> 
#include <string.h> 

int len;
int product[ 126 ] = { 0 };

void multiply( int a[], int n)
{
    int i;
    int carry = 0; 
    for (i = 0 ; i < len ; i++)
    {
        int temp = a[i]*n + carry;
        a[i] = temp % 10 ;
        carry = temp / 10;
    }
    while (carry)
    {
        a[i++] = carry % 10 ;
        carry /= 10 ;
    }
    len = i;
}

int main( int argc, char * argv[])
{
    int n; 
    char s[6]; 
    while ( scanf ( "%s %d" , s, &n) != EOF )
    {
        int position= 0 , i= 0 , num= 0 , j= 0 ;
        for (i= 0 ; i< strlen (s); i++)
        {
            if (s[i] == '.' )
            {
                position = (strlen(s) - 1 - i) * n;
            }
            else 
            {
                num = num*10 + s[i] - 48; 
            }
        }
        
        product [ 0 ]= 1 ;
        len = 1 ;
        for (i = 0 ; i < n; i++)
        {
            multiply ( product , num);
        }
        
        if (len <= position) 
        {
            printf("."); 
            for (i= 0 ; i<position- len ; i++)
            {
                printf("0"); 
            }
           
            j = 0 ;
            
            for (i= len - 1 ; i>=j; i--)
            {
                printf ( "%d" , product [i]);
            }
        }
        else 
        {
            j= 0 ;
            while (product[j]==0 && j<position) 
            {
                j++;
            }
            for (i= len - 1 ; i>=j; i--)
            {
                if (i+1 == position) 
                {
                    printf ( "." );
                }
                printf ( "%d" , product [i]);
            }
        }
        printf ( "\n" );
    }
}