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