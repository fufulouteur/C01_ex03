#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod);

int  main(void)
{
  int div;
  int mod;

  ft_div_mod(70, 4, &div, &mod);
  printf("div=%d\nmod=%d\n", div, mod);
  ft_div_mod(71, 4, &div, &mod);
  printf("div=%d\nmod=%d\n", div, mod);
  ft_div_mod(72, 4, &div, &mod);
  printf("div=%d\nmod=%d\n", div, mod);
  ft_div_mod(73, 4, &div, &mod);
  printf("div=%d\nmod=%d\n", div, mod);
  return(0);
}
