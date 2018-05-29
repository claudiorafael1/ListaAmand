main(){

	float r,a1;
	int x,i,vetorzin[x];
	printf("Escreva a quantidade de elementos");
	scanf("%d",&x);

	printf("Escreva o primeiro termo");
	scanf("%f",&a1);
	printf("Escreva a raz�o");
	scanf("%f",&r);

	vetorzin[0] = a1;
	for(i = 1;i<=x;i++){
		vetorzin[i] = a1+r;
		a1 = vetorzin[i];


	}
	for(i = 0;i<x;i++){
		printf("O valor da P.A na posicaoo %d e %d\n",i,vetorzin[i]);
}
}
