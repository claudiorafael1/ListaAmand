int num(int x){
  int i, j , aux ,primo = 0,p;
  printf("ponto aaa\n");
  if (x == 1)
     return 1;
  for (i = 1; i<=x; i++) {
    aux  = 0;
    for (j = 1 ; j <=i; j++) {
        if (i % j == 0)
            aux += 1;
    }
    if (aux == 2)
      primo += i;
  }
  return primo+1; //soma 1 porque 1 é primo e ta entre
}

int main(){
    int g,f;
    printf("Digite um numero :\n");
    scanf("%d",&g);
    f = num(g);
    printf("%d :\n",f);
}
