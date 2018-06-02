#include <iostream>

using namespace std;

#include <math.h>
/* Question        : Compare and compare the ecodes of 'index1' and 'index2' and return -1, 0, or 1
int audience [][2] : Contains the base and exponent.
int index1         : Denotes the row numberin the array 'audience'.
int index2         : Denotes the row numberin the array 'audience' */
int comparator(int audience[][2],int index1, int index2) {
    //Write your solution code below this line
    int ecode1, ecode2, retorno, i;
    ecode1 = 1;
    for(i= 0; i < audience[index1][1]; i++)
    {
        ecode1 = ecode1*audience[index1][0];
        ecode1 = ecode1%100;
    }

    ecode2 = 1;
    for(i= 0; i < audience[index2][1]; i++)
    {
        ecode2 = ecode2*audience[index2][0];
        ecode2 = ecode2%100;
    }
    ecode2 = ecode2%100;

    if(ecode1==ecode2)
        retorno = 0;
    else if(ecode1 > ecode2)
        retorno = -1;
    else if(ecode1 < ecode2)
        retorno = 1;

    return retorno;
}


/* Question        : Sort the array as described in the question (previous tab) on edX
int audience [][2] : Contains the base and exponent.
int N              : Denotes Number of rows in the array 'audience'.
int &i_index       : Denotes the row numberin the array 'audience'.
int &j_index       : Denotes the row numberin the array 'audience'. */
void sorting(int audience[][2],int N, int &i_index, int &j_index){
    //Write your solution code below this line
    int i, j, min, aux1, aux2;

    for(i = 0,j=1; i < N,j < (N-1); i++,j++)
    {
        if(comparator(audience,i,j) == -1)
        {
            i_index = i;
            break;
        }
    }

    for(i = N-1,j=N-2; j >= 0; i--,j--)
    {
        if(comparator(audience,i,j) == 1)
        {
            j_index = i;
            break;
        }
    }


    for(i = (i_index + 1); i < (j_index - 1);i++)
    {
        min = i;
        for(j = i+1; j < (j_index);j++)
        {
            if (comparator(audience,min,j) == -1)//se  i > j == -1
                min = j;
        }
        if(min != i)
        {
            aux1 = audience[i][0];
            aux2 = audience[i][1];

            audience[i][0] = audience[min][0];
            audience[i][1] = audience[min][1];

            audience[min][0] = aux1;
            audience[min][1] = aux2;
        }

    }
}


/* Question          : Merge the array as described in the question (previous tab) on edX
int audience[][2]    : The array, now, Partially sorted using the function 'sorting' (called from the main)
int mergedarray[][2] : To contain the final values after merging. This is passed as 'mergedmarks' from the main
int N                : Denotes the number of rows in both the arrays given above.
int i_index          : Row number of the array 'audience' returned by the function 'sorting'
int j_index          : Row number of the array 'audience' returned by the function 'sorting' */
void merge(int audience[][2], int mergedarray[][2],int N, int i_index , int j_index) {

    //Write your solution code below this line
    int i,j,min,aux1,aux2;

    for(i = 0; i < (N-1);i++)
    {
        min = i;
        for(j = i+1; j < (N);j++)
        {
            if(comparator(audience,min,j) == -1)// se aud[j] > aud[i] == 1
                min = j;
        }
              if(min != i)
            {
                aux1 = audience[i][0];
                aux2 = audience[i][1];

                audience[i][0] = audience[min][0];
                audience[i][1] = audience[min][1];

                audience[min][0] = aux1;
                audience[min][1] = aux2;
            }

    }

}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
