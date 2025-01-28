//write a program to check whether a person has made profit or not.
#include<stdio.h>
int main()
{
    float actualPrice,sellingPrice,profit,lossAmount;
    printf("\n Enter price");
    scanf("\n %f", &actualPrice);
    printf("\n Enter sellingPrice");
    scanf("\n %f",&sellingPrice);

    if (sellingPrice<actualPrice)
    {
        printf("\nPerson has made loss");
        lossAmount=actualPrice-sellingPrice;
        printf("\n The seller has made incurred loss:%f",lossAmount);
    }
    else if (sellingPrice>actualPrice)
    {
        printf("\n Person has made profit");
        profit=sellingPrice-actualPrice;
        printf("\n The seller has made profit:%f",profit);
    }
    else if(sellingPrice==actualPrice)
    {

        printf("\n The person has neither made profit nor loss");

    }
    return 0;

}
