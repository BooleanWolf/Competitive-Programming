#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int decimal_to_binary(int n);

int main()
{
  int dec;
  scanf("%d",&dec);
  decimal_to_binary(dec);

  return 0;
}

int decimal_to_binary(int n)
{
    int bin[11];
    int i; 
    
    for( i=0;n>0;i++)
    {
        bin[i]=n%2;
        n=n/2;

    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }

}