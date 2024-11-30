#include <stdio.h>
void gameps1();
void gameps2();
int main() {
    char startgame;
    printf("Do you want to play the coordinate game [Yes = Y, No = N]: ");
    scanf("%c", &startgame);
    if (startgame == 'Y'){
        gameps1();
        int x, y;
        printf("What is the x coordinate of = : ");
        scanf("%d", &x);
        printf("What is the y coordinate of = : ");
        scanf("%d", &y);
        if (x == 7 && y == 4){
            printf("Yes, You are Right :)\n");
            gameps2();
            int x, y;
            printf("Please enter the x coordinate of ~ : ");
            scanf("%d", &x);
            printf("Please enter the y coordinate of ~ : ");
            scanf("%d", &y);
            if ( x == 3 && y == 3){
                printf("Yes, You are Right :)\n");
            }
            else{
                for (int i = 0; i<= 1000; i++){
                    printf("No, You are Wrong!\n");
                    gameps2();
                    int x, y;
                    printf("Please enter the x coordinate of ~ : ");
                    scanf("%d", &x);
                    printf("Please enter the y coordinate of ~ : ");
                    scanf("%d", &y);
                    if (x == 3 && y == 3){
                        printf("Yes, You are Right :)");
                        break;
                    }
                }
            }
        }
        else {
            for(int i = 0; i<= 10000; i++){
                printf("No, You are Wrong!\n");
                gameps1();
                int x, y;
                printf("What is the x coordinate of = : ");
                scanf("%d", &x);
                printf("What is the y coordinate of = : ");
                scanf("%d", &y);
                if (x == 7 && y == 4){
                    printf("Yes, You are Right :)\n");
                    gameps2();
                    int x, y;
                    printf("Please enter the x coordinate of ~ : ");
                    scanf("%d", &x);
                    printf("Please enter the y coordinate of ~ : ");
                    scanf("%d", &y);
                    if ( x == 3 && y == 3){
                        printf("Yes, You are Right :)");
                    }
                    else{
                        for (int i = 0; i<= 1000; i++){
                            printf("No, You are Wrong!\n");
                            gameps2();
                            int x, y;
                            printf("Please enter the x coordinate of ~ : ");
                            scanf("%d", &x);
                            printf("Please enter the y coordinate of ~ : ");
                            scanf("%d", &y);
                            if (x == 3 && y == 3){
                                printf("Yes, You are Right :)");
                                break;
                            }
                        }
                    }
                    break;
                }
            }
        }
    }
    else if (startgame == 'N') {
        printf("Ok, As your Wish :}");
    }
}
void gameps1() {
    printf("co| 1 2 3 4 5 6 7 8 9|\n ");
    printf("_|__________________|_\n");
    printf("_1|--------~---------|\n");
    printf("_2|------------------|\n");
    printf("_3|-------_----------|\n");
    printf("_4|-------------=----|\n");
    printf("_5|------------------|\n");
    printf("_6|------------------|\n");
    printf("_7|------------------|\n");
    printf("_8|------------------|\n");
    printf("_9|------------------|\n");
    printf("__|__________________|_\n");
    printf("__|                  |\n");
}
void gameps2() {
    printf("co| 1 2 3 4 5 6 7 8 9|\n ");
    printf("_|__________________|_\n");
    printf("_1|===========|-=====|\n");
    printf("_2|==================|\n");
    printf("_3|=====~============|\n");
    printf("_4|=======-==========|\n");
    printf("_5|==================|\n");
    printf("_6|==================|\n");
    printf("_7|========`=========|\n");
    printf("_8|============'=====|\n");
    printf("_9|==================|\n");
    printf("__|__________________|_\n");
    printf("__|                  |\n");
}