#include <stdio.h>

int main(){
	int cpfarrey[11],res1,res2,dig1,dig2;
	unsigned long long int cpf;

	printf("Digite o numero de seu CPF sem caracteres especiais.\n");
	scanf("%llu", &cpf);
	
	for(int j=10; j>=0; j--){
		cpfarrey[j] = cpf % 10;
		cpf /= 10;
	}
	
	res1=(((cpfarrey[0]*10)+(cpfarrey[1]*9)+(cpfarrey[2]*8)+(cpfarrey[3]*7)+(cpfarrey[4]*6)+(cpfarrey[5]*5)+(cpfarrey[6]*4)+(cpfarrey[7]*3)+(cpfarrey[8]*2))%11);
	if (res1<2){
		dig1=0;
	} else{
		dig1=11-res1;
	}
		
	res2=(((cpfarrey[0]*11)+(cpfarrey[1]*10)+(cpfarrey[2]*9)+(cpfarrey[3]*8)+(cpfarrey[4]*7)+(cpfarrey[5]*6)+(cpfarrey[6]*5)+(cpfarrey[7]*4)+(cpfarrey[8]*3)+(dig1*2))%11);
		
	if (res2<2){
		dig2=0;
	} else{
		dig2=11-res2;
	}
		
	if(dig1==cpfarrey[9] && dig2==cpfarrey[10]){
		printf("CPF verdadeiro");
	} else{
		printf("CPF falso");
	}
		
	return 0;
}
