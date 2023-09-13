#include <stdio.h>

void main()
{
    char brands='h';
   printf("----------Welcome to Anitha Enterprises-----\n");
   printf(" which type of Laptop You want \n IT \n Accounts \n Gaming \n");
   char purpose;
   scanf("%c",&purpose);
    switch(purpose)
    {
        case 'I': case 'i':
            printf(" you asked IT Professional Laptop CUrrently available\n");
            printf("which price of laptop you want\n");
            int price;
            scanf("%i",&price);
            if(price<30000)
            {
                printf("you can buy second hand laptop");
            }
            else if(price>30000 && price<=50000)
            {
                 printf("you can buy new laptop");
                 printf("what kind of brand you want? \n HP \n ASUS \n LENOVO \n");       
                printf(" you are choose to %c",brands);
                switch(brands)
                {
                    case 'h':
                    printf("upcoming generation you will buy....");
                    break;
                    default : printf(" not  available");
                }
            }
            else if(price>50000)
            {

            }
            else
            {
                printf(" NOt Available");
            }

        
        break;
        case 'G':

        break;    
    }
}