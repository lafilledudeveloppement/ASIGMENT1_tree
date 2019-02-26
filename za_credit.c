# include <stdio.h>
# include <cs50.h>

int main(void)
{
    long long i,d, z;
    int s,t,summ;

    do
    {
        i=get_long_long("enter number of credit card : ");

    }
    while (i<0);

    for(d=i, s=0;d>0;d/=100)
    s+= d%10;

    for(z=i/10,t=0;z>0;z/=100)
    {
        if (2*(z%10)>9)
        {
            t+=(2*(z%10))/10;
            t+=(2*(z%10))%10;

        }

        else
        t+=2 *(z%10);

    }

    summ=s+t;
    if (summ%10==0)

    {
        if ((i >=340000000000000 && i<350000000000000) || (i>=370000000000000 && i<380000000000000))
        printf("it is an american express card\n");

        else if  (i>=510000000000000 && i<560000000000000 )

        printf ("it is a mastercard\n");

        else if ((i>=4000000000000 && i<5000000000000) ||(i>=400000000000000 && i<500000000000000))

        printf("it is a visa\n");

        else
        printf("it is not valid\n");
    }
}
