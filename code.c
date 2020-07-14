#include <stdio.h>
#include<math.h>

int main()
{
    int N=26,i,j;
    float a,Hmax,E,R,HS,I;

//Array ,alphabet[] contains the probabilities corresponding to alphabets a-z resp.
   float alphabet[]={0.086,0.014,0.0278,0.0425,0.127,0.0228,0.020,0.0609,0.069,0.00153,0.0129,0.040,0.024,0.06749,0.07507,0.01929,0.0095,0.05987,0.06327,0.0936,0.0278,0.0978,0.02560,0.00150,0.01994,0.00077};

 Hmax=log2(N);
 printf("\nHmax= %f bits/symbol\n",Hmax);

for(i=0;i<N;i++)
{
    I=log2(1/alphabet[i]);
    printf("\nSelf-information of a symbol= %f ",I);
    HS=alphabet[i]*I;
    printf("\nHS= %f bits/symbol",HS);//Sorce Entropy


    E=HS/Hmax;
    printf("\nSoure_Efficiency= %f ",E);

    R=100-E;
    printf("\nRedundancy= %f ",R);
    printf("\n");
}

}
