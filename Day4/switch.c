#include<stdio.h>
int main(){
    // Nested Switch
    printf("Menucard \n");
    printf("Enter 1 for vegefood \n");
    printf("Enter 2 for non-veg food \n");
    printf("Enter 3 for Sandwich \n");
    int num;
    scanf("%d",&num);
     switch(num){
        case 1:{
            printf("Select Veg Items \n");
            printf("Select A for Dal-tadka \n");
            printf("Select B for Paneer-Masala \n");
            printf("Select c for Kaju-masala \n");
            char O,temp;
             scanf("%c",&temp);
            scanf("%c",&O);
            switch(O){
                case 'A':{
                    printf("Dal-Tadka ordered ");
                }
                break;
                case 'B':{
                    printf("Paneer-Masala ordered");
                }
                break;
                case 'C':{
                    printf("kaju-Masala ordered");
                }
                break;
                 default:{
                    printf("invalid input");
                }
            }
        }
        break;
         case 2:{
            printf("Select Non-Veg Items \n");
            printf("Select A for chiken-Tikka-masala \n");
            printf("Select B for Kabaab \n");
            printf("Select c for Chiken-tandoori \n");
            char O,temp;
             scanf("%c",&temp);
            scanf("%c",&O);
            switch(O){
                case 'A':{
                    printf(" chiken-Tikka-masala ordered");
                }
                break;
                case 'B':{
                    printf("Kabaab ordered");
                }
                break;
                case 'C':{
                    printf("Chiken-tandoori ordered");
                }
                break;
                 default:{
                    printf("invalid input");
                }
            }

        }
        break;
         case 3:{
            printf("Select Sandwich \n");
           
            printf("Select A for  Tomato and mozzarella \n");
            printf("Select B for Eggplant and parmesan \n");
            printf("Select c for Cucumber and Swiss cheese \n");
            char O,temp;
             scanf("%c",&temp);
            scanf("%c",&O);
            switch(O){
                case 'A':{
                    printf(" Tomato and mozzarella ordered");
                }
                break;
                case 'B':{
                    printf("Eggplant and parmesan ordered");
                }
                break;
                case 'C':{
                    printf("Cucumber and Swiss cheese ordered");
                }
                break;
                 default:{
                    printf("invalid input");
                }
            }
        }
        break;
        default:{
            printf("Error : invaild Input.");
        }
     }
  

    return 0;
}