//menu template 2
#include <stdio.h>


int main(void){
char Command[] = "cls";
for(;;){
        int Option1, ScanOption;
    printf("TEMPLATE TITTLE\nOPTION(1)\nOPTION(2)\n-->");
    ScanOption = scanf("%d", &Option1);
    if (ScanOption == 0||Option1 <= 0|| Option1 >= 3){
        exit(0);
    }
    switch(Option1){
case 1:
    system(Command);
    for(;;){
    printf("TEMPLATE TITTLE\nOPTION(1)\nOPTION(2)\nBack(3)\n-->");
    int Option11, ScanOption11;
    ScanOption11 = scanf("%d", &Option11);
    if (ScanOption11 == 0||Option11 <= 0|| Option11 >= 4){
        exit(0);
    }
    switch(Option11){
case 1:
    system(Command);
    //OPTION 1-1 BODY GOES HERE
    break;
case 2:
    system(Command);
    //OPTION 1-2 BODY GOES HERE
    break;
case 3:
    goto Reset;
    break;
    }
    }
    break;
case 2:
    system(Command);
    for(;;){
    printf("TEMPLATE TITTLE\nOPTION(1)\nOPTION(2)\nBack(3)\n-->");
    int Option21, ScanOption21;
    ScanOption21 = scanf("%d", &Option21);
    if (ScanOption21 == 0||Option21 <= 0|| Option21 >= 4){
        exit(0);
    }
    switch(Option21){
case 1:
    system(Command);
    //OPTION 2-1 BODY GOES HERE
    break;
case 2:
    system(Command);
    //OPTION 2-2 BODY GOES HERE
    break;
case 3:
    goto Reset;
    break;
    }
    }
    }
Reset:
    system(Command);
}


return 0;
}
