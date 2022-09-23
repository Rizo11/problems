#include <stdio.h>

int main()
{
    float n_drinks = 0;
    scanf("%f", &n_drinks);

    float total_juice = 0;
    for (int i = 0; i < n_drinks; i++)
    {
        float juice = 0;
        scanf("%f", &juice);
        total_juice += juice/(float)n_drinks;
    }
    printf("%0.10f\n", total_juice);
    
}