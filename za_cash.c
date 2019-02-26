#include<stdio.h>
#include<cs50.h>

int main(void)
{
   int g=500;
   int h=250;
   int j=200;
   int k=100;
   int l=50;
   int n=25;
   int m=10;
   int o=5;
   int p=1;
    int  money;
   money = get_int("type money:");

   int i=0;
   while(money>=g)
   {
    money=money-g;
    i++;
   }
   while(money>=h)
   {
    money=money-h;
    i++;
   }
    while(money>=j)
   {
    money=money-j;
    i++;
   }
    while(money>=k)
   {
    money=money-k;
    i++;
   }
    while(money>=l)
   {
    money=money-l;
    i++;
   }
     while(money>=m)
   {
    money=money-m;
    i++;
    }
      while(money>=n)
   {
    money=money-n;
    i++;
    }
      while(money>=o)
   {
    money=money-o;
    i++;
    }
      while(money>=p)
   {
    money=money-p;
    i++;
    }
    printf("%i\n",i);
}