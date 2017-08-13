/*-------------------------------------------------------
 * Actividad de Programación Avanzada: kata 7 - the lonely integer
 * Fecha: 09-11-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */
#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );    
}

int main(){
    int n, i; 
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    qsort (a, n, sizeof(int), compare);
    for(i = 0; i < n; i += 2)
    {
        if(a[i] != a[i+1])
        {
            printf("%d", a[i]);
            break;
        }
    }
    return 0;
}