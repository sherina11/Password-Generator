#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#";
    int length;

    printf("Enter password length: ");
    scanf("%d",&length);

    srand(time(0));

    printf("Generated Password: ");

    for(int i=0;i<length;i++){
        int index = rand() % (sizeof(chars)-1);
        printf("%c", chars[index]);
    }

    return 0;
}