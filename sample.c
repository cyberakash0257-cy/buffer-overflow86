#include<stdio.h>

int main() {
     char buffer [10]; // buffer overflow occurs if the entered string exceeds 10 characters.
     printf("Enter the String:");
     scanf("%s",buffer);
     printf ("you entered:%s\n",buffer);
return 0;
}
