#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	 //variaveis//
    
   char nome[50];
   char end[50]; 
   float pq,po,ha,ch,re,ce,scm,ag,xbu,xegg,xtudo,sdl,sdab,sdcaja,bauro,pastelfo,pastelca,esfirra,hamburguerfor,enrola,pastelfra; //cerveja,suco de marac�ja,�gua com g�s
   int op,op2,op3,senha,tel,perg,pay;
   pq=3.50;
   po=4.00;
   ha=5.00;
   ch=7.00;             
   re=3.00;
   ce=5.00;                       //valores das pe�as
   scm=3.50;
   ag=2.00;
   xbu=5.50;
   xegg=4.50;
   xtudo=7.50;
   sdl=3.50;
   sdab=4.50;
   sdcaja=3.00;
   bauro=3.50;
   pastelfo=3.00;
   pastelca=2.50;
   hamburguerfor=4.00;
   esfirra=3.50;
   pastelfra=2.50;
   enrola=2.00;
   
   char p[50];
   float num,num2,calculo,c1,c2;  //variaveis para o calculo e para a quantidade de unidades
   
   //cod�go//
   
   printf("\t\t\t\t\t==========Lanchonete kisabor========== \n\n\n");
   
   printf("J� tem conta na kisabor? \n");
   printf("1. sim \n");
   printf("2. n�o \n");
   printf("Digite um n�mero: ");
   scanf("%d", &perg);
   
   if(perg==1){
   
   printf("\t\t\t\t\t\t\tLogin: ");
   scanf("%s", nome);
   printf("\t\t\t\t\t\t\tSenha: ");
   scanf("%d", &senha);
}

  if(perg==2){
	printf("cadastramento. \n\n\n");
	
	printf("Digite Seu Nome: ");
	scanf("%s", nome);
	
	printf("Digite Uma Senha: ");
	scanf("%d", &senha);
	
	printf("Digite Seu Num�ro de Telefone: ");
	scanf("%d", &tel);
	
}
 
 printf("Ol� %s, bem vindo a Lanchonete kisabor, selecione uma categoria: \n\n", nome);
   
   printf("1. Pedir estilo fast-foods \n");
   
   printf("2. Hamburguers \n");
   
   printf("3. Salgados \n");
   
   printf("4. Bebidas \n\n");
   
   printf("Escolha uma categoria: ");
   scanf("%d", &op3);
   
if(op3==1){               //primeiro desvio//
   printf("1. P�o com queijo \n");
   
   printf("2. P�o com ovo \n");
   
   printf("3. Hamburguer \n");
   
   printf("4. Cheeseburger \n");
   
   printf("5. X-bacon \n");
   
   printf("6. X-egg burguer \n");
   
   printf("7. X-tudo da casa \n");
   
   printf("Escolha um hamburguer: ");
   scanf("%d", &op);
   
   //in�cio das op��es de Hamburguers
   
    if(op==1){
   	    op = ("p�o de queijo");
       printf("Qual � a quantidade?:");
       scanf("%f", &num);
       c1=pq*num;
    }
    if(op==2){
   	   op = ("p�o com ovo");
       printf("Quanl � a quantidade?:");
       scanf("%f", &num);
       c1=po*num;                               //condicional dos lanches
    }
    if(op==3){
   	   op = ("hamburguer"); 
       printf("Qual � a quantidade?:");
       scanf("%f", &num);
       c1=ha*num;
    }
    if(op==4){
   	   op = ("cheeseburguer"); 
       printf("Qual � a quantidade?:");
       scanf("%f", &num);
       c1=ch*num;
       
    }
    
    if(op==5){
    	op = ("x-bacon");
    	printf("Qual � a quantidade?: ");
    	scanf("%f", &num);
    	c1=xbu*num;
	}
	
	if(op==6){
		op = ("x-egg burguer");
		printf("Qual � a quantidade?: ");
		scanf("%f", &num);
		c1=xegg*num;
	}
	
	if(op==7){
		op = ("X-tudo da casa");
		printf("Qual a quantidade?: ");
		scanf("%f", &num);
		c1=xtudo*num;
	}
	
	printf("Subtotal: %.2f \n", c1);
	
	printf("Deseja escolher Um Salgado?: ");
	scanf("%s", p);
		//fim das op��es de Hamburguer

       //in�cio das op��es de bebidas
     printf("\t Selecione uma bebida: \n");
   
     printf("\t 1. refrigerante \n");
     
     printf("\t 2. cerveja \n");
     
     printf("\t 3. suco de maracuja \n");
     
     printf("\t 4. �gua com g�s \n");
     
     printf("\t 5. Suco de Abacaxi \n");
     
     printf("\t 6. Suco de Lim�o \n");
     
     printf("\t 7. Suco de Caj� \n");
     
     printf("\t Escolha uma Bebida: ");
     scanf("%d", &op2);
   
   
     if(op2==1){
   	   op2 = ("Refrigerantes"); 
       printf("\t Qual � a quantidade?: ");
       scanf("%f", &num2);
       c2=re*num2;
     }
     if(op2==2){
   	   op2 = ("Cervejas"); 
       printf("\t Qual � a quantidade?: ");
       scanf("%f", &num2);
       c2=ce*num2;
     }                                           //condicional das bebidas
     if(op2==3){
   	   op2 = ("Sucos de marac�ja");
       printf("\t Qual � a quantidade?: ");
       scanf("%f", &num2);
       c2=scm*num2;
     }
     if(op2==4){
   	   op2 = ("�guas com g�s");
       printf("\t Qual � a quantidade?: ");
       scanf("%f", &num2);
       c2=ag*num2;
     }
   
     if(op2==5){
   	   op2 = ("Sucos de Abacaxi");
       printf("\t Qual � a quantidade?: ");
       scanf("%f", &num2);
       c2=sdab*num2;
     }
   
     if(op2==6){
   	   op2 = ("Sucos de Lim�o");
       printf("\t Qual � a quantidade?: ");
       scanf("%f", &num2);
       c2=sdl*num2;
     }
   
     if(op2==7){
   	   op2 = ("Sucos de Caj�");
       printf("qual � a quantidade?: ");
       scanf("%f", &num2);
       c2=sdcaja*num2;
     }
     
     printf("\t subtotal: %.2f \n", c2);
   //fim da op��es de Sucos
   
   
   calculo=c1+c2; //calculo do total do pedido


//detalhes do pedido

printf("Detalhes Do Pedido: \n");

printf("Nome do cliente: %s \n", nome);

printf("%.f", num);
printf(" %s", op);

printf(" com %.f ", num2);
printf("%s", op2);

printf(" O total do pedido ficou: R$ %.2f \n", calculo);

printf("Digite o Endere�o de Entrega: ");
scanf("%s", end);

printf("selecione uma forma de pagamento: \n");

printf("1. D�bito \n");
printf("2. cr�dito \n");
printf("3. Pix \n");
printf("4. dinheiro \n");
scanf("%d", &pay);

if(pay==1){
    printf("cart�o de Debito. \nn");
    
     printf("Digite o Numero do cart�o: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cart�o: 30/04/2025 ");
    
    
    printf("Digite o cod�go cvc: ");
    scanf("%d", &op);
}
if(pay==2){
    printf("cart�o de credito. \n\n");
    
     printf("Digite o Numero do cart�o: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cart�o: 30/04/2025 ");
    
    
    printf("Digite o cod�go cvc: ");
    scanf("%d", &op);
}
if(pay==3){
    printf("�rea pix. \n\n");
    
    printf("CNPJ:9090666171 \n");
    printf("Envie o comprovante para nosso whatsapp: 71985226776. \n"); 
}
if(pay==4){
    printf("dinheiro");
    
    printf("Pronto,avisamos ao motoboy que ser� em dinheiro.");
}
   	
}

if(op3==2){ //segundo desvio//
	  printf("1. P�o com queijo \n");
   
   printf("2. P�o com ovo \n");
   
   printf("3. Hamburguer \n");
   
   printf("4. Cheeseburger \n");
   
   printf("5. X-bacon \n");
   
   printf("6. X-egg burguer \n");
   
   printf("7. X-tudo da casa \n");
   
   printf("Escolha um hamburguer: ");
   scanf("%d", &op);
   
   //in�cio das op��es de Hamburguers
   
    if(op==1){
   	    op = ("p�os de queijo");
       printf("Qual � a quantidade?:");
       scanf("%d", &num);
       c1=pq*num;
    }
    if(op==2){
   	   op = ("p�os com ovo");
       printf("Qual � a quantidade?:");
       scanf("%d", &num);
       c1=po*num;                               //condicional dos lanches
    }
    if(op==3){
   	   op = ("hamburguers"); 
       printf("Qual � a quantidade?:");
       scanf("%d", &num);
       c1=ha*num;
    }
    if(op==4){
   	   op = ("cheeseburguers"); 
       printf("Qual � a quantidade?:");
       scanf("%d", &num);
       c1=ch*num;
       
    }
    
    if(op==5){
    	op = ("x-bacons");
    	printf("Qual � a quantidade?: ");
    	scanf("%d", &num);
    	c1=xbu*num;
	}
	
	if(op==6){
		op = ("x-egg burguers");
		printf("Qual � a quantidade?: ");
		scanf("%d", &num);
		c1=xegg*num;
	}
	
	if(op==7){
		op = ("X-tudos da casa");
		printf("Qual � a quantidade?: ");
		scanf("%d", &num);
		c1=xtudo*num;
	}
	
    printf("Detalhes Do Pedido: \n");

    printf("Nome do cliente: %s \n", nome);
    
    printf("%d %s o total ficou: %d \n",num,op,c1);
    
   printf("Digite o Endere�o de Entrega: ");
   scanf("%s", end);

printf("selecione uma forma de pagamento: \n");

printf("1. D�bito \n");
printf("2. cr�dito \n");
printf("3. Pix \n");
printf("4. dinheiro \n");
scanf("%d", &pay);

if(pay==1){
    printf("cart�o de Debito. \n\n");
	 
    printf("Digite o Numero do cart�o: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cart�o: 30/04/2025 \n");
   
    
    printf("Digite o cod�go cvc: ");
    scanf("%d", &op);
    
}
if(pay==2){
    printf("cart�o de credito. \n\n");
    
    printf("Digite o Numero do cart�o: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cart�o: 30/04/2025 ");
    
    printf("Digite o cod�go cvc: ");
    scanf("%d", &op);
}
if(pay==3){
    printf("Nosso pix. \n\n");
    
    printf("CNPJ:9090666171 \n");
    printf("Envie o comprovante para nosso whatsapp: 71985226776. \n");    
}
if(pay==4){
    printf("dinheiro");
    
    printf("Pronto,avisamos ao motoboy que ser� em dinheiro. \n");
   
}
}

if(op3==3){ //terceiro desvio
	
 printf("Salgados \n \n");
 
 printf("1. Bauru de queijo e presunto \n");
 
 printf("2. Pastel de Forno \n");
 
 printf("3. Pastel de Carne \n");
 
 printf("4. Hamburguer de Forno \n");
 
 printf("5. Esfirra \n");
 
 printf("6. Pastel de Frango \n");
 
 printf("7. Enroladinho de Salsicha \n");	
 scanf("%d", &op);
 
 if(op==1){
  	
  op = ("Bauros de quejo e presunto");	
  printf("Qual � a quantidade: ");
  scanf("%d", &num);
  c1 = num*bauro; 
 }
 
 if(op==2){
 	op = ("Pastel de Forno");
 	printf("Qual � a quantidade?: ");
 	scanf("%d", &num);
 	c1 = num*pastelfo;
 }
 
 if(op==3){
 	op = ("Pastel de Carne");
 	printf("Qual � a quantidade?: ");
 	scanf("%d", &num);
 	c1 = num*pastelca;
 }
 
 if(op==4){
 	op = ("Hamburguer de Forno");
 	printf("Qual � a quantidade?: ");
 	scanf("%d", &num);
 	c1 = num*hamburguerfor;
 }
 if(op==5){
 	op = ("esfirra");
 	printf("Qual � a quantidade?: ");
 	scanf("%d", &num);
 	c1 = num*esfirra;
}

if(op==6){
 	op = ("Pastel de Frango");
 	printf("Qual � a quantidade?: ");
 	scanf("%d", &num);
 	c1 = num*pastelfra;
}

if(op==7){
 	op = ("Enroladinho de Salsicha");
 	printf("Qual � a quantidade?: ");
 	scanf("%d", &num);
 	c1 = num*enrola;
 }
  printf("Detalhes Do Pedido: \n");

    printf("Nome do cliente: %s \n", nome);
    
    printf("%d %s o total ficou: %d \n",num,op,c1);
    
   printf("Digite o Endere�o de Entrega: ");
   scanf("%s", end);

printf("selecione uma forma de pagamento: \n");

printf("1. D�bito \n");
printf("2. cr�dito \n");
printf("3. Pix \n");
printf("4. dinheiro \n");
scanf("%d", &pay);

if(pay==1){
    printf("cart�o de Debito. \n\n");
	 
    printf("Digite o Numero do cart�o: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cart�o: 30/04/2025 \n");
   
    
    printf("Digite o cod�go cvc: ");
    scanf("%d", &op);
    
}
if(pay==2){
    printf("cart�o de credito. \n\n");
    
    printf("Digite o Numero do cart�o: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cart�o: 30/04/2025 ");
    scanf("%d", &num2);
    
    printf("Digite o cod�go cvc: ");
    scanf("%d", &op);
}
if(pay==3){
    printf("Nosso pix. \n\n");
    
    printf("CNPJ:9090666171 \n");
    printf("Envie o comprovante para nosso whatsapp: 71985226776. \n");    
}
if(pay==4){
    printf("dinheiro");
    
   printf("Pronto,avisamos ao motoboy que ser� em dinheiro.");
   
   printf("Precisa de troco?: \n");
   printf("1. Sim \n");
   printf("2. N�o \n");
   scanf("%d", &p);
   
   if(p==1){
   	printf("Qual � o Valor a ser trocado?: ");
   	scanf("%s", p);
   }
   else if(op==2){
   	
   	printf("Ok \n");
   }
    
 }
 
}


 if(op3==4){   //ultimo desvio
 	printf("\t Selecione uma bebida: \n");
   
     printf("\t 1. refrigerante \n");
     
     printf("\t 2. cerveja \n");
     
     printf("\t 3. suco de maracuja \n");
     
     printf("\t 4. �gua com g�s \n");
     
     printf("\t 5. Suco de Abacaxi \n");
     
     printf("\t 6. Suco de Lim�o \n");
     
     printf("\t 7. Suco de Caj� \n");
     
     printf("\t Escolha uma Bebida: ");
     scanf("%d", &op2);
   
   
     if(op2==1){
   	   op2 = ("Refrigerantes"); 
       printf("\t Qual � a quantidade?: ");
       scanf("%d", &num2);
       c2=re*num2;
     }
     if(op2==2){
   	   op2 = ("Cervejas"); 
       printf("\t Qual � a quantidade?: ");
       scanf("%d", &num2);
       c2=ce*num2;
     }                                           //condicional das bebidas
     if(op2==3){
   	   op2 = ("Sucos de marac�ja");
       printf("\t Qual � a quantidade?: ");
       scanf("%d", &num2);
       c2=scm*num2;
     }
     if(op2==4){
   	   op2 = ("�guas com g�s");
       printf("\t Qual � a quantidade?: ");
       scanf("%d", &num2);
       c2=ag*num2;
     }
   
     if(op2==5){
   	   op2 = ("Sucos de Abacaxi");
       printf("\t Quantas unidades?: ");
       scanf("%d", &num2);
       c2=sdab*num2;
     }
   
     if(op2==6){
   	   op2 = ("Sucos de Lim�o");
       printf("\t Quantas unidades?: ");
       scanf("%d", &num2);
       c2=sdl*num2;
     }
   
     if(op2==7){
   	   op2 = ("Sucos de Caj�");
       printf("quantas unidades?: ");
       scanf("%d", &num2);
       c2=sdcaja*num2;
     }
   //fim da op��es de Sucos
   
    printf("Detalhes Do Pedido: \n");

    printf("Nome do cliente: %s \n", nome);
    
    printf("%d %s o total ficou: %d \n",num,op,c1);
    
   printf("Digite o Endere�o de Entrega: ");
   scanf("%s", end);

printf("selecione uma forma de pagamento: \n");

printf("1. D�bito \n");
printf("2. cr�dito \n");
printf("3. Pix \n");
printf("4. dinheiro \n");
scanf("%d", &pay);

if(pay==1){
    printf("cart�o de Debito. \n\n");
	 
    printf("Digite o Numero do cart�o: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cart�o: 30/04/2025 \n");
   
    
    printf("Digite o cod�go cvc: ");
    scanf("%d", &op);
    
}
if(pay==2){
    printf("cart�o de credito. \n\n");
    
    printf("Digite o Numero do cart�o: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cart�o: 30/04/2025 ");
    scanf("%d", &num2);
    
    printf("Digite o cod�go cvc: ");
    scanf("%d", &op);
}
if(pay==3){
    printf("Nosso pix. \n\n");
    
    printf("CNPJ:9090666171 \n");
    printf("Envie o comprovante para nosso whatsapp: 71985226776.");    
}
if(pay==4){
    printf("dinheiro");
    
   printf("Pronto,avisamos ao motoboy que ser� em dinheiro.");
 }

}

printf("pagamento em an�lise.");

return 0;

}
