//menu template 2
#include <stdio.h>


int main(void){
char Command[] = "cls";
for(;;){
        int Option1, ScanOption;
    printf("TEMPLATE TITTLE\nOPTION(1)\nOPTION(2)\Clear(3)\n-->");
    ScanOption = scanf("%d", &Option1);
    if (ScanOption == 0||Option1 <= 0|| Option1 >= 4){
        exit(0);
    }
    switch(Option1){
case 1:
    for(;;){
    printf("TEMPLATE TITTLE\nOPTION(1)\nOPTION(2)\nClear(3)\nBack(4)\n-->");
    int Option11, ScanOption11;
    ScanOption11 = scanf("%d", &Option11);
    if (ScanOption11 == 0||Option11 <= 0|| Option11 >= 5){
        exit(0);
    }
    switch(Option11){
case 1:
    break;
case 2:
    break;
case 3:
    system(Command);
    break;
case 4:
    goto Reset;
    break;
    }
    }
    break;
case 2:
    for(;;){
    printf("TEMPLATE TITTLE\nOPTION(1)\nOPTION(2)\Clear(3)\nBack(4)\n-->");
    int Option21, ScanOption21;
    ScanOption21 = scanf("%d", &Option21);
    if (ScanOption21 == 0||Option21 <= 0|| Option21 >= 5){
        exit(0);
    }
    switch(Option21){
case 1:
    break;
case 2:
    break;
case 3:
    system(Command);
    break;
case 4:
    goto Reset;
    break;
    }
    }
    break;
case 3:
    system(Command);
    break;
    }
Reset:
    system(Command);
}


return 0;
}
