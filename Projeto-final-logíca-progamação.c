
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define cor_programa "color 30"
#define limpa_tela "cls"
//Projeto Final De Lógica de Programação

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	system(cor_programa);
	 //variaveis//
    
   char nome[50];
   char end[50]; 
   char email[50];
   float pq,po,ha,ch,re,ce,scm,ag,xbu,xegg,xtudo,sdl,sdab,sdcaja,bauro,pastelfo,pastelca,esfirra,hamburguerfor,enrola,pastelfra; 
   int op,op2,op3,escolha,senha,tel,perg,pay,p,eschamburguer,opbebidas;
   pq=2.50;
   po=3.00;
   ha=4.50;
   ch=5.00;             
   re=3.00;
   ce=5.00;                       //valores das peças
   scm=4.00;
   ag=2.00;
   xbu=5.50;
   xegg=4.50;
   xtudo=7.50;
   sdl=3.50;
   sdab=6.00; 
   sdcaja=7.50;
   bauro=3.50;
   pastelfo=3.00;
   pastelca=2.50;
   hamburguerfor=4.00;
   esfirra=3.50;
   pastelfra=2.50;
   enrola=2.00;
   float num,num2,num3,calculo,c1,c2,c3;  //variaveis para o calculo e para a quantidade de unidades
   
   //codígo//
   
   printf("\t\t\t\t\t==========Lanchonete kisabor========== \n\n\n");
   
   printf("Já tem conta na kisabor? \n");
   printf("1. sim \n");
   printf("2. não \n");    
   printf("Digite um número: ");    //perguntando se o usuario tem conta no aplicativo
   scanf("%d", &perg);
   
   if(perg==1){   //coletando informações de login
   printf("\t\t\t\t\t\t\tKisabor\n\n");
   printf("\t\t\t\t\t\t\tUsuario: ");
   scanf("%s", nome);
   printf("\n");
   printf("\t\t\t\t\t\t\tSenha: ");
   scanf("%d", &senha);
   system(limpa_tela);
}

  if(perg==2){ //coletando informações de cadastramento
	printf("\t\t\t\t\t\t\tcadastramento. \n\n\n");
	
	printf("\t\t\t\t\t\t\tDigite Seu Nome Completo: ");
	scanf("%s", nome);
	printf("\n");
	printf("\t\t\t\t\t\t\tDigite Seu melhor Email: ");
	scanf("%s", email);
	printf("\n");
	printf("\t\t\t\t\t\t\tCrie uma Senha: ");
	scanf("%d", &senha);
	printf("\n");
	printf("\t\t\t\t\t\t\tDigite Seu Numéro de Telefone: ");
	scanf("%d", &tel);
	sleep(2);
	printf("\n");
	printf("\t\t\t\t\t\t\tDigite O Código enviado por sms para seu Número: ");
	scanf("%d", &tel);
	printf("\n");
	printf("\t\t\t\t\t\t\tConta criada com sucesso!");
	sleep(3);
	system(limpa_tela);
}
 //iniciando seleção de categoria
 
 printf("Olá %s, bem vindo a Lanchonete kisabor, selecione uma categoria: \n\n", nome);
   
   printf("1. Pedir estilo fast-foods \n");
   
   printf("2. Nossas Lojas \n");
   
   printf("3. Nossas Redes socias \n");
   
   printf("4. Politíca de privacidade \n\n");
   
   printf("Escolha uma categoria: ");
   scanf("%d", &escolha);
   
switch(escolha){
               
case 1://primeiro desvio 

printf("Deseja escolher um hamburguer?\n");
printf("1. Sim\n\n");
printf("2. Não\n\n");
printf("Escolha uma Opção: ");   //perguntando se o usuario deseja escolher um hamburguer
scanf("%d", &eschamburguer); 
printf("\n");
printf("Carregando.....");
sleep(3);
system(limpa_tela); //limpando a tela

switch(eschamburguer){ 

 //caso a pessoa escolha sim
 case 1:
	printf("=================================\n");

   printf("Hamburguers\n\n");
   
   printf("1. Pão com queijo: 2,50 \n\n");
   
   printf("2. Pão com ovo: 3,00 \n\n");
   
   printf("3. Hamburguer: 5,00 \n\n");
   
   printf("4. Cheeseburger: 3,00 \n\n");
   
   printf("5. X-bacon: 5,50  \n\n");
   
   printf("6. X-egg burguer: 4,50 \n\n");
   
   printf("7. X-tudo da casa: 7,50 \n");
    printf("===============================\n");
    printf("\n");
   printf("Escolha uma opção: "); //escolher um Hamburguer
   scanf("%d", &op);
  
   
    if(op==1){
   	    op = ("pão de queijo");
       printf("Qual é a quantidade?:");
       scanf("%f", &num);
       c1=pq*num;
    }
    if(op==2){
   	   op = ("pão com ovo");
       printf("Quanl é a quantidade?:");
       scanf("%f", &num);
       c1=po*num;                               //condicional dos lanches
    }
    if(op==3){
   	   op = ("hamburguer"); 
       printf("Qual é a quantidade?:");
       scanf("%f", &num);
       c1=ha*num;
    }
    if(op==4){
   	   op = ("cheeseburguer"); 
       printf("Qual é a quantidade?:");
       scanf("%f", &num);
       c1=ch*num;
       
    }
    
    if(op==5){
    	op = ("x-bacon");
    	printf("Qual é a quantidade?: ");
    	scanf("%f", &num);
    	c1=xbu*num;
	}
	
	if(op==6){
		op = ("x-egg burguer");
		printf("Qual é a quantidade?: ");
		scanf("%f", &num);
		c1=xegg*num;
	}
	
	if(op==7){
		op = ("X-tudo da casa");
		printf("Qual a quantidade?: ");
		scanf("%f", &num);
		c1=xtudo*num;
	}
	system(limpa_tela);
	printf("Detalhes: %.f %s, Subtotal: %.2f \n\n", num,op,c1);
	break;
	
	case 2:   //caso o usuario escolha não
		
		printf("Deseja escolher Um Salgado?:\n "); 
	printf("1. Sim\n\n");
	printf("2. Não\n\n");
	printf("Escolha uma opção: ");
	scanf("%d", &p);
	printf("\n");
	printf("Carregando....");
	sleep(3);
	system(limpa_tela);
	
	if(p==1){
		
printf("==============================\n");
		printf("Salgados \n \n");
 
 printf("1. Bauru de queijo e presunto: 3,50 \n\n");
 
 printf("2. Pastel de Forno: 3,00 \n\n");
 
 printf("3. Pastel de Carne: 2,50 \n\n");
 
 printf("4. Hamburguer de Forno: 4,00 \n\n");
 
 printf("5. Esfirra: 3,50  \n\n");
 
 printf("6. Pastel de Frango: 2,50 \n\n");
 
 printf("7. Enroladinho de Salsicha: 2,00 \n\n");
printf("==============================\n");
 printf("Selecione uma opção: ");	
 scanf("%d", &op2);
 printf("\n");
 
 if(op2==1){
  	
  op2 = ("Bauros de quejo e presunto");	
  printf("Qual é a quantidade: ");
  scanf("%f", &num2);
  c2 = num2*bauro; 
  	c2=c1+c2;
 }
 
 if(op2==2){
 	op2 = ("Pastel de Forno");
 	printf("Qual é a quantidade?: ");
 	scanf("%f", &num2);
 	c2 = num2*pastelfo;
 		c2=c1+c2;
 }
 
 if(op2==3){
 	op2 = ("Pastel de Carne");
 	printf("Qual é a quantidade?: ");
 	scanf("%f", &num2);
 	c2 = num2*pastelca;
 		c2=c1+c2;
 }
 
 if(op2==4){
 	op2 = ("Hamburguer de Forno");
 	printf("Qual é a quantidade?: ");
 	scanf("%f", &num2);
 	c2 = num2*hamburguerfor;
 		c2=c1+c2;
 }
 if(op2==5){
 	op2 = ("esfirra");
 	printf("Qual é a quantidade?: ");
 	scanf("%f", &num2);
 	c2 = num2*esfirra;
 		c2=c1+c2;
}

if(op2==6){
 	op2 = ("Pastel de Frango");
 	printf("Qual é a quantidade?: ");
 	scanf("%f", &num2);
 	c2 = num2*pastelfra;
 		c2=c1+c2;
}

if(op2==7){
 	op2 = ("Enroladinho de Salsicha");
 	printf("Qual é a quantidade?: ");
 	scanf("%f", &num2);
 	c2 = num2*enrola;
 	c2=c2+c1;
 }
 system(limpa_tela);
 printf("Detalhes: %.f %s, Subtotal até agora: %.2f\n", num2,op2,c2);
}
	
	
	printf("Deseja escolher uma bebida?\n\n");
	printf("1. Sim\n\n");
	printf("2. Não\n\n");
	printf("Escolha uma opção: ");
	scanf("%d", &opbebidas);
	printf("\n");
	printf("Carregando....");
	sleep(2);
	system(limpa_tela);
	
	if(opbebidas==1){
		
	 //início das opções de bebidas
     printf("==============================\n");
     printf("Selecione uma bebida: \n\n");
   
     printf("1. refrigerante 500 ML: 3,00  \n\n");
     
     printf("2. cerveja 500 ML: 5,00 \n\n");
     
     printf("3. suco de maracuja 700 ML: 4,00 \n\n");
     
     printf("4. Água com gás 500 ML: 2,50 \n\n");
     
     printf("5. Suco de Abacaxi 700 ML: 6,00 \n\n");
     
     printf("6. Suco de Limão 500 ML: 3,50  \n\n");
     
     printf("7. Suco de Cajá 1,5L: 7,50 \n\n");
     printf("==============================\n");
     printf("Escolha uma opção: ");
     scanf("%d", &op3);
     printf("\n");
   
     if(op3==1){
   	   op3 = ("Refrigerantes"); 
       printf("\t Qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=re*num3;
     }
     if(op3==2){
   	   op3 = ("Cervejas"); 
       printf("\t Qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=ce*num3;
     }                                           //condicional das bebidas
     if(op3==3){
   	   op3 = ("Sucos de maracúja");
       printf("\t Qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=scm*num3;
     }
     if(op3==4){
   	   op3 = ("Águas com gás");
       printf("\t Qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=ag*num3;
     }
   
     if(op3==5){
   	   op3 = ("Sucos de Abacaxi");
       printf("\t Qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=sdab*num3;
     }
   
     if(op3==6){
   	   op3 = ("Sucos de Limão");
       printf("\t Qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=sdl*num3;
     }
   
     if(op3==7){
   	   op3 = ("Sucos de Cajá");
       printf("qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=sdcaja*num3;
     }
      
      
     system(limpa_tela);	
		
	calculo=c2+c3;
		
printf("Detalhes Do Pedido: \n\n");

printf("Nome do cliente: %s \n\n", nome);

printf("%.f %s", num2,op2);
printf("\n\n");

printf("%.f %s ", num3,op3);
printf("\n\n");

printf(" O total do pedido ficou: R$ %.2f \n\n", calculo);

printf("Digite o Endereço de Entrega: ");
scanf("%s", end);

system(limpa_tela);

printf("%s", end);
printf("\n");

printf("forma de pagamento: \n\n");

printf("1. Débito \n\n");
printf("2. crédito \n\n");
printf("3. Pix \n\n");
printf("4. dinheiro \n\n");
printf("Escolha Uma Opção: ");
scanf("%d", &pay);

if(pay==1){
    printf("cartão de Débito. \n\n");
    
     printf("Digite o Número do cartão: ");
     scanf("%d", &num);
    
    printf("Digite a data de validade do cartão: 30/04/2025 \n");
    
    printf("Digite o codígo cvc: ");
    scanf("%d", &op);
    printf("pagamento em ánalise! assim que o pagamento for confirmado mandaremos um comprovante de pagamento no seu whatsapp.");
}
if(pay==2){
    printf("cartão de credito. \n\n");
    
     printf("Digite o Numero do cartão: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cartão: 30/04/2025 ");
    
    
    printf("Digite o codígo cvc: ");
    scanf("%d", &op);
    printf("pagamento em ánalise! assim que o pagamento for confirmado mandaremos um comprovante de pagamento no seu whatsapp.");
}
if(pay==3){
    printf("Área pix. \n\n");
    
    printf("CNPJ:9090666171 \n");
    printf("Envie o comprovante para nosso whatsapp: 71985226776. \n"); 
}
if(pay==4){
    printf("dinheiro \n");
    
    printf("Pronto,avisamos ao motoboy que será em dinheiro.");
    
    printf("Precisa de troco?: \n");
   printf("1. Sim \n");
   printf("2. Não \n");
   scanf("%d", &p);
   
   if(p==1){
   	printf("Qual é o Valor a ser trocado?: ");
   	scanf("%s", p);
   	printf("pedido confirmado com sucesso, obrigado pela prêferencia");
   }
   else if(op==2){
   	
   	printf("Ok \n");
   	printf("pedido confirmado com sucesso, obrigado pela prêferencia");
   }
}
	break;
}

} //fim do switch de hamburguer


//caso o usuario esolha sim, após ele pedir o hamburguer, ele ira pra essa opção:

	printf("Deseja escolher Um Salgado?:\n "); 
	printf("1. Sim\n\n");
	printf("2. Não\n\n");
	printf("Escolha uma opção: ");
	scanf("%d", &p);
	printf("\n");
	printf("Carregando....");
	sleep(3);
	system(limpa_tela);
	
	if(p==1){
		
printf("==============================\n");
		printf("Salgados \n \n");
 
 printf("1. Bauru de queijo e presunto: 3,50 \n\n");
 
 printf("2. Pastel de Forno: 3,00 \n\n");
 
 printf("3. Pastel de Carne: 2,50 \n\n");
 
 printf("4. Hamburguer de Forno: 4,00 \n\n");
 
 printf("5. Esfirra: 3,50  \n\n");
 
 printf("6. Pastel de Frango: 2,50 \n\n");
 
 printf("7. Enroladinho de Salsicha: 2,00 \n\n");
printf("==============================\n");
 printf("Selecione uma opção: ");	
 scanf("%d", &op2);
 printf("\n");
 
 if(op2==1){
  	
  op2 = ("Bauros de quejo e presunto");	
  printf("Qual é a quantidade: ");
  scanf("%f", &num2);
  c2 = num2*bauro; 
  	c2=c1+c2;
 }
 
 if(op2==2){
 	op2 = ("Pastel de Forno");
 	printf("Qual é a quantidade?: ");
 	scanf("%f", &num2);
 	c2 = num2*pastelfo;
 		c2=c1+c2;
 }
 
 if(op2==3){
 	op2 = ("Pastel de Carne");
 	printf("Qual é a quantidade?: ");
 	scanf("%f", &num2);
 	c2 = num2*pastelca;
 		c2=c1+c2;
 }
 
 if(op2==4){
 	op2 = ("Hamburguer de Forno");
 	printf("Qual é a quantidade?: ");
 	scanf("%f", &num2);
 	c2 = num2*hamburguerfor;
 		c2=c1+c2;
 }
 if(op2==5){
 	op2 = ("esfirra");
 	printf("Qual é a quantidade?: ");
 	scanf("%f", &num2);
 	c2 = num2*esfirra;
 		c2=c1+c2;
}

if(op2==6){
 	op2 = ("Pastel de Frango");
 	printf("Qual é a quantidade?: ");
 	scanf("%f", &num2);
 	c2 = num2*pastelfra;
 		c2=c1+c2;
}

if(op2==7){
 	op2 = ("Enroladinho de Salsicha");
 	printf("Qual é a quantidade?: ");
 	scanf("%f", &num2);
 	c2 = num2*enrola;
 	c2=c2+c1;
 }
 system(limpa_tela);
 printf("Detalhes: %.f %s, Subtotal até agora: %.2f\n", num2,op2,c2);
 
}
	//após o usuario terminar a escolha de salgado, ele ira pra essa opção:
	
	printf("Deseja escolher uma bebida?\n\n");
	printf("1. Sim\n\n");
	printf("2. Não\n\n");
	printf("Escolha uma opção: ");
	scanf("%d", &opbebidas);
	printf("\n");
	printf("Carregando....");
	sleep(2);
	
	if(opbebidas==1){
		
	 //início das opções de bebidas
     printf("==============================\n");
     printf("Selecione uma bebida: \n\n");
   
     printf("1. refrigerante 500 ML: 3,00  \n\n");
     
     printf("2. cerveja 500 ML: 5,00 \n\n");
     
     printf("3. suco de maracuja 700 ML: 4,00 \n\n");
     
     printf("4. Água com gás 500 ML: 2,50 \n\n");
     
     printf("5. Suco de Abacaxi 700 ML: 6,00 \n\n");
     
     printf("6. Suco de Limão 500 ML: 3,50  \n\n");
     
     printf("7. Suco de Cajá 1,5L: 7,50 \n\n");
     printf("==============================\n");
     printf("Escolha uma opção: ");
     scanf("%d", &op3);
     printf("\n");
   
     if(op3==1){
   	   op3 = ("Refrigerantes"); 
       printf("\t Qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=re*num3;
     }
     if(op3==2){
   	   op3 = ("Cervejas"); 
       printf("\t Qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=ce*num3;
     }                                           //condicional das bebidas
     if(op3==3){
   	   op3 = ("Sucos de maracúja");
       printf("\t Qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=scm*num3;
     }
     if(op3==4){
   	   op3 = ("Águas com gás");
       printf("\t Qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=ag*num3;
     }
   
     if(op3==5){
   	   op3 = ("Sucos de Abacaxi");
       printf("\t Qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=sdab*num3;
     }
   
     if(op3==6){
   	   op3 = ("Sucos de Limão");
       printf("\t Qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=sdl*num3;
     }
   
     if(op3==7){
   	   op3 = ("Sucos de Cajá");
       printf("qual é a quantidade?: ");
       scanf("%f", &num3);
       c3=sdcaja*num3;
     }
      
      
     system(limpa_tela);
	 
	 //calculos
	 
	 //caso o usuario queira as três opções

printf("Detalhes Do Pedido: \n\n");

calculo=c1+c2+c3; //calculo do total do pedido

printf("Nome do cliente: %s \n\n", nome);

printf("%.f %s", num,op);
printf("\n\n");

printf("%.f %s ", num2,op2);
printf("\n\n");

printf("%.f %s ", num3,op3);
printf("\n\n");

printf(" O total do pedido ficou: R$ %.2f \n\n", calculo);

printf("Digite o Endereço de Entrega: ");
scanf("%s", end);

printf("forma de pagamento: \n\n");

printf("1. Débito \n\n");
printf("2. crédito \n\n");
printf("3. Pix \n\n");
printf("4. dinheiro \n\n");
printf("Escolha Uma Opção: ");
scanf("%d", &pay);

if(pay==1){
    printf("cartão de Débito. \n\n");
    
     printf("Digite o Número do cartão: ");
     scanf("%d", &num);
    
    printf("Digite a data de validade do cartão: 30/04/2025 \n");
    
    
    printf("Digite o codígo cvc: ");
    scanf("%d", &op);
    printf("pagamento em ánalise! assim que o pagamento for confirmado mandaremos um comprovante de pagamento no seu whatsapp.");
}
if(pay==2){
    printf("cartão de credito. \n\n");
    
     printf("Digite o Numero do cartão: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cartão: 30/04/2025 ");
    
    
    printf("Digite o codígo cvc: ");
    scanf("%d", &op);
    printf("pagamento em ánalise! assim que o pagamento for confirmado mandaremos um comprovante de pagamento no seu whatsapp.");
}
if(pay==3){
    printf("Área pix. \n\n");
    
    printf("CNPJ:9090666171 \n");
    printf("Envie o comprovante para nosso whatsapp: 71985226776. \n"); 
}
if(pay==4){
    printf("dinheiro \n");
    
    printf("Pronto,avisamos ao motoboy que será em dinheiro.");
    
    printf("Precisa de troco?: \n");
   printf("1. Sim \n");
   printf("2. Não \n");
   scanf("%d", &p);
   
   if(p==1){
   	printf("Qual é o Valor a ser trocado?: ");
   	scanf("%s", p);
   	printf("pagamento confirmado, obrigado pela prêferencia!");
   }
   else if(op==2){
   	
   	printf("Ok \n");
   }
}
break;
	 	 
	 switch(p){  //caso pessoa não queria escolher salgado
 
case 2:
	calculo=c1+c3;
	system(limpa_tela);
	printf("Detalhes Do Pedido: \n\n");

printf("Nome do cliente: %s \n\n", nome);

printf("%.f %s", num,op);
printf("\n\n");

printf("%.f %s ", num3,op3);
printf("\n\n");

printf(" O total do pedido ficou: R$ %.2f \n\n", calculo);

printf("Digite o Endereço de Entrega: ");
scanf("%s", end);

system(limpa_tela);
printf("%s", end);

printf("forma de pagamento: \n\n");

printf("1. Débito \n\n");
printf("2. crédito \n\n");
printf("3. Pix \n\n");
printf("4. dinheiro \n\n");
printf("Escolha Uma Opção: ");
scanf("%d", &pay);

if(pay==1){
    printf("cartão de Débito. \n\n");
    
     printf("Digite o Número do cartão: ");
     scanf("%d", &num);
    
    printf("Digite a data de validade do cartão: 30/04/2025 \n");
    
    
    printf("Digite o codígo cvc: ");
    scanf("%d", &op);
    printf("pagamento em ánalise! assim que o pagamento for confirmado mandaremos um comprovante de pagamento no seu whatsapp.");
}
if(pay==2){
    printf("cartão de credito. \n\n");
    
     printf("Digite o Numero do cartão: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cartão: 30/04/2025 ");
    
    
    printf("Digite o codígo cvc: ");
    scanf("%d", &op);
    printf("pagamento em ánalise! assim que o pagamento for confirmado mandaremos um comprovante de pagamento no seu whatsapp.");
}
if(pay==3){
    printf("Área pix. \n\n");
    
    printf("CNPJ:9090666171 \n");
    printf("Envie o comprovante para nosso whatsapp: 71985226776. \n"); 
}
if(pay==4){
    printf("dinheiro \n");
    
    printf("Pronto,avisamos ao motoboy que será em dinheiro.");
    
    printf("Precisa de troco?: \n");
   printf("1. Sim \n");
   printf("2. Não \n");
   scanf("%d", &p);
   
   if(p==1){
   	printf("Qual é o Valor a ser trocado?: ");
   	scanf("%s", p);
   	printf("Pedido confirmado com sucesso, obrigado pela prêferencia!");
   }
   else if(op==2){
   	
   	printf("Ok \n");
   	printf("Pedido confirmado com sucesso, obrigado pela prêferencia!");
   }
}
break;
}

switch(opbebidas){ //caso a pessoa não queira bebida

calculo=c1+c2;	
system(limpa_tela);	
case 2: 
printf("Detalhes Do Pedido: \n\n");

printf("Nome do cliente: %s \n\n", nome);

printf("%.f %s", num,op);
printf("\n\n");

printf("%.f %s ", num2,op2);
printf("\n\n");

printf(" O total do pedido ficou: R$ %.2f \n\n", calculo);

printf("Digite o Endereço de Entrega: ");
scanf("%s", end);

system(limpa_tela);
printf("%s", end);
printf("\n");

printf("forma de pagamento: \n\n");

printf("1. Débito \n\n");
printf("2. crédito \n\n");
printf("3. Pix \n\n");
printf("4. dinheiro \n\n");
printf("Escolha Uma Opção: ");
scanf("%d", &pay);

if(pay==1){
    printf("cartão de Débito. \n\n");
    
     printf("Digite o Número do cartão: ");
     scanf("%d", &num);
    
    printf("Digite a data de validade do cartão: 30/04/2025 \n");
    
    
    printf("Digite o codígo cvc: ");
    scanf("%d", &op);
    printf("agamento em ánalise! assim que o pagamento for confirmado mandaremos um comprovante de pagamento no seu whatsapp.");
}
if(pay==2){
    printf("cartão de credito. \n\n");
    
     printf("Digite o Numero do cartão: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cartão: 30/04/2025 ");
    
    
    printf("Digite o codígo cvc: ");
    scanf("%d", &op);
    printf("agamento em ánalise! assim que o pagamento for confirmado mandaremos um comprovante de pagamento no seu whatsapp.");
}
if(pay==3){
    printf("Área pix. \n\n");
    
    printf("CNPJ:9090666171 \n");
    printf("Envie o comprovante para nosso whatsapp: 71985226776. \n"); 
}
if(pay==4){
    printf("dinheiro \n");
    
    printf("Pronto,avisamos ao motoboy que será em dinheiro.");
    
    printf("Precisa de troco?: \n");
   printf("1. Sim \n");
   printf("2. Não \n");
   scanf("%d", &p);
   
   if(p==1){
   	printf("Qual é o Valor a ser trocado?: ");
   	scanf("%s", p);
   	printf("Pedido confirmado com sucesso, obrigado pela prêferencia!");
   }
   else if(op==2){
   	
   	printf("Ok \n");
   	printf("Pedido confirmado com sucesso, obrigado pela prêferencia!");
   }
}
	break;
		
	
}
 

	case 2: //refere-se ao switch(escolha)
		
	 printf("temos Lojas Espalhadas por toda Salvador: \n\n");
	 
	 printf("Localizações\n\n");
	 
	 printf(". Rua Mario Barros 32\n");
	 printf(". Rua da Arueira Vermelha 20\n");
	 printf(". Avenida Dendezeiros 124\n");
	 
   break;
   
   case 3:
   	
   	printf("Siga nossas redes sociais\n\n");
   	
   	printf("@Diegosgz_\n\n");
   	printf("@theuslima_01\n\n");
   	printf("@_dsantos9\n\n");
   	printf("@Damassa666\n\n");
   	
   	break;
   	
   	case 4:
   		printf("Nossa Política de privacidade\n\n");
   		
   	printf("A política de privacidade (ou declaração de política de privacidade) é o documento por meio do qual a pessoa física\n");
	printf("ou jurídica que mantém um site ou aplicativo expõe e explica a todos os interessados a forma como os dados\n");   	
	printf("pessoais dos usuários da plataforma serão tratados.");
	printf("O assunto é regulamentado, no Brasil, principalmente pela Lei Geral de Proteção de Dados Pessoais (LGPD)\n");
	printf(" lei que estabeleceu uma série de exigências àqueles que realizam operações de tratamento de dados pessoais. A lei se\n");
	printf("aplica quando: \n\n");
	
	printf("se a operação de tratamento é realizada no território nacional;");
	printf("se a atividade de tratamento tem por objetivo a oferta de produtos ou serviços ou o tratamento de dados de indivíduos localizados no território nacional;");
	printf("se os dados pessoais são coletados no território nacional.");
	
	break;
		
	default:
	printf("opção incorreta");
     
		
	} //fim do switch escolha
  
   
    printf("Detalhes Do Pedido: \n");

    printf("Nome do cliente: %s \n", nome);
    
    printf("%d %s o total ficou: %d \n",num,op,c1);
    
   printf("Digite o Endereço de Entrega: ");
   scanf("%s", end);

printf("selecione uma forma de pagamento: \n");

printf("1. Débito \n");
printf("2. crédito \n");
printf("3. Pix \n");
printf("4. dinheiro \n");
scanf("%d", &pay);

if(pay==1){
    printf("cartão de Debito. \n\n");
	 
    printf("Digite o Numero do cartão: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cartão: 30/04/2025 \n");
   
    
    printf("Digite o codígo cvc: ");
    scanf("%d", &op);
    
}
if(pay==2){
    printf("cartão de credito. \n\n");
    
    printf("Digite o Numero do cartão: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cartão: 30/04/2025 \n ");
    scanf("%d", &num2);
    
    printf("Digite o codígo cvc: ");
    scanf("%d", &op);
}
if(pay==3){
    printf("Nosso pix. \n\n");
    
    printf("CNPJ:9090666171 \n");
    printf("Envie o comprovante para nosso whatsapp: 71985226776.");    
}

}


//final siwtch escolha

switch(p){      //caso pessoa não queria escolher salgado
 
case 2:
	
	printf("Detalhes Do Pedido: \n\n");

printf("Nome do cliente: %s \n\n", nome);

printf("%.f %s", num,op);
printf("\n\n");

printf("%.f %s ", num3,op3);
printf("\n\n");

printf(" O total do pedido ficou: R$ %.2f \n\n", calculo);

printf("Digite o Endereço de Entrega: ");
scanf("%s", end);

printf("forma de pagamento: \n\n");

printf("1. Débito \n\n");
printf("2. crédito \n\n");
printf("3. Pix \n\n");
printf("4. dinheiro \n\n");
printf("Escolha Uma Opção: ");
scanf("%d", &pay);

if(pay==1){
    printf("cartão de Débito. \n\n");
    
     printf("Digite o Número do cartão: ");
     scanf("%d", &num);
    
    printf("Digite a data de validade do cartão: 30/04/2025 \n");
    
    
    printf("Digite o codígo cvc: ");
    scanf("%d", &op);
    
    printf("agamento em ánalise! assim que o pagamento for confirmado mandaremos um comprovante de pagamento no seu whatsapp.");
}
if(pay==2){
    printf("cartão de credito. \n\n");
    
     printf("Digite o Numero do cartão: ");
    scanf("%d", &num);
    
    printf("Digite a data de validade do cartão: 30/04/2025 ");
    
    
    printf("Digite o codígo cvc: ");
    scanf("%d", &op);
    
    printf("agamento em ánalise! assim que o pagamento for confirmado mandaremos um comprovante de pagamento no seu whatsapp.");
}
if(pay==3){
    printf("Área pix. \n\n");
    
    printf("CNPJ:9090666171 \n");
    printf("Envie o comprovante para nosso whatsapp: 71985226776. \n"); 
}
if(pay==4){
    printf("dinheiro \n");
    
    printf("Pronto,avisamos ao motoboy que será em dinheiro.");
    
    printf("Precisa de troco?: \n");
   printf("1. Sim \n");
   printf("2. Não \n");
   scanf("%d", &p);
   
   if(p==1){
   	printf("Qual é o Valor a ser trocado?: ");
   	scanf("%s", p);
   }
   else if(op==2){
   	
   	printf("Ok \n");
   }
}
break;



}
return 0;
}
/*Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
Projeto-Final-de-LP/Projeto-final-logíca-progamação.c at master · pontesdiego/Projeto-Final-de-LP*/
