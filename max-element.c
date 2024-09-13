// Nzrirga Isaac Nickson S23B23/046
/* PSEUDO CODE
START
    Declare array num[] = {10, 5, 20, 30, 20}
    Calculate length = size of num[] / size of num[0]

    Set max = num[0]

    FOR i = 1 to (length - 1)
        IF num[i] > max THEN
            Set max = num[i]
        END IF
    END FOR

    Print "The maximum element is: " + max

END */


// CODE
#include <stdio.h>

int main() {

int num[] = {10,5,20,30,20};
int length = sizeof(num) / sizeof(num[0]);

int max = num[0];

int i;
for(i = 1; i < length; i++){
    if(num[i] > max) {
        max = num[i];
    }
}

printf("The maximun element is: %d\n", max);

return 0;
}
