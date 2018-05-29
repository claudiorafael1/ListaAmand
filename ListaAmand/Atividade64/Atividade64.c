#include <stdio.h>

#include<math.h>

int main()
{

float n, parteinteira,partedecimal;

scanf("%f",&n);

parteinteira = floor(n);
partedecimal = n - parteinteira;

printf("numero %.3f parte inteira = %.0f parte decimal %.3f ", n, parteinteira, partedecimal );

return 0;
}
