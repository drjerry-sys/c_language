// #include <stdio.h>
// int main(){
//     printf("hello world!\n");
//     printf("hello world!");
//     return 0;
// };

#include <stdio.h>
// the compiler runs the main function first
int main()
{
    int fahr, celcius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper) {
        celcius = 5 * (fahr-32)/9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;
    }
    printf("3");
    return 0;
}
